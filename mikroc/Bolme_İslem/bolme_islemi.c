//LCD ekran ile Mikroiþlemcinin port baðlantýlarý

sbit LCD_RS at RB0_bit;   //LCD Register Select B0 portuna
sbit LCD_EN at RB1_bit;   //LCD Enable B1 portuna
sbit LCD_D7 at RB7_bit;   // LCD veri ucu 7 B7 portuna
sbit LCD_D6 at RB6_bit;   // LCD veri ucu 6 B6 portuna
sbit LCD_D5 at RB5_bit;   // LCD veri ucu 5 B5 portuna
sbit LCD_D4 at RB4_bit;   // LCD veri ucu 4 B4 portuna

//LCD Ekran pinlerinin portlara yönlendirilmesi iþlemi
sbit LCD_RS_Direction at TRISB0_bit;
sbit LCD_EN_Direction at TRISB1_bit;
sbit LCD_D7_Direction at TRISB7_bit;
sbit LCD_D6_Direction at TRISB6_bit;
sbit LCD_D5_Direction at TRISB5_bit;
sbit LCD_D4_Direction at TRISB4_bit;


char txtsonuc[9];                      //LCD Ekranýna göstermek için string oluþturuluyor.
int sayi1 = 600, sayi2 = 100, sonuc;  // Deðerler tanýmlanýyor.

void main() {
  sonuc=sayi1/sayi2;                  //Bölme iþlemi yapýlýyor.
  IntToStr(sonuc,txtsonuc);          // Ýþlem sonucunu LCD de basmak için string olan txtsonuc ifadesine atadýk.
  Lcd_Init();                        // Lcd yi baþlatýyoruz
  Lcd_Cmd(_LCD_CLEAR);               // Ekraný temizliyoruz
  Lcd_Cmd(_LCD_CURSOR_OFF);          // Ýmleci  kapattýk.
  Lcd_Out(1,1,"600/100= ");           // 1.satýr 1.sütundan "Bölme sonucu" yazýsýný yazdýrýyoruz.
  Lcd_Out(1,9,txtsonuc);             // 1.satýr 9.sütundan bölme iþlemi sonucunu yazdýrýyoruz.

}