

mustafadag525/Mikroi-lemci-Final-deviÖdev Açıklama #1: Analog giriş ve çıkış özeliklerini paragraf ve bir örnek üzerinde anlatınız. 
(Gereken açıklamalar paragraf şeklinde burada anlatılmalı)
Pic16f877A kullanarak LCD’de iki sayının toplamını gösteriniz.
1.	Kullanılan Malzemeler 
•	POT-HG 10k
•	Pic16f877A
•	Lm016L

2.	Proteus çizimi
 
3.	MikroC kodu // Açıklama satırları olmalı 
// Lcdpin ayarları
sbit LCD_RS at RB0_bit;
sbit LCD_EN at RB1_bit;
sbit LCD_D7 at RB5_bit;
sbit LCD_D6 at RB4_bit;
sbit LCD_D5 at RB3_bit;
sbit LCD_D4 at RB2_bit;
// Pin yönlendirme
sbitLCD_RS_Direction at TRISB0_bit;
sbitLCD_EN_Direction at TRISB1_bit;
sbit LCD_D7_Direction at TRISB5_bit;
sbit LCD_D6_Direction at TRISB4_bit;
sbit LCD_D5_Direction at TRISB3_bit;
sbit LCD_D4_Direction at TRISB2_bit;
char txt1[9];
int sayi1 = 100, sayi2 = 200, sonuc;
void main() {
sonuc = sayi1 + sayi2;
IntToStr(sonuc,txt1);
LCD_Init();         // LCD'nin başlaması için
LCD_out(1,2,txt1);     // 1 satır 2 sütün başlayarak  yazdır
}


