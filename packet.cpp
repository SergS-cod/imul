#include "packet.h"

packet::packet()
{

}

packet::packet(const QByteArray& Data){
    isValid = 1;
    bool start = 0;
    bool end = 0;
    int index_start = 0;
    int index_end  = 0;

    if(Data.size() == 0){
        isValid = 0;
    }

    int index_cycle = 0;
    qDebug()<<"=======:Data "<<Data;

    if(Data.right(Data.size() - index_start).left(2) == "7E" ){
        start = 1;
        index_cycle++;
        if(Data.right(2) != "0D"){
            isValid = 0;
        }
    }
    else{
        isValid = 0;
    }

    if(isValid){
        for(int i=index_start;i<Data.size();i+=1){
            if(Data.right(Data.size() - index_start).left(2) == "7E"){
                start = 1;
                index_start++;
            }
            else{
                if(index_start==Data.size()){
                    break;
                }else{
                    isValid = 0;
                    break;
                }
            }
            for(int j = index_start + 2;j<Data.size()+1;j+=1){
                //qDebug()<<"========: "<<Data.left(j).right(2);
                if(Data.left(j).right(2) == "0D"){
                    end = 1;
                    index_end = j - 1;
                    break;
                }
                if(Data.left(j).right(2) == "7E" && end==0){
                    if((Data.left(j + 10).right(2) == "0D" && Data.left(j + 8).right(2) != "0D" && Data.left(j + 6).right(2) != "0D" && Data.left(j + 4).right(2) != "0D"&& Data.left(j + 2).right(2) != "0D"
                        && Data.left(j + 8).right(2) != "7E"  && Data.left(j + 6).right(2) != "7E"  && Data.left(j + 4).right(2) != "7E"  && Data.left(j + 2).right(2) != "7E")){
                    }else{
                        //                        qDebug()<< Data.left(j + 2).right(1).toInt()*10 + Data.left(j + 4).right(1).toInt();
                        //                        qDebug()<< Data.left(j + 6).right(1).toInt()*10 + Data.left(j + 8).right(1).toInt();
                        //                        qDebug()<< Data.left(j + 10).right(1).toInt()*10 + Data.left(j + 12).right(1).toInt();
                        if((Data.left(j + 14).right(2) == "0D" && Data.left(j + 12).right(2) != "0D" && Data.left(j + 10).right(2) != "0D" && Data.left(j + 8).right(2) != "0D" && Data.left(j + 6).right(2) != "0D" && Data.left(j + 4).right(2) != "0D"&& Data.left(j + 2).right(2) != "0D"
                            && Data.left(j + 14).right(2) != "7E"&& Data.left(j + 12).right(2) != "7E"&& Data.left(j + 10).right(2) != "7E" && Data.left(j + 8).right(2) != "7E"  && Data.left(j + 6).right(2) != "7E"  && Data.left(j + 4).right(2) != "7E"  && Data.left(j + 2).right(2) != "7E")){
                            if(Data.left(j + 2).right(1).toInt()*10 + Data.left(j + 4).right(1).toInt() < 0 || Data.left(j + 2).right(1).toInt()*10 + Data.left(j + 4).right(1).toInt() > 12){
                                isValid = 0;
                                break;
                            }

                            if(Data.left(j + 6).right(1).toInt()*10 + Data.left(j + 8).right(1).toInt() < 0 || Data.left(j + 6).right(1).toInt()*10 + Data.left(j + 8).right(1).toInt() > 30){
                                isValid = 0;
                                break;
                            }

                            if(Data.left(j + 10).right(1).toInt()*10 + Data.left(j + 12).right(1).toInt() < 0 || Data.left(j + 10).right(1).toInt()*10 + Data.left(j + 12).right(1).toInt() > 24){
                                isValid = 0;
                                break;
                            }
                        }
                        else{
                            isValid = 0;
                            break;
                        }

                    }
                }
            }

            if(start == 1 && end == 1){
                index_start--;
                // qDebug()<<"================:index_start"<<index_start;
                //qDebug()<<"================:index_end"<<index_end;
                parameter tmp(Data.left(index_end + 1).right((index_end - index_start) + 1));
                parameters.append(tmp);

            }
            else{
                isValid = 0;
                break;
            }
            start = 0;
            end = 0;
            index_start = index_end + 1;
        }
    }

    if(!isValid){
        parameters.clear();
    }

    //*******************
    qDebug()<<"=============parameters.count() : "<<parameters.count();

    for(int i=0;i<parameters.count();i++){
        qDebug()<<"=============parameters: "<<parameters[i].getDATA();
        parameters[i].print_parameter_inf();
    }

    qDebug()<<"================is_VALID: "<<isValid;
    qDebug()<<"\n\n";
    //*******************

}

QVector<parameter> packet::getParameters() const{
    return parameters;
}

bool packet::getIsValid() const{
    return isValid;
}

void packet::Add(parameter tmp)
{
    parameters.append(tmp);
}


int packet::getCountParameters(){
    return parameters.count();
}
