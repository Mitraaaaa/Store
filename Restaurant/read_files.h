#ifndef READ_FILES_H
#define READ_FILES_H

#include <QDialog>

namespace Ui {
class read_files;
}

class read_files : public QDialog
{
    Q_OBJECT

public:
    explicit read_files(QWidget *parent = nullptr);
    ~read_files();

private slots:
    void on_pushButton_clicked();

private:
    Ui::read_files *ui;
};

#endif // READ_FILES_H
