 void setup() {

TCCR2B = TCCR2B & B11111000 | B00000001; //  PWM frequency of 31372 Hz on pin 3 
pinMode(3,OUTPUT);

}

void loop() {
analogWrite(3,155);

}

/*
 for D3 and D11

TCCR2B = TCCR2B & B11111000 | B00000001; // for PWM frequency of 31372.55 Hz

TCCR2B = TCCR2B & B11111000 | B00000010; // for PWM frequency of 3921.16 Hz

TCCR2B = TCCR2B & B11111000 | B00000011; // for PWM frequency of 980.39 Hz

TCCR2B = TCCR2B & B11111000 | B00000100; // for PWM frequency of 490.20 Hz (The DEFAULT)

TCCR2B = TCCR2B & B11111000 | B00000101; // for PWM frequency of 245.10 Hz

TCCR2B = TCCR2B & B11111000 | B00000110; // for PWM frequency of 122.55 Hz

TCCR2B = TCCR2B & B11111000 | B00000111; // for PWM frequency of 30.64 Hz

for D5 and D6
TCCR0B = TCCR0B & B11111000 | B00000001; // for PWM frequency of 62500.00 Hz
TCCR0B = TCCR0B & B11111000 | B00000010; // for PWM frequency of 7812.50 Hz
TCCR0B = TCCR0B & B11111000 | B00000011; // for PWM frequency of 976.56 Hz (The DEFAULT)
TCCR0B = TCCR0B & B11111000 | B00000100; // for PWM frequency of 244.14 Hz
TCCR0B = TCCR0B & B11111000 | B00000101; // for PWM frequency of 61.04 Hz

for D9 and D10

TCCR1B = TCCR1B & B11111000 | B00000001; // set timer 1 divisor to 1 for PWM frequency of 31372.55 Hz
TCCR1B = TCCR1B & B11111000 | B00000010; // for PWM frequency of 3921.16 Hz
TCCR1B = TCCR1B & B11111000 | B00000011; // for PWM frequency of 490.20 Hz (The DEFAULT)
TCCR1B = TCCR1B & B11111000 | B00000100; // for PWM frequency of 122.55 Hz
TCCR1B = TCCR1B & B11111000 | B00000101; // for PWM frequency of 30.64 Hz

*/

