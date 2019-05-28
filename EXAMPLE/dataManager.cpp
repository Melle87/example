#include "dataManager.h"


DataManager::DataManager(QObject *parent) : QObject(parent)
{   // public

}

DataManager::~DataManager()
{   // public
}

bool DataManager::init(void)
{   // public
    m_example = new Example();
    m_example->init();

    m_guiPropertiesInterface = new GuiPropertiesInterface();
    m_guiPropertiesInterface->init();

    //m_guiPropertiesInterface->setDynamicPropertyData("testProp", "testVal");

    return true;
}
