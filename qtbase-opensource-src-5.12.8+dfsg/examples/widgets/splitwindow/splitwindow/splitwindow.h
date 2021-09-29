#ifndef SPLITWINDOW_H
#define SPLITWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SplitWindow; }
QT_END_NAMESPACE

class SplitWindow : public QMainWindow
{
    Q_OBJECT

public:
    SplitWindow(QWidget *parent = nullptr);
    ~SplitWindow();

private:
    Ui::SplitWindow *ui;
};
#endif // SPLITWINDOW_H
