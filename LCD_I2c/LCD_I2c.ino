#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

int delay_time =1000;
void setup() {
  lcd.init();
  lcd.clear();         
  lcd.backlight();      // Make sure backlight is on
  

}

void loop() {
    // Print a message on both lines of the LCD.
  lcd.setCursor(2,0);   //Set cursor to character 2 on line 0
  lcd.print("My love is ");
  delay(delay_time);
  lcd.clear();  
  lcd.setCursor(2,0);   //Move cursor to character 2 on line 1
  lcd.print("IVYONNE!");
  delay(delay_time);
   lcd.clear();  
}
