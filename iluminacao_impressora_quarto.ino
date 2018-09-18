#include <MemoryFree.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET 5
Adafruit_SSD1306 display(OLED_RESET);

int led_ImpressoraE = 11;
int led_ImpressoraC = 10;
int pin_Definir = 9;
int pin2_Definir = 8;
int pin3_Definir = 7;
int button1 = 4;
int buttonState = 0;

  void boasvindas(){
    display.setTextColor(WHITE);
    display.setTextSize(3);
    display.setCursor(1,1);
    display.println("Bem Vindo");
    display.display();
    display.clearDisplay();
  }

void setup(){
  pinMode(led_ImpressoraE, OUTPUT);
  pinMode(led_ImpressoraC ,OUTPUT);
  pinMode(pin_Definir ,OUTPUT);
  pinMode(pin2_Definir ,OUTPUT);
  pinMode(pin3_Definir ,OUTPUT);
  pinMode(button1 ,INPUT);

  display.begin(SSD1306_SWITCHAPVCC, 0x3c);
  display.clearDisplay();
}

void loop() {
 

}
