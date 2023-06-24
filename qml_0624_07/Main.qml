import QtQuick
import QtQuick.Window

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle{
        id: myItem
        anchors.centerIn: parent
        color : "red"
        width: 200
        height: 200
        visible:true

        border.color: "purple"
        border.width: 3

        radius : 30

        gradient: Gradient{
            GradientStop{position:0.0; color: "red"}
            GradientStop{position:1.0; color: "blue"}
        }
    }
}
