#include "frmmain.h"
#include <QApplication>
#include "./Api/myhelper.h"
#include "./AppConfig/myapp.h"
#include "QsLog/QsLog.h"
#include "QsLog/QsLogDest.h"
#include "QsLog/QsLogLevel.h"

QsLogging::Logger& logger = QsLogging::Logger::instance();
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /******配置日志记录系统*******/
    using namespace QsLogging;
    //init the logging mechanism
    logger.setLoggingLevel(QsLogging::InfoLevel);
    const QString sLogPath(QDir(a.applicationDirPath()).filePath("log.txt"));
    QsLogging::DestinationPtr fileDestination(QsLogging::DestinationFactory::MakeFileDestination(sLogPath, EnableLogRotation, MaxSizeBytes(1024*1000), MaxOldLogCount(2)));
    QsLogging::DestinationPtr debugDestination(QsLogging::DestinationFactory::MakeDebugOutputDestination());
    logger.addDestination(debugDestination);
    logger.addDestination(fileDestination);
    //设置程序编码格式为UTF8
    myHelper::SetUTF8Code();
    //皮肤风格
    myHelper::SetStyle("navy");//灰色风格
    //读写配置文件
    myApp::AppPath=QApplication::applicationDirPath()+"/";
    myApp::ReadConfig();

    FrmMain w;
    w.show();

    return a.exec();
}
