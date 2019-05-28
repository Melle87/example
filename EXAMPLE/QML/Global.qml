pragma Singleton
import QtQuick 2.0

QtObject {
    id: globalId  

    property int windowId:                  def_LOGINLOGOUT_DLG // Wird unter anderem in MainPageManagement gesetzt
    property int def_NO_DLG:                -1  // Kein Dialog geöffnet
    property int def_MAINMENUE_DLG:          0  // Hauptmenü
    property int def_LOGINLOGOUT_DLG:        1 // Login / Logout
}

