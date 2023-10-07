#include <QGuiApplication>
#include <QQmlApplicationEngine>
//#include <QDirIterator>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/quickdemo/Main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed,
        &app, []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.load(url);
//    QDirIterator it(":", QDirIterator::Subdirectories);
//    while (it.hasNext()) {
//        qDebug() << it.next();
//    }
    return app.exec();
}
