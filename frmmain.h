#ifndef FRMMAIN_H
#define FRMMAIN_H

#include <QDialog>
#include <QMenu>
#include <QMenuBar>
#include <QToolBar>
#include <QTimer>
#include <QSqlTableModel>
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
    void keyPressEvent(QKeyEvent *e);
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
    void slotSetSysClear();
    void slotSetDehydration();
    //进入浸蜡操作界面
    void slotSetWixdip();
    //进入清洗1操作界面
    void slotSetClear1();
    //进入清洗1操作界面
    void slotSetClear2();
    //进入处理缸控制界面
    void slotSetOperateControl();
    //进入组织处理程序管理界面
    void slotSetTissueHandleMgr();
    //进入自动清洗程序管理界面
    void slotSetAutoClearMgr();
    //进入实时监控界面
    void slotSetRealTimeMonitor();
    //进入药液更换界面
    void slotSetSoupChange();
    //进入权限配置界面
    void slotSetLimitMgr();
    //进入输出配置界面
    void slotSetOutMgr();
    //进入云服务器配置界面
    void slotSetYunServer();
    //进入包埋配置界面
    void slotSetBaoMaiMgr();
    void slotSetStatisticalAnalysis();
    void slotSetProcessLog();
    //进入药液更换记录界面
    void slotSetSoupChangeLog();
    //进入组织处理记录界面
    void slotSetTissueHandleLog();
    //进入故障记录界面
    void slotSetErrorLog();
    //进入程序操作记录界面
    void slotSetUseInfo();
    //进入药液更换记录界面
    void slotSetZuZhiOperate();
    //进入组织处理记录界面
    void slotSetRepair();
    //进入故障记录界面
    void slotSetFalut();
    void slotSetDatabase();
    void slotBtnCenterControl();
    void slotbtnOnceDevice();
    void soltDatabaseAdd();
    void slotBtnDatabaseSubmit();
    void slotBtnDatabaseDelete();
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
    QSqlTableModel *modelCurrent;
    QSqlTableModel *modelCenterControl;
    QSqlTableModel *modelDeviceOne;
    void InitStyle();
    void databaseDataShow(QSqlTableModel *model,QString tableName);
};

#endif // FRMMAIN_H
