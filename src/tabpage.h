#ifndef TABPAGE_H
#define TABPAGE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QTextEdit>

#include "tabframe.h"

class TabPage : public QWidget
{
    Q_OBJECT
public:
    explicit TabPage(QWidget *parent = nullptr);

    QVBoxLayout *tabpageLayout;
    QTextEdit *textMain;
    TabFrame *frame;

signals:

public slots:
};

#endif // TABPAGE_H
