#include "guiPropertiesInterface.h"


GuiPropertiesInterface::GuiPropertiesInterface(QObject *parent) : QObject(parent)
{   // public
}

GuiPropertiesInterface::~GuiPropertiesInterface(void)
{   // public
}

bool GuiPropertiesInterface::init(void)
{   // public

    return true;
}

void GuiPropertiesInterface::setDynamicPropertyData(QString propName, QString newPropValue)
{   // public
    setProperty(propName.toLatin1().constData(), QVariant("..."));
    setProperty(propName.toLatin1().constData(), QVariant(newPropValue));
}

void GuiPropertiesInterface::updateFromGui(QString propName, QString newPropValue)
{   // public
    setDynamicPropertyData(propName, newPropValue);
}

bool GuiPropertiesInterface::event(QEvent *event)
{   // Protected
    if (QEvent::DynamicPropertyChange == event->type()) {
        QDynamicPropertyChangeEvent *const propEvent = static_cast<QDynamicPropertyChangeEvent*>(event);
        QString name = propEvent->propertyName();
        emit propertyChanged(name, "");
    }

    return QObject::event(event);
}

