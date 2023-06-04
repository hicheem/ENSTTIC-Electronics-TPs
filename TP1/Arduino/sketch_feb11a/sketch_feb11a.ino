#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
  lcd.begin(16,1);
  lcd.setCursor(0,0);
  lcd.print("Hello89");

}

void loop() {
    lcd.display();
    delay(500);
    lcd.noDisplay();
    delay(500); 

}
