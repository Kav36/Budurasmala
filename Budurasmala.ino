// Kavindu Madulakshan © 2020 Budurasmala (බුදුරැස්මාලා). All rights reserved.
#include <FastLED.h>

#define DATA_PIN     7
#define NUM_LEDS    100

int time1 = 256;

int time2 = 1;

int time3 = 128;
int time4 = 32;

int time5 = 128;

int time6 = 128;
int time7 = 8;

int time8 = 128;

int time9 = 128;

int time10 = 16;
int time11 = 8;

CRGB leds[NUM_LEDS];

const char *P1[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
const char *P2[] = {"10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23"};
const char *P3[] = {"24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43"};
const char *P4[] = {"44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69"};
const char *P5[] = {"70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99"};

const char *P6a[] = {"70", "71", "72", "67", "25", "23", "0", "69", "68", "24"};
const char *P6b[] = {"9", "10", "42", "46", "97", "98", "99", "43", "44", "45"};

const char *P6[] = {"70", "71", "72", "67", "25", "23", "0", "69", "68", "24", "9", "10", "42", "46", "97", "98", "99", "43", "44", "45"};
const char *P7[] = {"1", "22", "26", "66", "73", "74", "75", "76", "77", "78", "62", "29", "20", "2", "21", "27", "28", "65", "64", "63"};
const char *P8[] = {"3", "19", "30", "61", "79", "80", "81", "82", "83", "84", "57", "33", "17", "4", "18", "31", "32", "60", "59", "58"};
const char *P9[] = {"5", "16", "34", "56", "85", "86", "87", "88", "89", "90", "52", "37", "14", "6", "15", "35", "36", "55", "54", "53"};
const char *P10[] = {"7", "13", "38", "51", "91", "92", "93", "94", "95", "96", "47", "41", "11", "8", "12", "39", "40", "48", "49", "50"};

const char *P11[] = {"1", "0", "22", "23", "27", "26", "25", "24", "65", "66", "67", "68", "75", "74", "73", "72", "71", "70"};
const char *P12[] = {"3", "2", "19", "20", "31", "30", "29", "28", "60", "61", "62", "63", "81", "80", "79", "78", "77", "76"};
const char *P13[] = {"5", "4", "16", "17", "35", "34", "33", "32", "55", "56", "57", "58", "87", "86", "85", "84", "83", "82"};
const char *P14[] = {"7", "6", "13", "14", "39", "38", "37", "36", "50", "51", "52", "53", "93", "92", "91", "90", "89", "88"};
const char *P15[] = {"9", "8", "10", "11", "43", "42", "41", "40", "45", "46", "47", "48", "99", "98", "97", "96", "95", "94"};

const char *P16[] = {"0", "1", "23"};
const char *P17[] = {"2", "3", "22", "21", "20", "24", "25", "26", "27", "69", "68", "67", "66", "70", "71"};
const char *P18[] = {"4", "5", "19", "18", "17", "28", "29", "30", "31", "65", "64", "63", "62", "61", "72", "73", "74", "75", "76", "77"};
const char *P19[] = {"6", "7", "16", "15", "14", "32", "33", "34", "35", "60", "59", "58", "57", "56", "78", "79", "80", "81", "82", "83"};
const char *P20[] = {"8", "9", "13", "12", "11", "36", "37", "38", "39", "55", "54", "53", "52", "51", "84", "85", "86", "87", "88", "89"};
const char *P21[] = {"10", "40", "41", "42", "43", "50", "49", "48", "47", "46", "90", "91", "92", "93", "94", "95"};
const char *P22[] = {"45", "44", "96", "97", "98", "99"};

void setup()
{
  FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
  FastLED.setBrightness(15);
}

void loop()
{
  uint32_t B = 0x0000ff;
  uint32_t Y = 0xffff00;
  uint32_t R = 0xff0000;
  uint32_t W = 0xffffff;
  uint32_t O = 0xFF2500;

  int k = 2;

  D_2();
  for (int i = 0; i < k; i++)
  {
    D_1(B, Y, R, W, O);
    D_1(O, B, Y, R, W);
    D_1(W, O, B, Y, R);
    D_1(R, W, O, B, Y);
    D_1(Y, R, W, O, B);
  }
  D_2();
  for (int i = 0; i < k; i++)
  {
    D_1(B, B, Y, Y, R);
    D_1(O, B, B, Y, Y);
    D_1(O, O, B, B, Y);
    D_1(W, O, O, B, B);
    D_1(W, W, O, O, B);
    D_1(R, W, W, O, O);
    D_1(R, R, W, W, O);
    D_1(Y, R, R, W, W);
    D_1(Y, Y, R, R, W);
    D_1(B, Y, Y, R, R);
  }
  D_2();
  for (int i = 0; i < k; i++)
  {
    D_1(0xffff00, 0xffff1a, 0x99ff99, 0x3333ff, 0x0000ff);
    D_1(0xff9b00, 0xffff00, 0xffff1a, 0x99ff99, 0x3333ff);
    D_1(0xff5300, 0xff9b00, 0xffff00, 0xffff1a, 0x99ff99);
    D_1(0xff2400, 0xff5300, 0xff9b00, 0xffff00, 0xffff1a);

    D_1(0xff0000, 0xff2400, 0xff5300, 0xff9b00, 0xffff00);
    D_1(0xff1a1a, 0xff0000, 0xff2400, 0xff5300, 0xff9b00);
    D_1(0xff4c4c, 0xff1a1a, 0xff0000, 0xff2400, 0xff5300);
    D_1(0xff8080, 0xff4c4c, 0xff1a1a, 0xff0000, 0xff2400);

    D_1(0xffffff, 0xff8080, 0xff4c4c, 0xff1a1a, 0xff0000);
    D_1(0xffa180, 0xffffff, 0xff8080, 0xff4c4c, 0xff1a1a);
    D_1(0xff7c4c, 0xffa180, 0xffffff, 0xff8080, 0xff4c4c);
    D_1(0xff571a, 0xff7c4c, 0xffa180, 0xffffff, 0xff8080);

    D_1(0xff4500, 0xff571a, 0xff7c4c, 0xffa180, 0xffffff);
    D_1(0xff571a, 0xff4500, 0xff571a, 0xff7c4c, 0xffa180);
    D_1(0xd17c3f, 0xff571a, 0xff4500, 0xff571a, 0xff7c4c);
    D_1(0x3333ff, 0xd17c3f, 0xff571a, 0xff4500, 0xff571a);

    D_1(0x0000ff, 0x3333ff, 0xd17c3f, 0xff571a, 0xff4500);
    D_1(0x3333ff, 0x0000ff, 0x3333ff, 0xd17c3f, 0xff571a);
    D_1(0x99ff99, 0x3333ff, 0x0000ff, 0x3333ff, 0xd17c3f);
    D_1(0xffff1a, 0x99ff99, 0x3333ff, 0x0000ff, 0x3333ff);
  }
  D_2();
  for (int i = 0; i < k; i++)
  {
    D_1(B, B, B, B, B);
    D_1(Y, B, B, B, B);
    D_1(Y, Y, B, B, B);
    D_1(Y, Y, Y, B, B);
    D_1(Y, Y, Y, Y, B);
    D_1(Y, Y, Y, Y, Y);
    D_1(R, Y, Y, Y, Y);
    D_1(R, R, Y, Y, Y);
    D_1(R, R, R, Y, Y);
    D_1(R, R, R, R, Y);
    D_1(R, R, R, R, R);
    D_1(W, R, R, R, R);
    D_1(W, W, R, R, R);
    D_1(W, W, W, R, R);
    D_1(W, W, W, W, R);
    D_1(W, W, W, W, W);
    D_1(O, W, W, W, W);
    D_1(O, O, W, W, W);
    D_1(O, O, O, W, W);
    D_1(O, O, O, O, W);
    D_1(O, O, O, O, O);
    D_1(B, O, O, O, O);
    D_1(B, B, O, O, O);
    D_1(B, B, B, O, O);
    D_1(B, B, B, B, O);
  }
  D_2();
  for (int i = 0; i < k; i++)
  {
    D_3(2, B);
    //  D_4(2, B);
    D_3(2, Y);
    //  D_4(2, Y);
    D_3(2, R);
    //  D_4(2, R);
    D_3(2, W);
    //  D_4(2, W);
    D_3(2, O);
    //  D_4(2, O);
  }
  D_2();
  for (int i = 0; i < k; i++)
  {
    D_5(B, Y, R, W, O);
    D_5(O, B, Y, R, W);
    D_5(W, O, B, Y, R);
    D_5(R, W, O, B, Y);
    D_5(Y, R, W, O, B);
  }
  D_2();
  for (int i = 0; i < k; i++)
  {
    D_6(2, B);
    //  D_7(2, B);
    D_6(2, Y);
    //  D_7(2, Y);
    D_6(2, R);
    // D_7(2, R);
    D_6(2, W);
    // D_7(2, W);
    D_6(2, O);
    // D_7(2, O);
  }
  D_2();
  for (int i = 0; i < k; i++)
  {
    D_8(B, Y, R, W, O);
    D_8(O, B, Y, R, W);
    D_8(W, O, B, Y, R);
    D_8(R, W, O, B, Y);
    D_8(Y, R, W, O, B);
  }
  D_2();

  for (int i = 0; i < k; i++)
  {
    D_9(B, Y, R, W, O, B, Y);
    D_9(Y, B, Y, R, W, O, B);
    D_9(B, Y, B, Y, R, W, O);
    D_9(O, B, Y, B, Y, R, W);
    D_9(W, O, B, Y, B, Y, R);
    D_9(R, W, O, B, Y, B, Y);
    D_9(Y, R, W, O, B, Y, B);
  }
  D_2();
  for (int i = 0; i < k; i++)
  {
    D_10(2, B);
    //  D_11(2, B);
    D_10(2, Y);
    // D_11(2, Y);
    D_10(2, R);
    // D_11(2, R);
    D_10(2, W);
    //  D_11(2, W);
    D_10(2, O);
    //  D_11(2, O);
  }
  D_2();
}


void D_1(uint32_t c1, uint32_t c2, uint32_t c3, uint32_t c4, uint32_t c5)
{
  for (int i = 0; i < 10; i++)
  {
    int i1 = atoi(P1[i]);
    leds[i1] = c1;
  }
  for (int i = 13; i > -1; i--)
  {
    int i1 = atoi(P2[i]);
    leds[i1] = c2;
  }
  for (int i = 0; i < 20; i++)
  {
    int i1 = atoi(P3[i]);
    leds[i1] = c3;
  }
  for (int i = 25; i > -1; i--)
  {
    int i1 = atoi(P4[i]);
    leds[i1] = c4;
  }
  for (int i = 0; i < 30; i++)
  {
    int i1 = atoi(P5[i]);
    leds[i1] = c5;
  }
  FastLED.show();
  delay(time1);
}
void D_2()
{
  for (int i = 0; i < 100; i++)
  {
    leds[i] = 0x000000;
  }
  FastLED.show();
  delay(time2);
}
void D_3(uint8_t width, uint32_t color)
{
  uint32_t old_val[NUM_LEDS];
  for (int count = 1; count < 6; count++)
  {
    uint32_t k1 = dim3(count, color);
    old_val[count] = color;
    for (int x = count; x > 0; x--)
    {
      old_val[x - 1] = dimColor(old_val[x - 1], width);
      uint32_t k2 = dim3(x - 1, old_val[x - 1]);
    }
  }
  delay(time3);
}
void D_4(uint8_t width, uint32_t color)
{
  uint32_t old_val[NUM_LEDS];
  for (int count = 6; count >= 1; count--)
  {
    uint32_t k3 = dim4(count, color);
    old_val[count] = color;
    for (int x = count; x <= 6 ; x++)
    {
      old_val[x - 1] = dimColor(old_val[x - 1], width);
      uint32_t k4 = dim4(x + 1, old_val[x + 1]);
    }
  }
  delay(time3);
}

uint32_t dimColor(uint32_t color, uint8_t width)
{
  return (((color & 0xFF0000) / width) & 0xFF0000) + (((color & 0x00FF00) / width) & 0x00FF00) + (((color & 0x0000FF) / width) & 0x0000FF);
}

uint32_t dim3(uint32_t cou, uint32_t colo)
{
  if (cou == 1)
  {
    for (int i = 0; i < 10; i++)
    {
      int i1 = atoi(P1[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 2)
  {
    for (int i = 0; i < 14; i++)
    {
      int i1 = atoi(P2[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 3)
  {
    for (int i = 0; i < 20; i++)
    {
      int i1 = atoi(P3[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 4)
  {
    for (int i = 0; i < 26; i++)
    {
      int i1 = atoi(P4[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 5)
  {
    for (int i = 0; i < 30; i++)
    {
      int i1 = atoi(P5[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  delay(time4);
}

uint32_t dim4(uint32_t cou, uint32_t colo)
{
  if (cou == 5)
  {
    for (int i = 0; i < 30; i++)
    {
      int i1 = atoi(P5[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 4)
  {
    for (int i = 0; i < 26; i++)
    {
      int i1 = atoi(P4[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 3)
  {
    for (int i = 0; i < 20; i++)
    {
      int i1 = atoi(P3[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 2)
  {
    for (int i = 0; i < 14; i++)
    {
      int i1 = atoi(P2[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 1)
  {
    for (int i = 0; i < 10; i++)
    {
      int i1 = atoi(P1[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  delay(time4);
}
void D_5(uint32_t c1, uint32_t c2, uint32_t c3, uint32_t c4, uint32_t c5)
{
  for (int i = 0; i < 20; i++)
  {
    int i1 = atoi(P6[i]);
    leds[i1] = c1;
  }
  for (int i = 0; i < 20; i++)
  {
    int i1 = atoi(P7[i]);
    leds[i1] = c2;
  }
  for (int i = 0; i < 20; i++)
  {
    int i1 = atoi(P8[i]);
    leds[i1] = c3;
  }
  for (int i = 0; i < 20; i++)
  {
    int i1 = atoi(P9[i]);
    leds[i1] = c4;
  }
  for (int i = 0; i < 20; i++)
  {
    int i1 = atoi(P10[i]);
    leds[i1] = c5;
  }
  FastLED.show();
  delay(time5);
}
void D_6(uint8_t width, uint32_t color)
{
  uint32_t old_val[NUM_LEDS];
  for (int count = 1; count < 7; count++)
  {
    uint32_t k1 = dim6(count, color);
    old_val[count] = color;
    for (int x = count; x > 0; x--)
    {
      old_val[x - 1] = dimColor(old_val[x - 1], width);
      uint32_t k2 = dim6(x - 1, old_val[x - 1]);
    }
  }
  delay(time6);
}
void D_7(uint8_t width, uint32_t color)
{
  uint32_t old_val[NUM_LEDS];
  for (int count = 7; count >= 1; count--)
  {
    uint32_t k3 = dim7(count, color);
    old_val[count] = color;
    for (int x = count; x <= 7 ; x++)
    {
      old_val[x - 1] = dimColor(old_val[x - 1], width);
      uint32_t k4 = dim7(x + 1, old_val[x + 1]);
    }
  }
  delay(time6);
}
uint32_t dim6(uint32_t cou, uint32_t colo)
{
  if (cou == 1)
  {
    for (int i = 0; i < 10; i++)
    {
      int i1 = atoi(P6a[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 2)
  {
    for (int i = 0; i < 20; i++)
    {
      int i1 = atoi(P7[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 3)
  {
    for (int i = 0; i < 20; i++)
    {
      int i1 = atoi(P8[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 4)
  {
    for (int i = 0; i < 20; i++)
    {
      int i1 = atoi(P9[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 5)
  {
    for (int i = 0; i < 20; i++)
    {
      int i1 = atoi(P10[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 6)
  {
    for (int i = 0; i < 10; i++)
    {
      int i1 = atoi(P6b[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  delay(time7);
}

uint32_t dim7(uint32_t cou, uint32_t colo)
{
  if (cou == 6)
  {
    for (int i = 0; i < 10; i++)
    {
      int i1 = atoi(P6b[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 5)
  {
    for (int i = 0; i < 20; i++)
    {
      int i1 = atoi(P10[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 4)
  {
    for (int i = 0; i < 20; i++)
    {
      int i1 = atoi(P9[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 3)
  {
    for (int i = 0; i < 20; i++)
    {
      int i1 = atoi(P8[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 2)
  {
    for (int i = 0; i < 20; i++)
    {
      int i1 = atoi(P7[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 1)
  {
    for (int i = 0; i < 10; i++)
    {
      int i1 = atoi(P6a[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  delay(time7);
}
void D_8(uint32_t c1, uint32_t c2, uint32_t c3, uint32_t c4, uint32_t c5)
{
  for (int i = 0; i < 18; i++)
  {
    int i1 = atoi(P11[i]);
    leds[i1] = c1;
  }
  for (int i = 0; i < 18; i++)
  {
    int i1 = atoi(P12[i]);
    leds[i1] = c2;
  }
  for (int i = 0; i < 18; i++)
  {
    int i1 = atoi(P13[i]);
    leds[i1] = c3;
  }
  for (int i = 0; i < 18; i++)
  {
    int i1 = atoi(P14[i]);
    leds[i1] = c4;
  }
  for (int i = 0; i < 18; i++)
  {
    int i1 = atoi(P15[i]);
    leds[i1] = c5;
  }
  FastLED.show();
  delay(time8);
}
void D_9(uint32_t c28, uint32_t c29, uint32_t c30, uint32_t c31, uint32_t c32, uint32_t c33, uint32_t c34)
{
  for (int i = 0; i < 3; i++)
  {
    int i1 = atoi(P16[i]);
    leds[i1] = c28;
  }
  for (int i = 0; i < 15; i++)
  {
    int i1 = atoi(P17[i]);
    leds[i1] = c29;
  }
  for (int i = 0; i < 20; i++)
  {
    int i1 = atoi(P18[i]);
    leds[i1] = c30;
  }
  for (int i = 0; i < 20; i++)
  {
    int i1 = atoi(P19[i]);
    leds[i1] = c31;
  }
  for (int i = 0; i < 20; i++)
  {
    int i1 = atoi(P20[i]);
    leds[i1] = c32;
  }
  for (int i = 0; i < 16; i++)
  {
    int i1 = atoi(P21[i]);
    leds[i1] = c33;
  }
  for (int i = 0; i < 6; i++)
  {
    int i1 = atoi(P22[i]);
    leds[i1] = c34;
  }
  FastLED.show();
  delay(time9);
}
void D_10(uint8_t width, uint32_t color)
{
  uint32_t old_val[NUM_LEDS];
  for (int count = 1; count < 8; count++)
  {
    uint32_t k1 = dim10(count, color);
    old_val[count] = color;
    for (int x = count; x > 0; x--)
    {
      old_val[x - 1] = dimColor(old_val[x - 1], width);
      uint32_t k2 = dim10(x - 1, old_val[x - 1]);
    }
  }
  delay(time10);
}
void D_11(uint8_t width, uint32_t color)
{
  uint32_t old_val[NUM_LEDS];
  for (int count = 8; count >= 1; count--)
  {
    uint32_t k3 = dim11(count, color);
    old_val[count] = color;
    for (int x = count; x <= 8 ; x++)
    {
      old_val[x - 1] = dimColor(old_val[x - 1], width);
      uint32_t k4 = dim11(x + 1, old_val[x + 1]);
    }
  }
  delay(time10);
}
uint32_t dim10(uint32_t cou, uint32_t colo)
{
  if (cou == 1)
  {
    for (int i = 0; i < 3; i++)
    {
      int i1 = atoi(P16[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 2)
  {
    for (int i = 0; i < 15; i++)
    {
      int i1 = atoi(P17[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 3)
  {
    for (int i = 0; i < 20; i++)
    {
      int i1 = atoi(P18[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 4)
  {
    for (int i = 0; i < 20; i++)
    {
      int i1 = atoi(P19[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 5)
  {
    for (int i = 0; i < 20; i++)
    {
      int i1 = atoi(P20[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 6)
  {
    for (int i = 0; i < 16; i++)
    {
      int i1 = atoi(P21[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 7)
  {
    for (int i = 0; i < 6; i++)
    {
      int i1 = atoi(P22[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  delay(time11);
}

uint32_t dim11(uint32_t cou, uint32_t colo)
{
  if (cou == 7)
  {
    for (int i = 0; i < 6; i++)
    {
      int i1 = atoi(P22[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 6)
  {
    for (int i = 0; i < 16; i++)
    {
      int i1 = atoi(P21[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 5)
  {
    for (int i = 0; i < 20; i++)
    {
      int i1 = atoi(P20[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 4)
  {
    for (int i = 0; i < 20; i++)
    {
      int i1 = atoi(P19[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 3)
  {
    for (int i = 0; i < 20; i++)
    {
      int i1 = atoi(P18[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 2)
  {
    for (int i = 0; i < 15; i++)
    {
      int i1 = atoi(P17[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  if (cou == 1)
  {
    for (int i = 0; i < 3; i++)
    {
      int i1 = atoi(P16[i]);
      leds[i1] = colo;
    }
    FastLED.show();
  }
  delay(time11);
}
