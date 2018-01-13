#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindowDummy : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowDummy(QWidget *parent = 0);
    ~MainWindowDummy();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
