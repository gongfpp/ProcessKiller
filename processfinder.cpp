#include "processfinder.h"
#include "QProcess"
#include "QDebug"
ProcessFinder::ProcessFinder()
{
    setAutoDelete(true);

}
void ProcessFinder::run()  {
    qDebug() << "run()";
    QProcess process;
    process.start("tasklist.exe");
    if(process.waitForFinished()){
        QString tasklist = QString::fromLocal8Bit(process.readAll());
        qDebug() << tasklist ;
        emitUiDisplay(tasklist);
    }
}
