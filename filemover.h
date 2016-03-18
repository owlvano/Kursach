#ifndef FILEMOVER_H
#define FILEMOVER_H

#include <QFile>
#include <QVector>
#include <xmldata.h>
class FileMover
{

public:
    FileMover();

    static bool moveFile(const QString & , const QString &);
    static void moveFileByVector(QVector<Element> &);

};

#endif // FILEMOVER_H
