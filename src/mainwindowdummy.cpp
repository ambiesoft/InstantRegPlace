#include "mainwindowdummy.h"
#include "ui_mainwindow.h"

MainWindowDummy::MainWindowDummy(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    TabFrame* frame = (TabFrame*)ui->tabWidget->widget(0);

}

MainWindowDummy::~MainWindowDummy()
{
    delete ui;
}
