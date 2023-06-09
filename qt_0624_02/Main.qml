import QtQuick
import QtQuick.Window

//X Y Z

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Image {
        id: image
        source: "https://upload.wikimedia.org/wikipedia/commons/0/0b/Qt_logo_2016.svg"
        width : 150
        height : 100
        x : 100
        y : 100
        //Z : 겹겹이 쌓이는 순서. 하위에 적을수록 같은 숫자여도 위에서 출력됨
        z : 4
    }

    Rectangle{
        color : "red"
        width : 200
        height : 200
        x : 50
        y : 50
        opacity: 0.5
        z : 2
    }

    Rectangle{
        color : "blue"
        width : 200
        height : 200
        x : 150
        y : 150
        opacity: 0.5
        z : 1
    }
}
