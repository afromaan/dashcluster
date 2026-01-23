#include <Arduino.h>
#include <Keyboard.h>


#define PIN_IGNITION_ON     2 //zapalovani
#define PIN_IGNITION_START  6 //start

#define PIN_BLINKER_LEFT    3 //blinker leva
#define PIN_BLINKER_RIGHT   4 //blinker prava
#define PIN_HAZARD          7 //vystrazna svetla

#define PIN_LIGHTS          5 //svetla
#define PIN_HIGHBEAM        8 //dalkova
#define PIN_FOG             9 //mlhovka

#define PIN_HORN           10 //klakson
#define PIN_WIPERS         11 //sterace
#define PIN_CRUISE         12 //tempomat
#define PIN_PARK_BRAKE     13 //rucka

bool lastIgnitionOn = HIGH;
bool lastStart      = HIGH;
bool lastLeft       = HIGH;
bool lastRight      = HIGH;
bool lastHazard     = HIGH;
bool lastLights     = HIGH;
bool lastHighBeam   = HIGH;
bool lastFog        = HIGH;
bool lastHorn       = HIGH;
bool lastWipers     = HIGH;
bool lastCruise     = HIGH;
bool lastParkBrake  = HIGH;

bool ignitionOn   = false;
bool blinkerLeft  = false;
bool blinkerRight = false;
bool hazard       = false;
bool lightsOn     = false;
bool highBeam     = false;
bool fogLights    = false;
bool horn         = false;
bool wipers       = false;
bool cruise       = false;
bool parkBrake    = false;

void setup() {
  // ---- Piny ----
  pinMode(PIN_IGNITION_ON, INPUT_PULLUP);
  pinMode(PIN_IGNITION_START, INPUT_PULLUP);
  pinMode(PIN_BLINKER_LEFT, INPUT_PULLUP);
  pinMode(PIN_BLINKER_RIGHT, INPUT_PULLUP);
  pinMode(PIN_HAZARD, INPUT_PULLUP);
  pinMode(PIN_LIGHTS, INPUT_PULLUP);
  pinMode(PIN_HIGHBEAM, INPUT_PULLUP);
  pinMode(PIN_FOG, INPUT_PULLUP);
  pinMode(PIN_HORN, INPUT_PULLUP);
  pinMode(PIN_WIPERS, INPUT_PULLUP);
  pinMode(PIN_CRUISE, INPUT_PULLUP);
  pinMode(PIN_PARK_BRAKE, INPUT_PULLUP);

  Keyboard.begin();
}

void loop() {
  bool nowIgnitionOn = digitalRead(PIN_IGNITION_ON);
  bool nowStart      = digitalRead(PIN_IGNITION_START);
  bool nowLeft       = digitalRead(PIN_BLINKER_LEFT);
  bool nowRight      = digitalRead(PIN_BLINKER_RIGHT);
  bool nowHazard     = digitalRead(PIN_HAZARD);
  bool nowLights     = digitalRead(PIN_LIGHTS);
  bool nowHighBeam   = digitalRead(PIN_HIGHBEAM);
  bool nowFog        = digitalRead(PIN_FOG);
  bool nowHorn       = digitalRead(PIN_HORN);
  bool nowWipers     = digitalRead(PIN_WIPERS);
  bool nowCruise     = digitalRead(PIN_CRUISE);
  bool nowParkBrake  = digitalRead(PIN_PARK_BRAKE);

  if(nowIgnitionOn == LOW && lastIgnitionOn == HIGH) ignitionOn = true;
  if(nowIgnitionOn == HIGH && lastIgnitionOn == LOW) ignitionOn = false;

  if(nowStart == LOW && ignitionOn) Keyboard.press('e');
  else Keyboard.release('e');

  if(nowLights == LOW && lastLights == HIGH) lightsOn = !lightsOn;
  if(lightsOn) Keyboard.press('l'); else Keyboard.release('l');

  if(nowHighBeam == LOW && lastHighBeam == HIGH) highBeam = !highBeam;
  if(highBeam) Keyboard.press('f'); else Keyboard.release('f');

  if(nowFog == LOW && lastFog == HIGH) fogLights = !fogLights;
  if(fogLights) Keyboard.press('g'); else Keyboard.release('g');

  if(nowHazard == LOW && lastHazard == HIGH){
    hazard = !hazard;
    if(hazard){ blinkerLeft = true; blinkerRight = true; } 
    else { blinkerLeft = false; blinkerRight = false; }
  }

  if(nowLeft == LOW && lastLeft == HIGH) {
    blinkerLeft = !blinkerLeft;
    blinkerRight = false;
  }

  if(nowRight == LOW && lastRight == HIGH){
    blinkerRight = !blinkerRight;
    blinkerLeft = false;
  }

  // posílání blinkrů do ETS2
  if(blinkerLeft) Keyboard.press(',');
  else Keyboard.release(',');

  if(blinkerRight) Keyboard.press('.');
  else Keyboard.release('.');

  if(nowHorn == LOW) Keyboard.press('h'); else Keyboard.release('h');

  if(nowWipers == LOW && lastWipers == HIGH) wipers = !wipers;
  if(wipers) Keyboard.press('w'); else Keyboard.release('w');

  if(nowCruise == LOW && lastCruise == HIGH) cruise = !cruise;
  if(cruise) Keyboard.press('q'); else Keyboard.release('q');

  if(nowParkBrake == LOW && lastParkBrake == HIGH) parkBrake = !parkBrake;
  if(parkBrake) Keyboard.press(' '); else Keyboard.release(' ');

  lastIgnitionOn = nowIgnitionOn;
  lastStart      = nowStart;
  lastLeft       = nowLeft;
  lastRight      = nowRight;
  lastHazard     = nowHazard;
  lastLights     = nowLights;
  lastHighBeam   = nowHighBeam;
  lastFog        = nowFog;
  lastHorn       = nowHorn;
  lastWipers     = nowWipers;
  lastCruise     = nowCruise;
  lastParkBrake  = nowParkBrake;

  delay(10); //debounce
}
