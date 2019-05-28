import QtQuick 2.6
import QtCharts 2.2
import QtQuick.Controls 2.2
import QtQuick.Controls.Styles 1.4
import QtQuick.Window 2.3
import QtQuick.Layouts 1.3
import QtQuick.Controls 1.4
import QtMultimedia 5.9
import "."


ApplicationWindow {
    id: mainAppWindow
    x: 0
    y: 0
    width: 640
    height: 480
    color: "#00000000"
    visibility: Window.Maximized
    visible: true

    Rectangle {
        id: rect
        anchors.fill: parent
        color: "blue"
    }

    Component.onCompleted: {
        guiInterface.updateFromGui("testProp", "testVal");
    }

    Connections {
        target: guiInterface
        onPropertyChanged: {
            if (name == "testProp") {
               rect.color = "red"
            }
        }
    }
}
