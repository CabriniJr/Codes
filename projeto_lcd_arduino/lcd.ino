#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 10, 5, 4,3,2);

byte anim1[8]{
    B10000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
};
byte anim2[8]{
    B11000,
    B10000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
};
byte anim3[8]{
    B11100,
    B11000,
    B10000,
    B00000,
    B00000,
    B00000,
    B00000,
};
byte anim4[8]{
    B01110,
    B11100,
    B11000,
    B10000,
    B00000,
    B00000,
    B00000,
};
byte anim5[8]{
    B00111,
    B01110,
    B11100,
    B11000,
    B10000,
    B00000,
    B00000,
};
byte anim6[8]{
    B00011,
    B00111,
    B01110,
    B11100,
    B11000,
    B10000,
    B00000,
};
byte anim7[8]{
    B00001,
    B00011,
    B00111,
    B01110,
    B11100,
    B11000,
    B10000,
};
byte anim8[8]{
    B00000,
    B00001,
    B00011,
    B00111,
    B01110,
    B11100,
    B11000,
};
byte anim9[8]{
    B00000,
    B00000,
    B00001,
    B00011,
    B00111,
    B01110,
    B11100,
};
byte anim10[8]{
    B00000,
    B00000,
    B00000,
    B00001,
    B00011,
    B00111,
    B01110,
};
byte anim11[8]{
    B00000,
    B00000,
    B00000,
    B00000,
    B00001,
    B00011,
    B00111,
};
byte anim12[8]{
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00001,
    B00011,
};
byte anim13[8]{
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00001,
};
byte anim0[8]{
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
};

anims = [anim0, anim1, anim2, anim3, anim4, anim5, anim6, anim7, ainm8, anim9, anim10, anim11, anim12, anim13];

void setup()
{
    analogWrite(2,250);
    lcd.begin(16,2);
    lcd.clear();
    lcd.setCursor(0,0);
    for(int i = 0; i<=13;i++){
        lcd.createChar(i,anims[i]);
    }
}

void loop()
{
    
}