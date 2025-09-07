#include "RP2040_PWM.h"
// Pin configuration
const int buzzerPin = 2;

// Morse code timing
const int dotDuration = 40;                // Duration of a dot
const int dashDuration = dotDuration * 3;  // Duration of a dash
const int elementSpace = dotDuration;      // Space between elements
const int letterSpace = dotDuration * 3;   // Space between letters
const int wordSpace = dotDuration * 7;
const char* SATNAME = "DFH_EMU_RP2040_AM";
// Morse code representation
const char* morseCode[] = {
  "-----",    // 0
  ".----",    // 1
  "..---",    // 2
  "...--",    // 3
  "....-",    // 4
  ".....",    // 5
  "-....",    // 6
  "--...",    // 7
  "---..",    // 8
  "----.",    // 9
  ".-",       // A
  "-...",     // B
  "-.-.",     // C
  "-..",      // D
  ".",        // E
  "..-.",     // F
  "--.",      // G
  "....",     // H
  "..",       // I
  ".---",     // J
  "-.-",      // K
  ".-..",     // L
  "--",       // M
  "-.",       // N
  "---",      // O
  ".--.",     // P
  "--.-",     // Q
  ".-.",      // R
  "...",      // S
  "-",        // T
  "..-",      // U
  "...-",     // V
  ".--",      // W
  "-..-",     // X
  "-.--",     // Y
  "--..",     // Z
  "..--..",   // ?
  ".-.-.-",   // .
  "--..--",   // ,
  "---...",   // :
  "-.-.-.",   // ;
  "-..-.",    // /
  "-...-",    // =
  ".-..-.",   // "
  ".----.",   // '
  "-....-",   // -
  "..--.-",   // _
  ".-... ",   // &
  "...-..-",  // @
};

const char letters[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ?.,:;/-\"'=-_&@";
RP2040_PWM* PWM;

void setup() {
  PWM = new RP2040_PWM(0, 60000000, 50);
  if (PWM) {
    PWM->setPWM();
  }
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  sendMorse(SATNAME);  // Example string to send
  sendMorse(SATNAME);  // Example string to send
  String envtmpString = String((analogRead(27)));
  int stringLength = envtmpString.length() + 1;  // +1 for the null terminator
  char charArray[stringLength];
  envtmpString.toCharArray(charArray, stringLength);
  sendMorse("ADC.TEMP-");
  sendMorse(charArray);
  tone(buzzerPin, 1047);
  delay(500);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 1047);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 1175);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 784);
  delay(500);
  delay(500);
  delay(500);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 698);
  delay(500);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 698);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 587);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 784);
  delay(500);
  delay(500);
  delay(500);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 1047);
  delay(500);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 1047);
  delay(500);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 1175);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 1397);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 1175);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 1047);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 698);
  delay(500);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 698);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 587);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 784);
  delay(2000);
  noTone(buzzerPin);
  tone(buzzerPin, 1047);
  delay(500);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 1047);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 1175);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 784);
  delay(500);
  delay(500);
  delay(500);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 698);
  delay(500);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 698);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 587);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 784);
  delay(500);
  delay(500);
  delay(500);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 1047);
  delay(500);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 1047);
  delay(500);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 1175);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 1397);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 1175);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 1047);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 698);
  delay(500);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 698);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 587);
  delay(500);
  noTone(buzzerPin);
  tone(buzzerPin, 784);
  delay(2000);
  noTone(buzzerPin);
  //tone(buzzerPin, 2349);
  //delay(250);
  //noTone(buzzerPin);
  //delay(750);
  //tone(buzzerPin, 1175);
  //delay(250);
  //tone(buzzerPin, 1319);
  // delay(250);
  // tone(buzzerPin, 1319);
  // delay(250);
  // tone(buzzerPin, 1175);
  // delay(250);
  // tone(buzzerPin, 1319);
  // delay(250);
  // tone(buzzerPin, 1480);
  // delay(250);
  // tone(buzzerPin, 2217);
  // delay(250);
  // tone(buzzerPin, 2217);
  // delay(250);
  // tone(buzzerPin, 2349);
  delay(5000);  // Delay before repeating
}

void sendMorse(const char* text) {
  for (int i = 0; text[i] != '\0'; i++) {
    char ch = toupper(text[i]);  // Convert to uppercase
    int index = findIndex(ch);

    if (index != -1) {
      const char* code = morseCode[index];
      while (*code) {
        if (*code == '.') {
          tone(buzzerPin, 1000);
          delay(dotDuration);
          noTone(buzzerPin);
        } else if (*code == '-') {
          tone(buzzerPin, 1000);
          delay(dashDuration);
          noTone(buzzerPin);
        }
        code++;
        delay(elementSpace);  // Space between elements
      }
      delay(letterSpace);  // Space between letters
    }
  }
  delay(wordSpace);
}

int findIndex(char ch) {
  for (int i = 0; i < sizeof(letters) - 1; i++) {
    if (letters[i] == ch) {
      return i;
    }
  }
  return -1;  // Character not found
}