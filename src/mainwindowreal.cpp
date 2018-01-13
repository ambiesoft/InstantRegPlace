#include "mainwindowreal.h"

void MainWindowReal::retranslateUi()
{
    this->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
    tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "1", nullptr));
} // retranslateUi


MainWindowReal::MainWindowReal(QWidget *parent) :
    QMainWindow(parent)
{
    if (this->objectName().isEmpty())
        this->setObjectName(QStringLiteral("MainWindow"));
    this->resize(628, 471);
    centralWidget = new QWidget(this);
    centralWidget->setObjectName(QStringLiteral("centralWidget"));
    verticalLayout = new QVBoxLayout(centralWidget);
    verticalLayout->setSpacing(6);
    verticalLayout->setContentsMargins(11, 11, 11, 11);
    verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
    tabWidget = new QTabWidget(centralWidget);
    tabWidget->setObjectName(QStringLiteral("tabWidget"));

    tab = new QWidget();
    tab->setObjectName(QStringLiteral("tab"));
    verticalLayout_2 = new QVBoxLayout(tab);
    verticalLayout_2->setSpacing(6);
    verticalLayout_2->setContentsMargins(11, 11, 11, 11);
    verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
    textEdit = new QTextEdit(tab);
    textEdit->setObjectName(QStringLiteral("textEdit"));

    verticalLayout_2->addWidget(textEdit);

    frame = new TabFrame(tab);

    verticalLayout_2->addWidget(frame);

    tabWidget->addTab(tab, QString());

    verticalLayout->addWidget(tabWidget);

    this->setCentralWidget(centralWidget);
    menuBar = new QMenuBar(this);
    menuBar->setObjectName(QStringLiteral("menuBar"));
    menuBar->setGeometry(QRect(0, 0, 628, 21));
    this->setMenuBar(menuBar);



    retranslateUi();

    QMetaObject::connectSlotsByName(this);
}

MainWindowReal::~MainWindowReal()
{
}
