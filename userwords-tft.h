#include <SPI.h>
#include <TFT_eSPI.h> 
TFT_eSPI tft = TFT_eSPI();

void setuptftdemo(void) {
  // Initialize color screen
  tft.init();
  tft.fillScreen(TFT_BLACK);  
  // Set starting coordinates (20, 10), font 4
  tft.setCursor(20, 10, 4);
  // Set text color to white, black text background
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  // Set the displayed text. Note that there is a line break here \ n
  tft.println("White Text\n");
  tft.println("Next White Text");
  // Set starting coordinates (10, 100), font 2, text color red, white text background
  tft.setCursor(10, 100);
  tft.setTextFont(2);
  tft.setTextColor(TFT_RED, TFT_WHITE);
  tft.println("Red Text, White Background");
  // Set starting coordinates (10, 140), font 4, text color green, no background setting
  tft.setCursor(10, 140, 4);
  tft.setTextColor(TFT_GREEN);
  tft.println("Green text");
  // Set starting coordinates (70, 180), font unchanged, text color blue, yellow text background
  tft.setCursor(70, 180);
  tft.setTextColor(TFT_BLUE, TFT_YELLOW);
  tft.println("Blue text");
  // Set starting coordinates (50, 220), font 4, text color yellow, no background setting
  tft.setCursor(50, 220);
  tft.setTextFont(4);
  tft.setTextColor(TFT_YELLOW);
  tft.println("2020-06-16");
  // Set starting coordinates (50, 260), font 7, text color pink, no background setting
  tft.setCursor(50, 260);
  tft.setTextFont(7);
  tft.setTextColor(TFT_PINK);
  tft.println("20:35");
}

#define USER_WORDS \
  Y(tftdemo, setuptftdemo(); DROP) \
  Y(tftinit, tft.init(); DROP) \  
  Y(tftcls, tft.fillScreen(TFT_BLACK);) \
  Y(tftcursor, tft.setCursor(n1, n0); DROPn(2)) \
  Y(tftcursorink, tft.setCursor(n2,n1, n0); DROPn(2)) \
  Y(tftTextFont, tft.setTextFont(n0); DROP) \
  Y(tftTextColor, tft.setTextColor(n1,n0); DROP) \
  Y(tftprintln, tft.println(c0); DROP) \
  Y(tftprint, tft.print(c0); DROP) \
  Y(tftNum, tft.print(n0); DROP) \
  Y(tftNumln, tft.println(n0); DROP) \
  Y(tftCircle, tft.drawCircle(n3,n2,n1,n0); DROPn(3)) \
    Y(tftPixel, tft.drawPixel(n2,n1,n0); DROPn(3)) \ 
    Y(tftLine, tft.drawLine(n4,n3,n2,n1,n0); DROPn(5)) \ 
    Y(tftfillRect, tft.fillRect(n4,n3,n2,n1,n0); DROPn(5)) \ 
     Y(tftfillRRect, tft.fillRoundRect(n5,n4,n3,n2,n1,n0); DROPn(6)) \ 
     Y(tftRect, tft.drawRect(n4,n3,n2,n1,n0); DROPn(5)) \ 
     Y(tftHLine, tft.drawFastHLine(n3,n2,n1,n0); DROPn(4)) \ 
     Y(tftVLine, tft.drawFastVLine(n3,n2,n1,n0); DROPn(4)) \ 
     Y(tftfillCircle, tft.fillCircle(n3,n2,n1,n0); DROPn(4)) \
     Y(tftRotation,  tft.setRotation(n0); DROP) \ 
     Y(tftfillscreen, tft.fillScreen(n0); DROP) \ 
       Y(tftEllipse,  tft.drawEllipse(n4,n3,n2,n1,n0); DROPn(5)) \ 
       Y(tftfillEllipse,  tft.fillEllipse(n4,n3,n2,n1,n0); DROPn(5)) \ 
       Y(tftTriangle, tft.drawTriangle(n6,n5,n4,n3,n2,n1,n0); DROPn(7)) \ 
       Y(tftfillTriangle, tft.fillTriangle(n6,n5,n4,n3,n2,n1,n0); DROPn(7))   
//#end-of-file

 
