/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 19 Jun 2019 12:17:20 GMT
 */

#include <LRemote.h>

LRemoteLabel label1;
LRemoteSlider slider1;
LRemoteButton button1;
LRemoteSwitch switch1;
LRemoteCircleButton circle1;

void setup()
{
  LRemote.setName("jackjean");
  LRemote.setOrientation(RC_LANDSCAPE);
  LRemote.setGrid(5, 6);
    label1.setPos(0, 0);
    label1.setText("Remote Testing");
    label1.setSize(5, 1);
    label1.setColor(RC_GREY);
    LRemote.addControl(label1);

    slider1.setPos(0, 0);
    slider1.setSize(1, 1);
    slider1.setText("▲");
    slider1.setValueRange(0, 100, 1);
    slider1.setColor(RC_ORANGE);
    LRemote.addControl(slider1);

    button1.setPos(0, 0);
    button1.setText("");
    button1.setSize(1, 1);
    button1.setColor(RC_ORANGE);
    LRemote.addControl(button1);

    switch1.setPos(0, 0);
    switch1.setSize(1, 1);
    switch1.setText("");
    switch1.setColor(RC_ORANGE);
    LRemote.addControl(switch1);

    circle1.setPos(0, 0);
    circle1.setSize(1, 1);
    circle1.setText("");
    circle1.setColor(RC_ORANGE);
    LRemote.addControl(circle1);
  LRemote.begin();
}


void loop()
{

}
