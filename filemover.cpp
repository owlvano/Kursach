#include "filemover.h"
#include "xmldata.h"

FileMover::FileMover()
{

}


bool FileMover::moveFile(const QString &oldName, const QString &newName)
{
    QFile newFile(newName);
    if (newFile.exists()) {
        newFile.remove();
    }
    return QFile::rename(oldName,newName);
}

void FileMover::moveFileByVector(QVector<Element> &elements)
{
    foreach(Element tmp,elements){
       FileMover::moveFile(tmp.getName(),tmp.getPath()); //sos
    }
}
