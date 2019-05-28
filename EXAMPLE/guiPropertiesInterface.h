#ifndef GUIPROPERTIESINTERFACE_H
#define GUIPROPERTIESINTERFACE_H

#include <QObject>
#include <QDebug>
#include <QJsonObject>
#include <QEvent>
#include <QVariant>
#include <QList>
#include <QProcess>
#include <QCoreApplication>
#include <QFileInfo>
#include <QDateTime>
#include <QJsonDocument>
#include <QDirIterator>
#include <QQuickItem>
#include <QGuiApplication>
#include <QPrinter>
#include <QTextDocument>
#include <QImage>
#include <QFile>
#include <QBitArray>
#include <QNetworkInterface>
#include <QTimer>


class GuiPropertiesInterface : public QObject
{
    Q_OBJECT

public:
    explicit GuiPropertiesInterface(QObject *parent = nullptr);
    ~GuiPropertiesInterface(void);
    bool init(void);
    Q_INVOKABLE void setDynamicPropertyData(QString propName, QString newPropValue);
    Q_INVOKABLE void updateFromGui(QString propName, QString newPropValue);

protected:
    bool event(QEvent *event);

private:

signals:
    void propertyChanged(QString name, QString val);

private slots:
};

#endif // GUIPROPERTIESINTERFACE_H
