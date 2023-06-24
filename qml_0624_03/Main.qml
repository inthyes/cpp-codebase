import QtQuick
import QtQuick.Window

//parent and children relationships
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Image {
        id: image
        source: "https://upload.wikimedia.org/wikipedia/commons/0/0b/Qt_logo_2016.svg"
        width: 150
        height: 100
        x: 100
        y: 100
        z: 3

        Rectangle{
            color: "Red"
            x:-25
            y:-25
            width:50
            height: 50
            opacity:0.5
            z:2
        }

        Rectangle{
            color: "blue"
            x:parent.width - width
            y:parent.height - height
            width:50
            height: 50
            opacity:0.5
            z:0
        }

    }

}
