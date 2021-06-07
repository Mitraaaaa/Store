#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QFile>
#include<QTextStream>
#include<QStringList>
using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void save_user_pass_file();
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_signup_clicked();

    void on_login_clicked();

    void on_reload_clicked();

private:
    Ui::MainWindow *ui;
    QMap<QString,QString> *user_pass;
};
#endif // MAINWINDOW_H
