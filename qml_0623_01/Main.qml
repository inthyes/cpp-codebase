import QtQuick
import QtQuick.Window
//ID - must be unique
//Root Object - there can be only one

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    id:root

    Image{
        id : myimage
        source : "file"
    }


}
