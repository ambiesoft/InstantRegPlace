#ifndef TABFRAME_H
#define TABFRAME_H

#include <QFrame>
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

class TabFrame : public QFrame
{
public:

    QGridLayout *gridLayout;
    QLabel *labelRepace;
    QLineEdit *lineReplace;
    QLabel *labelRegex;
    QLineEdit *lineRegex;
    QPushButton *pushButton;

    void retranslateUi()
    {
        labelRepace->setText(QApplication::translate("MainWindow", "Re&place:", nullptr));
        labelRegex->setText(QApplication::translate("MainWindow", "&Regex:", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Replace", nullptr));
    } // retranslateUi

    TabFrame(QWidget* parent) : QFrame(parent)
    {
        this->setObjectName(QStringLiteral("frame"));
        this->setFrameShape(QFrame::StyledPanel);
        this->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(this);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelRepace = new QLabel(this);
        labelRepace->setObjectName(QStringLiteral("labelRepace"));

        gridLayout->addWidget(labelRepace, 1, 0, 1, 1);

        lineReplace = new QLineEdit(this);
        lineReplace->setObjectName(QStringLiteral("lineReplace"));

        gridLayout->addWidget(lineReplace, 1, 1, 1, 1);

        labelRegex = new QLabel(this);
        labelRegex->setObjectName(QStringLiteral("labelRegex"));

        gridLayout->addWidget(labelRegex, 0, 0, 1, 1);

        lineRegex = new QLineEdit(this);
        lineRegex->setObjectName(QStringLiteral("lineRegex"));

        gridLayout->addWidget(lineRegex, 0, 1, 1, 1);

        pushButton = new QPushButton(this);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        labelRepace->setBuddy(lineReplace);
        labelRegex->setBuddy(lineRegex);
#endif // QT_NO_SHORTCUT

        retranslateUi();

    }
};

#endif // TABFRAME_H
