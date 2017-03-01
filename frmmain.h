#ifndef FRMMAIN_H
#define FRMMAIN_H

#include <QDialog>
#include <QMenu>
#include <QMenuBar>
#include <QToolBar>
#include <QTimer>
namespace Ui {
class FrmMain;
}

class FrmMain : public QDialog
{
    Q_OBJECT

public:
    explicit FrmMain(QWidget *parent = 0);
    ~FrmMain();

protected:
    bool eventFilter(QObject *obj, QEvent *event);
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *);

private slots:
    void on_btnMenu_Close_clicked();
    void on_btnMenu_Max_clicked();
    void on_btnMenu_Min_clicked();
    void slotChangeDisplay();
    void slotchangedToGray();
    void slotchangedToBlue();
    void slotchangedToBlack();
    void slotchangedToNavy();
    void slotUpdateClock();
    void slotSetMainPage();
    void slotSetTisseHandle();
private:
    Ui::FrmMain *ui;
    QTimer *clockTimer;
    QPoint mousePoint;
    bool mousePressed;
    bool max;
    QRect location;
    QMenu *changSkinMenu;
    QMenuBar* menuBar;
    QToolBar *toolBar;
    void InitStyle();
};

#endif // FRMMAIN_H
