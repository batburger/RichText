#ifndef AOVERLAYABLETEXTEDIT_H
#define AOVERLAYABLETEXTEDIT_H

#include <QTextEdit>
#include <QObject>
#include <QWidget>

#include "IExpression.h"

class OverlayableTextEdit : public QTextEdit
{
    Q_OBJECT
public:
    explicit OverlayableTextEdit(QWidget *parent = nullptr);
    ~OverlayableTextEdit();

private:
    std::vector<IExpression*> expressions;
    QString build();

    void keyPressEvent(QKeyEvent *event);

public:

public slots:
    void render();
};

#endif // AOVERLAYABLETEXTEDIT_H
