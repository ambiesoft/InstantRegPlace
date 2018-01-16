#ifndef MAINWINDOWREAL_H
#define MAINWINDOWREAL_H

#include <QMainWindow>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

#include "tabframe.h"

class MainWindowReal : public QMainWindow
{
    Q_OBJECT

    bool bShown_ = false;

public:
    explicit MainWindowReal(QWidget *parent = 0);
    ~MainWindowReal();

public:
    QWidget *centralWidget;
    QVBoxLayout *centralLayout;
    QTabWidget *tabWidget;
    QMenuBar *menuBar;

    void retranslateUi();

private:
    void AddNewTab();

protected:
    void closeEvent(QCloseEvent *event);
    void showEvent( QShowEvent* event );
};

#endif // MAINWINDOWREAL_H
