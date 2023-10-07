import QtQuick

Image {
    id: root
    source: "images/background.png"
    Image {
        id: pole
        source: "images/pole.png"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom
    }
    Image {
        id: wheel
        source: "images/pinwheel.png"
        anchors.centerIn: parent
        Behavior on rotation {
            NumberAnimation {
                duration: 250
            }
        }
    }
    MouseArea {
        anchors.fill: parent
        onClicked: wheel.rotation += 90
    }
}
