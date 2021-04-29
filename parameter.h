#ifndef PARAMETER_H
#define PARAMETER_H

#include <QMainWindow>
#include <QVector>
#include <QString>
#include <QDebug>
#include <cmath>
class parameter
{
public:
    parameter(const QByteArray& Data);
    parameter(int CMD, int CMD_value);            //command, variable
    parameter(int CMD, int CMD_value, int pass);  //command, variable password
    parameter(int CMD, QString dat);               //command date
    ~parameter();
    parameter();

    QByteArray getLeadCode() const;
    QByteArray getProjector_ID() const;
    QByteArray getCommand() const;
    QByteArray getSpace() const;
    QByteArray getVariable() const;
    QByteArray getCarriage_return() const;
    QByteArray getDATA() const;
    QByteArray getPassword() const;
    QByteArray getDate() const;
    QString getName() const;
    int getLenght() const;
    int getInt_variable() const;
    int getInt_command() const;
    bool getIsValid() const;
    bool check_include_interval(int first, int end);  
    void print_parameter_inf();
    void update_isValid();
    void build(int, int);

private:
    QString Name;
    QByteArray DATA;
    QByteArray LeadCode;
    QByteArray Projector_ID;
    QByteArray Command;
    QByteArray space;
    QByteArray variable;
    QByteArray carriage_return;
    QByteArray password;
    QByteArray date; 
    int lenght;
    int int_command;
    int int_variable;
    int int_password;
    bool isValid;
};

#endif // PARAMETER_H
