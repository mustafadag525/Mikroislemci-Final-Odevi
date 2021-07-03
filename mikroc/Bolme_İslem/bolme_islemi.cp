#line 1 "C:/Users/PC/Desktop/proteus ög/Bolme_Ýslem/bolme_islemi.c"


sbit LCD_RS at RB0_bit;
sbit LCD_EN at RB1_bit;
sbit LCD_D7 at RB7_bit;
sbit LCD_D6 at RB6_bit;
sbit LCD_D5 at RB5_bit;
sbit LCD_D4 at RB4_bit;


sbit LCD_RS_Direction at TRISB0_bit;
sbit LCD_EN_Direction at TRISB1_bit;
sbit LCD_D7_Direction at TRISB7_bit;
sbit LCD_D6_Direction at TRISB6_bit;
sbit LCD_D5_Direction at TRISB5_bit;
sbit LCD_D4_Direction at TRISB4_bit;


char txtsonuc[9];
int sayi1 = 600, sayi2 = 100, sonuc;

void main() {
 sonuc=sayi1/sayi2;
 IntToStr(sonuc,txtsonuc);
 Lcd_Init();
 Lcd_Cmd(_LCD_CLEAR);
 Lcd_Cmd(_LCD_CURSOR_OFF);
 Lcd_Out(1,1,"600/100= ");
 Lcd_Out(1,9,txtsonuc);

}
