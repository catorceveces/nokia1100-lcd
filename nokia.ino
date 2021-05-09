#include <Adafruit_PCD8544.h>
#include <PCF8814.h>

static PCF8814 lcd;

void setup() {
  lcd.begin();
}

void loop() {

  lcd.setCursor(0, 1);
  lcd.print("Hola!");
  lcd.setCursor(0, 2);
  lcd.print("Soy un pedazo de");
  lcd.setCursor(0,3);
  lcd.print("Nokia 1100");
  lcd.setCursor(0, 4);
  lcd.print("@catorceveces");

}
