import QtQuick
import QtQuick.Window

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle{
//        anchors.centerIn: parent
        x : 50
        y : 100
        width: 100
        height: 100

        color : inputHandler.pressed ? "red" : "pink"
        TapHandler{
            id : inputHandler

        }
    }

    Rectangle{
//        anchors.centerIn: parent
        width: 100
        height: 100
        x : 200
        y : 100
        color : inputHandler_2.pressed ? "blue" : "pink"
        TapHandler{
            id : inputHandler_2

        }
    }
}
