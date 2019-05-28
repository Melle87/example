#include "main.h"


/***
* Function: main()
* Parameter: -
* Main function.
***/
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QThread::currentThread()->setPriority(QThread::HighPriority);

    QApplication::setOverrideCursor(QCursor(Qt::BlankCursor)); // Hiding mouse cursor    

    DataManager *exampleDataManager = new DataManager();
    exampleDataManager->init();

    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("guiInterface", exampleDataManager->m_guiPropertiesInterface);

    engine.load(QUrl(QStringLiteral("qrc:/QML/Main.qml")));

    if (engine.rootObjects().isEmpty())
        qDebug() << "QmlInterface::initGui(): engine.isEmpty!";

    app.exec();
    return 0;
}
