#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

SoftwareSerial PlayerSerial(10,11);
DFRobotDFPlayerMini Player;

void setup(){
  PlayerSerial.begin(9600);
  Serial.begin(9600);
  if(!Player.begin(PlayerSerial)){//connect to serial
    while(true);
  }
  Player.volume(30);//max volume;
  Player.play(1);//play first track;
}

void loop(){

}