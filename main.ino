float c4 = 261.63;
float d4 = 293.665;
float e4 = 329.628;
float f4 = 349.23;
float g4 = 391.995;
float a4 = 440;
float b4 = 493.88;

float c5 = 523.25;
float d5 = 587.33;

void setup() {
  pinMode(2, OUTPUT);
}

void loop() {
  daisy();
}

void sfx() {
  tone(2, 600, 50);
  delay(50);
  
  tone(2, 650, 50);
  delay(100);

  tone(2, 700, 75);
  delay(100);

  tone(2, 750, 75);
  delay(100);
}

void daisy(){
  tone(2, c5, 900);
  delay(900); //bar 1
  
  tone(2, a4, 900);
  delay(900); //bar 2
  
  tone(2, f4, 900);
  delay(900); //bar 3
  
  tone(2, c4, 900);
  delay(900); //bar 4

  tone(2, d4, 300);
  delay(300);
  tone(2, e4, 300);
  delay(300);
  tone(2, f4, 300);
  delay(300); //bar 5

  tone(2, d4, 675);
  delay(725);
  tone(2, f4, 225);
  delay(225); //bar 6

  tone(2, c4, 1400);
  delay(1800); //bar 7 & 8

  tone(2, d4, 900);
  delay(900); //bar 9

  tone(2, b4, 900);
  delay(900); //bar 10

  tone(2, a4, 900);
  delay(900); //bar 11

  tone(2, f4, 900);
  delay(900); //bar 12

  tone(2, d4, 300);
  delay(300);
  tone(2, e4, 300);
  delay(300);
  tone(2, f4, 300);
  delay(300); //bar 13

  tone(2, g4, 675);
  delay(725);
  tone(2, a4, 225);
  delay(225); //bar 14

  tone(2, g4, 1575);
  delay(1975);
  tone(2, a4, 225);
  delay(225); //bar 15 & 16

  tone(2, b4, 300);
  delay(300);
  tone(2, a4, 300);
  delay(300);
  tone(2, f4, 300);
  delay(300); //bar 17

  tone(2, c5, 675);
  delay(725);
  tone(2, g4, 225);
  delay(425); //bar 18

  tone(2, g4, 225);
  delay(225);
  tone(2, f4, 1575);
  delay(1975);
  tone(2, g4, 225);
  delay(225); //bar 19 & 20

  tone(2, a4, 675);
  delay(725);
  tone(2, f4, 225);
  delay(425); //bar 21

  tone(2, d4, 675);
  delay(725);
  tone(2, f4, 225);
  delay(425); //bar 22

  tone(2, d4, 225);
  delay(225);
  tone(2, c4, 1575);
  delay(1975);
  tone(2, c4, 225);
  delay(225); //bar 23 & 24

  tone(2, f4, 675);
  delay(725);
  tone(2, a4, 225);
  delay(425); //bar 25

  tone(2, g4, 225);
  delay(675); //bar 26

  tone(2, f4, 675);
  delay(725);
  tone(2, a4, 225);
  delay(425); //bar 25

  tone(2, g4, 300);
  delay(300);
  tone(2, a4, 300);
  delay(300);
  tone(2, b4, 300);
  delay(300); //bar 26

  tone(2, c5, 300);
  delay(300);
  tone(2, a4, 300);
  delay(300);
  tone(2, f4, 300);
  delay(300); //bar 27

  tone(2, g4, 675);
  delay(725);
  tone(2, c4, 225);
  delay(425); //bar 28

  tone(2, f4, 900);
  delay(900); //bar 29

  delay(1000);
  sfx();
  delay(1000);
}
