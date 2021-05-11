#include "parameter.h"

parameter::parameter(const QByteArray& Data){
    QByteArray tmp, lead_, projector_id_, command_, space_, variable_, carriage_return_,password_,date_;

    int index = 0;
    bool sign = 1;
    DATA = Data;
    int_command = 0;
    int_variable = 0;
    int_password = -1;
    isValid = 1;

    lead_ = Data.left(2);
    projector_id_ = Data.left(6).right(4);

    for(int i=10;i<Data.size();i++){
        tmp = Data.left(i).right(2);
        if(tmp == "20"){
            command_ = Data.left(i - 2).right(i - 2 - 6);
            index = i;
            break;
        }
    }
    space_ = Data.left(index).right(2);
    variable_ =  Data.right(Data.size() - index);
    variable_.remove(variable_.size() - 2,variable_.size());
    carriage_return_ = Data.right(2);

    int ind_pass = 0;
    bool pass = 0;
    bool dat = 0;
    for(int i=0;i<variable_.size();i++){
        if(variable_.left(2 + i * 2).right(2) == "7E"){
            pass = 1;
            dat = 1;
            ind_pass = i;
            break;
        }
    }


    //qDebug()<<variable_.right(variable_.size() - ind_pass - 1).size() + 1;
    if(variable_.right(variable_.size() - ind_pass - 1).size() == 10){
        pass = 1;
        dat = 0;
    }

    if(variable_.right(variable_.size() - ind_pass - 1).size() + 1  == 14){
        dat = 1;
        pass = 0;
    }


    if(pass){
        int_password = 0;
        password_.append(variable_.right(variable_.size() - ind_pass - 1));
        variable_.remove(ind_pass + 1,variable_.size());
    }

    if(dat){
        date_.append(variable_.right(variable_.size() - ind_pass));
        variable_.remove(ind_pass,variable_.size());

//        qDebug()<<date_;
//        qDebug()<<date_.right(4).left(2).right(1).toInt() *10 + date_.right(1).toInt();
//        qDebug()<<date_.right(8).left(2).right(1).toInt()*10 + date_.right(6).left(2).right(1).toInt();
//        qDebug()<<date_.right(12).left(2).right(1).toInt()*10 + date_.right(10).left(2).right(1).toInt();

        if(date_.right(4).left(2).right(1).toInt() *10 + date_.right(1).toInt() > 24 || date_.right(4).left(2).right(1).toInt() *10 + date_.right(1).toInt() < 0){
            isValid = false;
        }

        if(date_.right(8).left(2).right(1).toInt()*10 + date_.right(6).left(2).right(1).toInt() > 30 || date_.right(8).left(2).right(1).toInt()*10 + date_.right(6).left(2).right(1).toInt() < 0){
            isValid = false;
        }

        if(date_.right(12).left(2).right(1).toInt()*10 + date_.right(10).left(2).right(1).toInt() > 12 || date_.right(12).left(2).right(1).toInt()*10 + date_.right(10).left(2).right(1).toInt() < 0){
            isValid = false;
        }
    }

    LeadCode.append(lead_);
    Projector_ID.append(projector_id_);
    Command.append(command_);
    space.append(space_);
    variable.append(variable_);
    date.append(date_);
    password.append(password_);
    carriage_return.append(carriage_return_);

    if(pass){
        for(int i = 0;i<password.size() / 2;i++){
            int_password *= 10;
            int_password += password.left(2 + i*2).right(1).toInt();
        }
    }
    for(int i = 0;i<Command.size() / 2;i++){
        int_command *= 10;
        int_command += Command.left(2 + i*2).right(1).toInt();
    }

    for(int i = 0;i<variable.size() / 2;i++){
        int_variable *= 10;
        if(variable.left(2 + i*2).right(2) == "2D"){
            sign = 0;
        }
        else{
            int_variable += variable.left(2 + i*2).right(1).toInt();
        }
    }

    if(!sign){
        int_variable *=-1;
    }
    lenght = Data.size();

    Name = Data.data();
    update_isValid();
}

parameter::parameter(int CMD, int CMD_value){
    build(CMD,CMD_value);
    Name = DATA.data();
}

parameter::parameter(int CMD, int CMD_value, int pass){
    int tmp;
    int count_c = 0;
    int rang;
    isValid = true;
    if(pass > 9999 || pass < 0){
        isValid = false;
    }

    if(pass != -1){
        rang = 1;
        tmp = pass;
        int_password = pass;
        password.append("7E");
        while(tmp>1){
            count_c++;
            tmp /= 10;
            rang *= 10;
        }
        for(int j = 0;j<4-count_c-1;j++){
            password.append("30");
        }
        tmp = pass;

        for(int i =count_c;i>=0;i--){
            password.append("3" + QString::number(tmp/rang));
            tmp %= rang;
            rang /= 10;
        }
    }

    build(CMD,CMD_value);
    Name = DATA.data();
}


parameter::parameter(int CMD,QString dat){
    int dat_int = dat.toInt();
    int tmp;
    int count_c = 0;
    int rang;
    isValid = true;

    //qDebug()<<dat;
    //qDebug()<<dat.right(2).toInt();
    //qDebug()<<dat.right(4).left(2).toInt();

    if(dat.right(2).toInt() >24 || dat.right(2).toInt() < 0){
        isValid = false;
    }
    if(dat.right(4).left(2).toInt() > 30 || dat.right(4).left(2).toInt() < 0){
        isValid = false;
    }

    qDebug()<<"=============="<<dat;
    if(dat.size() != 0 ){
        rang = 1;
        tmp = dat_int;
        date.append("7E");
        while(tmp>1){
            count_c++;
            tmp /= 10;
            rang *= 10;
        }
        if(count_c == 4){
            date.append("30");
            // qDebug()<<dat.right(5).left(1).toInt();
        }else{
            if(dat.right(6).left(2).toInt() >12 || dat.right(6).left(2).toInt() < 0){
                //qDebug()<<dat.right(6).left(2).toInt();
                isValid = false;
            }
        }
        tmp = dat_int;
        for(int i =count_c;i>=0;i--){
            date.append("3" + QString::number(tmp/rang));
            tmp %= rang;
            rang /= 10;
        }
    }

    tmp = CMD;
    count_c = 0;
    rang = 1;

    int_command = CMD;
    LeadCode.append("7E");
    Projector_ID.append("3030");

    while(tmp>1){
        count_c++;
        tmp /= 10;
        rang *= 10;
    }

    tmp = CMD;
    if(CMD==0){
        Command.append("30");
    }
    for(int i =count_c;i>=0;i--){
        Command.append("3" + QString::number(tmp/rang));
        tmp %= rang;
        rang /= 10;
    }

    space.append("20");
    carriage_return.append("0D");

    DATA.append(LeadCode);
    DATA.append(Projector_ID);
    DATA.append(Command);
    DATA.append(space);
    DATA.append(variable);
    DATA.append(date);
    DATA.append(password);
    DATA.append(carriage_return);
    lenght = DATA.size();
    update_isValid();
    Name = DATA.data();
}

parameter::parameter()
{

}

parameter::~parameter()
{
    DATA.clear();
    LeadCode.clear();
    Projector_ID.clear();
    Command.clear();
    space.clear();
    variable.clear();
    carriage_return.clear();
}

bool parameter::check_include_interval(int first, int end){
    if(first<=int_variable && int_variable<=end){
        return 1;
    }
    return 0;
}

void parameter::print_parameter_inf(){
    qDebug()<<"Data:            "<<DATA;
    qDebug()<<"LeadCode:        "<<LeadCode;
    qDebug()<<"Projector_ID:    "<<Projector_ID;
    qDebug()<<"Command:         "<<Command;
    qDebug()<<"space:           "<<space;
    qDebug()<<"variable:        "<<variable;
    qDebug()<<"carriage_return: "<<carriage_return;
    qDebug()<<"password:        "<<password;
    qDebug()<<"date:            "<<date;
    qDebug()<<"int_command:     "<<int_command;
    qDebug()<<"int_variable:    "<<int_variable;
    qDebug()<<"int_password:    "<<int_password;
    qDebug()<<"lenght:          "<<lenght;
    qDebug()<<"Name:            "<<Name;
    qDebug()<<"isValid:         "<<getIsValid();
}

void parameter::update_isValid(){
    if(DATA.size() == 0){
        isValid = false;
    }

    if(LeadCode != "7E" || Projector_ID != "3030" || carriage_return != "0D"){
        isValid = false;
    }
    if(int_command > 999 || int_command < 0){
        isValid = false;
    }
}


void parameter::build(int CMD, int CMD_value){
    int tmp = CMD;
    int count_c = 0;
    int rang = 1;

    int_command = CMD;
    int_variable = CMD_value;
    if(isValid != false){
        isValid = true;
    }
    LeadCode.append("7E");
    Projector_ID.append("3030");

    while(tmp>1){
        count_c++;
        tmp /= 10;
        rang *= 10;
    }

    tmp = CMD;
    if(CMD==0){
        Command.append("30");
    }
    for(int i =count_c;i>=0;i--){
        Command.append("3" + QString::number(tmp/rang));
        tmp %= rang;
        rang /= 10;
    }

    tmp = abs(CMD_value);
    count_c = 0;
    rang = 1;
    while(tmp>1){
        count_c++;
        tmp /= 10;
        rang *= 10;
    }

    tmp = abs(CMD_value);

    if(CMD_value<0){
        variable.append("2D");
    }

    for(int i =count_c;i>=0;i--){
        variable.append("3" + QString::number(tmp/rang));
        tmp %= rang;
        rang /= 10;
    }

    space.append("20");
    carriage_return.append("0D");
    DATA.append(LeadCode);
    DATA.append(Projector_ID);
    DATA.append(Command);
    DATA.append(space);
    DATA.append(variable);
    DATA.append(date);
    DATA.append(password);
    DATA.append(carriage_return);
    lenght = DATA.size();
    update_isValid();
}

int parameter::getInt_password() const
{
    return int_password;
}




QByteArray parameter::getDate() const
{
    return date;
}

QString parameter::getName() const
{
    return Name;
}

int parameter::getLenght() const
{
    return lenght;
}

QByteArray parameter::getPassword() const
{
    return password;
}

QByteArray parameter::getDATA() const{
    return DATA;
}

QByteArray parameter::getLeadCode() const{
    return LeadCode;
}

QByteArray parameter::getProjector_ID() const{
    return Projector_ID;
}

QByteArray parameter::getCommand() const{
    return Command;
}

QByteArray parameter::getSpace() const{
    return space;
}

QByteArray parameter::getVariable() const{
    return variable;
}

QByteArray parameter::getCarriage_return() const{
    return carriage_return;
}

bool parameter::getIsValid() const{
    return isValid;
}

int parameter::getInt_variable() const{
    return int_variable;
}

int parameter::getInt_command() const{
    return int_command;
}
