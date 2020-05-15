#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

long day = 86400000; // 86400000 milliseconds in a day
long hour = 3600000; // 3600000 milliseconds in an hour
long minute = 60000; // 60000 milliseconds in a minute
long second =  1000; // 1000 milliseconds in a second

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET); 

void setup() 
{
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();

}

void loop() 
{
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("3NOT ROBOTICS PVT LTD");
  display.setCursor(5,10);
  display.println("Uvc Timer: ");
  display.display();
long timeNow = millis();
 
int days = timeNow / day ;                                
int hours = (timeNow % day) / hour;                       
int minutes = ((timeNow % day) % hour) / minute ;         
int seconds = (((timeNow % day) % hour) % minute) / second;

    display.setTextSize(1);
    display.setTextColor(WHITE);
    display.setCursor(80,10);
    display.println(minutes);
    display.display();
    delay(1000);
    display.clearDisplay();
}
