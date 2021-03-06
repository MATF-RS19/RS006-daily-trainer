#ifndef DRUGIPROZOR_H
#define DRUGIPROZOR_H

#include <QDialog>
#include "statistika.h"
#include <QAbstractItemModel>
#include <QTime>
#include "stopwatch.h"

namespace Ui {
class drugiprozor;
}

class drugiprozor : public QDialog
{
    Q_OBJECT

public:
    explicit drugiprozor(QWidget *parent = nullptr);
    ~drugiprozor();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

public slots:
    void startStopTimer();
    void resetTimer();
    void update();
private:
    Ui::drugiprozor *ui;
    Stopwatch* watch;
};

#endif // DRUGIPROZOR_H
