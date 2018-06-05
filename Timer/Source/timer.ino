#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int seconds = 0;
int minutes = 0;
int hours = 0;

void setup(){
  lcd.begin(16, 2);
}

void loop()
{
    lcd.clear();
    lcd.setCursor(0, 0);
    if(hours < 10){
      lcd.print("0");
      lcd.print(hours);
    }
    else
      lcd.print(hours);
    lcd.print(":");
    if(minutes < 10){
      lcd.print("0");
      lcd.print(minutes);
    }
    else
      lcd.print(minutes);
    lcd.print(":");
    if(seconds < 10){
      lcd.print("0");
      lcd.print(seconds);
    }
    else
      lcd.print(seconds);
    lcd.setCursor(0, 1);
    lcd.print("Timer started!");
    delay(1000);
    seconds++;
    if(seconds >= 60)
    {
      seconds = 0;
      minutes++;
    }
    if(minutes >= 60)
    {
      minutes = 0;
      hours++;
    }
}
