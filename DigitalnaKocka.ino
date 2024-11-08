//Install [Adafruit_NeoPixel_Library](https://github.com/adafruit/Adafruit_NeoPixel) first.

#include <Adafruit_NeoPixel.h>

#define PIN   D4
#define LED_NUM 64

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel leds = Adafruit_NeoPixel(LED_NUM, PIN, NEO_RGB + NEO_KHZ800);
long randNumber;
int sensorValue;
int standby=1;

int r=10;
int g=10;
int b=10;



void display_number(uint8 N, uint8 R, uint8 G, uint8 B){
  if(N==1){
    leds.setPixelColor(27, leds.Color(R, G, B));
    leds.setPixelColor(28, leds.Color(R, G, B));
    leds.setPixelColor(35, leds.Color(R, G, B));
    leds.setPixelColor(36, leds.Color(R, G, B));
  }
  if(N==2){
    leds.setPixelColor(6, leds.Color(R, G, B));
    leds.setPixelColor(7, leds.Color(R, G, B));
    leds.setPixelColor(14, leds.Color(R, G, B));
    leds.setPixelColor(15, leds.Color(R, G, B));
    leds.setPixelColor(48, leds.Color(R, G, B));
    leds.setPixelColor(49, leds.Color(R, G, B));
    leds.setPixelColor(56, leds.Color(R, G, B));
    leds.setPixelColor(57, leds.Color(R, G, B));
  }
  if(N==3){
    leds.setPixelColor(0, leds.Color(R, G, B));
    leds.setPixelColor(1, leds.Color(R, G, B));
    leds.setPixelColor(8, leds.Color(R, G, B));
    leds.setPixelColor(9, leds.Color(R, G, B));
    leds.setPixelColor(27, leds.Color(R, G, B));
    leds.setPixelColor(28, leds.Color(R, G, B));
    leds.setPixelColor(35, leds.Color(R, G, B));
    leds.setPixelColor(36, leds.Color(R, G, B));   
    leds.setPixelColor(54, leds.Color(R, G, B));
    leds.setPixelColor(55, leds.Color(R, G, B));
    leds.setPixelColor(62, leds.Color(R, G, B));
    leds.setPixelColor(63, leds.Color(R, G, B)); 
  }
  if(N==4){
    leds.setPixelColor(0, leds.Color(R, G, B));
    leds.setPixelColor(1, leds.Color(R, G, B));
    leds.setPixelColor(8, leds.Color(R, G, B));
    leds.setPixelColor(9, leds.Color(R, G, B));  
    leds.setPixelColor(6, leds.Color(R, G, B));
    leds.setPixelColor(7, leds.Color(R, G, B));
    leds.setPixelColor(14, leds.Color(R, G, B));
    leds.setPixelColor(15, leds.Color(R, G, B)); 
    leds.setPixelColor(48, leds.Color(R, G, B));
    leds.setPixelColor(49, leds.Color(R, G, B));
    leds.setPixelColor(56, leds.Color(R, G, B));
    leds.setPixelColor(57, leds.Color(R, G, B));
    leds.setPixelColor(54, leds.Color(R, G, B));
    leds.setPixelColor(55, leds.Color(R, G, B));
    leds.setPixelColor(62, leds.Color(R, G, B));
    leds.setPixelColor(63, leds.Color(R, G, B)); 
  }
  if(N==5){
    leds.setPixelColor(0, leds.Color(R, G, B));
    leds.setPixelColor(1, leds.Color(R, G, B));
    leds.setPixelColor(8, leds.Color(R, G, B));
    leds.setPixelColor(9, leds.Color(R, G, B));  
    leds.setPixelColor(6, leds.Color(R, G, B));
    leds.setPixelColor(7, leds.Color(R, G, B));
    leds.setPixelColor(14, leds.Color(R, G, B));
    leds.setPixelColor(15, leds.Color(R, G, B));   
    leds.setPixelColor(27, leds.Color(R, G, B));
    leds.setPixelColor(28, leds.Color(R, G, B));
    leds.setPixelColor(35, leds.Color(R, G, B));
    leds.setPixelColor(36, leds.Color(R, G, B));
    leds.setPixelColor(48, leds.Color(R, G, B));
    leds.setPixelColor(49, leds.Color(R, G, B));
    leds.setPixelColor(56, leds.Color(R, G, B));
    leds.setPixelColor(57, leds.Color(R, G, B));
    leds.setPixelColor(54, leds.Color(R, G, B));
    leds.setPixelColor(55, leds.Color(R, G, B));
    leds.setPixelColor(62, leds.Color(R, G, B));
    leds.setPixelColor(63, leds.Color(R, G, B)); 
  }
  if(N==6){
    leds.setPixelColor(0, leds.Color(R, G, B));
    leds.setPixelColor(1, leds.Color(R, G, B));
    leds.setPixelColor(8, leds.Color(R, G, B));
    leds.setPixelColor(9, leds.Color(R, G, B));  
    leds.setPixelColor(3, leds.Color(R, G, B));
    leds.setPixelColor(4, leds.Color(R, G, B));
    leds.setPixelColor(11, leds.Color(R, G, B));
    leds.setPixelColor(12, leds.Color(R, G, B));
    leds.setPixelColor(6, leds.Color(R, G, B));
    leds.setPixelColor(7, leds.Color(R, G, B));
    leds.setPixelColor(14, leds.Color(R, G, B));
    leds.setPixelColor(15, leds.Color(R, G, B)); 
    leds.setPixelColor(48, leds.Color(R, G, B));
    leds.setPixelColor(49, leds.Color(R, G, B));
    leds.setPixelColor(56, leds.Color(R, G, B));
    leds.setPixelColor(57, leds.Color(R, G, B));
    leds.setPixelColor(51, leds.Color(R, G, B));
    leds.setPixelColor(52, leds.Color(R, G, B));
    leds.setPixelColor(59, leds.Color(R, G, B));
    leds.setPixelColor(60, leds.Color(R, G, B));  
    leds.setPixelColor(54, leds.Color(R, G, B));
    leds.setPixelColor(55, leds.Color(R, G, B));
    leds.setPixelColor(62, leds.Color(R, G, B));
    leds.setPixelColor(63, leds.Color(R, G, B));     
  }
    leds.show();
}

void roll_dice(){
  uint8 rand1=random(6)+1;
  uint8 rand2=random(6)+1;
  while(rand2==rand1)rand2=random(6)+1;
  uint8 rand3=random(6)+1;
  while(rand3==rand2)rand3=random(6)+1;
  uint8 rand4=random(6)+1;
  while(rand4==rand3)rand4=random(6)+1;
  uint8 rand5=random(6)+1;
  while(rand5==rand4)rand5=random(6)+1;
  display_number(rand1, r, g, b);
  delay(200);
  my_clear();
  display_number(rand2, r, g, b);
  delay(300);
  my_clear();
  display_number(rand3, r, g, b);
  delay(400);
  my_clear();
  display_number(rand4, r, g, b);
  delay(500);
  my_clear();
  display_number(rand5, r, g, b);
  delay(5000);
  my_clear();
}

void led_set(uint8 R, uint8 G, uint8 B) {
  for (int i = 0; i < LED_NUM; i++) {
    leds.setPixelColor(i, leds.Color(R, G, B));
    leds.show();
    delay(5);
  }
}

void my_clear() {
  for (int i = 0; i < LED_NUM; i++) {
    leds.setPixelColor(i, leds.Color(0, 0, 0));
    leds.show();
  }
}

void setup() {
  leds.begin(); // This initializes the NeoPixel library.
  randomSeed(analogRead(A0));
  Serial.begin(115200);
  led_set(r, g, b);
}

void loop() {

sensorValue = analogRead(A0);
Serial.println(sensorValue);
delay(10);
if(sensorValue>25){
  standby=0;
  roll_dice();
}
if((sensorValue<=25)&&(standby==0)){
  led_set(r, g, b);
  standby=1;
}

}
