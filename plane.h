#ifndef PLANE_H
#define PLANE_H

#include <QMainWindow>
#include <QString>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class Plane; }
QT_END_NAMESPACE

class Plane : public QMainWindow
{
    Q_OBJECT

public:
    Plane(QWidget *parent = nullptr);

    ~Plane();

private slots:
    void on_pushButton_2_clicked();


    void on_pushButtonAdd_clicked();

    void on_pushButton_clicked();

private:
    Ui::Plane *ui;
    bool takeInput;
    void compute();
     QVector<QString> PlaneInfo;
};
#endif // PLANE_H
