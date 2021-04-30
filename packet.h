#ifndef PACKET_H
#define PACKET_H
#include <QMainWindow>
#include <parameter.h>
#include <QVector>
#include <QString>
#include <QDebug>
#include <cmath>

class packet
{
public:
    packet();
    packet(const QByteArray& Data);
    QVector<parameter> getParameters() const;
    bool getIsValid() const;
    void Add(parameter tmp);

private:
    QVector<parameter> parameters;
    bool isValid;
    int getCountParameters();

};

#endif // PACKET_H
