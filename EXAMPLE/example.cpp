#include "example.h"


/***
* Function: Example()
* Parameter: -
* -
***/
Example::Example(QObject *parent) : QObject(parent)
{   // public

}

/***
* Function: ~Example()
* Parameter: -
* -
***/
Example::~Example()
{   // public

}

/***
* Function: init()
* Parameter: -
* Create and init instance of VirtualAdaptor.
***/
bool Example::init(void)
{   // public
    return true;
}
