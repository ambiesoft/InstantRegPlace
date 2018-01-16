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

    QGridLayout *frameLayout;
    QLabel *labelRepace;
    QLineEdit *lineReplace;
    QLabel *labelRegex;
    QLineEdit *lineRegex;
    QPushButton *btnReplace;

    void retranslateUi()
    {
        labelRepace->setText(QApplication::translate("MainWindow", "Re&place:", nullptr));
        labelRegex->setText(QApplication::translate("MainWindow", "&Regex:", nullptr));
        btnReplace->setText(QApplication::translate("MainWindow", "Replace", nullptr));
    } // retranslateUi

    TabFrame(QWidget* parent) : QFrame(parent)
    {
        this->setObjectName(QStringLiteral("frame"));
        this->setFrameShape(QFrame::StyledPanel);
        this->setFrameShadow(QFrame::Raised);
        frameLayout = new QGridLayout(this);
        frameLayout->setSpacing(6);
        frameLayout->setContentsMargins(11, 11, 11, 11);
        frameLayout->setObjectName(QStringLiteral("gridLayout"));
        labelRepace = new QLabel(this);
        labelRepace->setObjectName(QStringLiteral("labelRepace"));

        frameLayout->addWidget(labelRepace, 1, 0, 1, 1);

        lineReplace = new QLineEdit(this);
        lineReplace->setObjectName(QStringLiteral("lineReplace"));

        frameLayout->addWidget(lineReplace, 1, 1, 1, 1);

        labelRegex = new QLabel(this);
        labelRegex->setObjectName(QStringLiteral("labelRegex"));

        frameLayout->addWidget(labelRegex, 0, 0, 1, 1);

        lineRegex = new QLineEdit(this);
        lineRegex->setObjectName(QStringLiteral("lineRegex"));

        frameLayout->addWidget(lineRegex, 0, 1, 1, 1);

        btnReplace = new QPushButton(this);
        btnReplace->setObjectName(QStringLiteral("pushButton"));

        frameLayout->addWidget(btnReplace, 2, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        labelRepace->setBuddy(lineReplace);
        labelRegex->setBuddy(lineRegex);
#endif // QT_NO_SHORTCUT

        retranslateUi();

    }
};

#endif // TABFRAME_H
