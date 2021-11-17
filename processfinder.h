#ifndef PROCESSFINDER_H
#define PROCESSFINDER_H

#include <QObject>
#include "QRunnable"


class ProcessFinder :public QObject, public QRunnable
{
    Q_OBJECT
public:
    ProcessFinder();
    void run() override;

signals:
    void emitUiDisplay(QString);
};

#endif // PROCESSFINDER_H
