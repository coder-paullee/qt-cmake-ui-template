#include "dialog.h"
#include "ui_dialog.h"

#include <uv.h>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QString text;
    text.sprintf("uv version:%s", uv_version_string());
    ui->pushButton->setText(text);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
}
