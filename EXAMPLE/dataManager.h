#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <QObject>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include "example.h"
#include "guiPropertiesInterface.h"


class DataManager : public QObject
{
    Q_OBJECT

public:
    explicit DataManager(QObject *parent = nullptr);
    ~DataManager(void);
    bool init(void);
    GuiPropertiesInterface *m_guiPropertiesInterface;

private:
    void updateGuiInterfaceProperties(QJsonObject jsonObject);

protected:
    Example *m_example;

public slots:
};

#endif // DATAMANAGER_H
