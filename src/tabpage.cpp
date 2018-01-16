#include "tabpage.h"
#include "tabframe.h"

TabPage::TabPage(QWidget *parent) : QWidget(parent)
{
    setObjectName(QStringLiteral("tab"));
    tabpageLayout = new QVBoxLayout(this);
    tabpageLayout->setSpacing(6);
    tabpageLayout->setContentsMargins(11, 11, 11, 11);
    tabpageLayout->setObjectName(QStringLiteral("verticalLayout_2"));
    textMain = new QTextEdit(this);
    textMain->setObjectName(QStringLiteral("textEdit"));

    tabpageLayout->addWidget(textMain);

    frame = new TabFrame(this);

    tabpageLayout->addWidget(frame);
}
