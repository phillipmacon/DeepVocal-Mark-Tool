#ifndef PROJECT_H
#define PROJECT_H

#include <QString>
#include <QStringList>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include "cvvcsymbol.h"

class Project
{
public:
    Project();
    QStringList getsymbols();
    void setsymbols(QStringList symbols);
    QVector<CVVCSymbol> getflags();
    void setflags(QVector<CVVCSymbol> flags);
    QStringList getpaths();
    void setpaths(QStringList paths);
    QString getpitch();
    void setpitch(QString pitch);
    bool writefile(QString filepath);
    bool readfile(QString filepath);
    void clear();
    Project operator=(Project pro);
    bool operator==(Project pro);
    bool operator!=(Project pro);
private:
    QJsonObject data;
};

#endif // PROJECT_H
