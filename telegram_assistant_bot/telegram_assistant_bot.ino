#include <Wire.h> 
#include <LiquidCrystal_I2C.h> 
LiquidCrystal_I2C lcd ( 0x3F, 16 , 2 ) ;  // Set up the display 0x3F or 0x27 
void setup ( ) 
{ 
  lcd.init ( ) ;                   
  lcd.backlight ( ) ; // Turn on the backlight of the 
  lcd.print("hello");
  lcd.setCursor ( 0 , 1 ) ;
  lcd.print ( "LCD 1602" ) ;
  delay ( 5000 ) ;
  lcd.noBacklight ( ) ; // Turn off display backlight 
  delay ( 5000 ) ;
  lcd.backlight ( ) ; // Turn on display backlight 
} 
void loop ( ) { }