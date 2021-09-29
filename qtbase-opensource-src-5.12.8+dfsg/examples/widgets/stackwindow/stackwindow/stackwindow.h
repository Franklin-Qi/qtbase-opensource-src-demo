#ifndef STACKWINDOW_H
#define STACKWINDOW_H

#include <QDialog>
#include <QListWidget>
#include <QStackedWidget>
#include <QLabel>
#include <QHBoxLayout>

class StackWindow : public QDialog
{
    Q_OBJECT

public:
    StackWindow(QWidget *parent = nullptr);
    ~StackWindow();

private:
    QListWidget *m_listWidget;
    QStackedWidget *m_stackedWidget;
    QLabel *m_label1;
    QLabel *m_label2;
    QLabel *m_label3;

};
#endif // STACKWINDOW_H
