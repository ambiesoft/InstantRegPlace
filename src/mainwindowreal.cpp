#include "mainwindowreal.h"
#include "tabpage.h"

void MainWindowReal::retranslateUi()
{
    this->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
} // retranslateUi


MainWindowReal::MainWindowReal(QWidget *parent) :
    QMainWindow(parent)
{
    if (this->objectName().isEmpty())
        this->setObjectName(QStringLiteral("MainWindow"));
    this->resize(628, 471);
    centralWidget = new QWidget(this);
    centralWidget->setObjectName(QStringLiteral("centralWidget"));
    centralLayout = new QVBoxLayout(centralWidget);
    centralLayout->setSpacing(6);
    centralLayout->setContentsMargins(11, 11, 11, 11);
    centralLayout->setObjectName(QStringLiteral("verticalLayout"));
    tabWidget = new QTabWidget(centralWidget);
    tabWidget->setObjectName(QStringLiteral("tabWidget"));

    centralLayout->addWidget(tabWidget);

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
void MainWindowReal::closeEvent(QCloseEvent *event)
{
    QMainWindow::closeEvent(event);
}
void MainWindowReal::showEvent( QShowEvent* event )
{
    QMainWindow::showEvent( event );

    if(bShown_)
        return;
    bShown_ = true;

    AddNewTab();
}
void MainWindowReal::AddNewTab()
{
    // TabPage* currentTab = tabWidget->currentWidget();
    TabPage* newtab = new TabPage(tabWidget);
    tabWidget->addTab(newtab, "1");
}

