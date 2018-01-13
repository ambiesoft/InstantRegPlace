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

public:
    explicit MainWindowReal(QWidget *parent = 0);
    ~MainWindowReal();

public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    TabFrame *frame;


    QMenuBar *menuBar;

    void retranslateUi();
};

#endif // MAINWINDOWREAL_H
