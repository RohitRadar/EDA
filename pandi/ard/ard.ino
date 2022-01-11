#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Nondi Pandi");
  lcd.setCursor(0,1);
  lcd.print("Jump: ");
}

void loop(){
    delay(1000);
    lcd.setCursor(7,1);
    lcd.print("1");
    delay(700);
    lcd.setCursor(7,1);
    lcd.print("2");
    delay(700);
    lcd.setCursor(7,1);
    lcd.print("3");
    delay(700);
    lcd.setCursor(7,1);
    lcd.print("4,5");
    delay(700);
    lcd.setCursor(7,1);
    lcd.print("6  ");
    delay(700);
    lcd.setCursor(7,1);
    lcd.print("7,8");
    delay(700);
    lcd.setCursor(7,1);
    lcd.print("9  ");
    delay(700);
    lcd.setCursor(7,1);
    lcd.print("7,8");
    delay(700);
    lcd.setCursor(7,1);
    lcd.print("6  ");
    delay(700);
    lcd.setCursor(7,1);
    lcd.print("4,5");
    delay(700);
    lcd.setCursor(7,1);
    lcd.print("3  ");
    delay(700);
    lcd.setCursor(7,1);
    lcd.print("2");
    delay(700);
    lcd.setCursor(7,1);
    lcd.print("1");
    delay(700);
    lcd.setCursor(0,1);
    lcd.print("TIME:8.5");
    while(1){
      delay(100000);
    }
}
