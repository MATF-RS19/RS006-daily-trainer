#ifndef STATISTIKA_H
#define STATISTIKA_H

#include <QDialog>

namespace Ui {
class statistika;
}

class statistika : public QDialog
{
    Q_OBJECT

public:
    explicit statistika(QWidget *parent = nullptr);
    ~statistika();

private slots:
    void makePlot(QString,int);
    void on_comboBox_activated(const QString &arg1);
    void on_pushButton_clicked();

private:
    Ui::statistika *ui;
};

#endif // STATISTIKA_H
