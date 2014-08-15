#ifndef ATTACHMENTS_H
#define ATTACHMENTS_H

#include <QDialog>

namespace Ui {
class Attachments;
}

class Attachments : public QDialog
{
    Q_OBJECT

public:
    explicit Attachments(QWidget *parent = 0);
    ~Attachments();

    void attachForm(QString);
    void readAttache(QStringList);

    QStringList attachments;

 signals:
    void all_clear();


private slots:
    void on_buttonBox_accepted();

private:
    Ui::Attachments *ui;

    QString mode;
    QString sight;
    QString barrel;
    QString tactical;
    QString magazine;
    QString bullets;
    QString light;

};

#endif // ATTACHMENTS_H
