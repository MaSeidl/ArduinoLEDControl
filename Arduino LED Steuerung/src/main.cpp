#include <Arduino.h>

// --------------------------------------------------------------------------
// Gegebene Konstanten und Variablen
// Pin-Definitionen
const int ci_PinButton1 = 2; // Pin für den ersten Taster
const int ci_PinButton2 = 3; // Pin für den zweiten Taster
const int ci_PinLed1 = 9;    // Pin für die erste LED
const int ci_PinLed2 = 10;   // Pin für die zweite LED

// Variablen zur Speicherung des aktuellen und vorherigen Zustands der Taster
bool b_CurrentStateButton1 = false;
bool b_LastStateButton1 = false;
bool b_CurrentStateButton2 = false;
bool b_LastStateButton2 = false;

// Variablen zur Steuerung des Blinkbetriebs
bool b_BlinkLed1 = false;
bool b_BlinkLed2 = false;

// Variablen zur Steuerung der Blinkfrequenz
unsigned long ul_PreviousMillisLed1 = 0;
unsigned long ul_PreviousMillisLed2 = 0;
const long l_BlinkInterval = 500; // Blinkintervall in Millisekunden

/**
* @brief Initialisierung der Pins
*/
void setup()
{
  // --------------------------------------------------------------------------
  // Gruppe 1:
  // Initialisierung der Pins
  pinMode(ci_PinButton1, INPUT_PULLUP);
  pinMode(ci_PinButton2, INPUT_PULLUP);
  pinMode(ci_PinLed1, OUTPUT);
  pinMode(ci_PinLed2, OUTPUT);
  
}

/**
 * @brief Hauptschleife des Programmes. Die Eingänge werden abgefragt und die
 *        Ausgänge entsprechend angesteuert
 */
void loop()
{
  // --------------------------------------------------------------------------
  // Gruppe 2:
  // Aktuellen Zustand der Taster lesen
  b_CurrentStateButton1 = digitalRead(ci_PinButton1) == LOW;
  b_CurrentStateButton2 = digitalRead(ci_PinButton2) == LOW;

  // --------------------------------------------------------------------------
  // Gruppe 3:
  // Flankenerkennung für Taster 1
  if (b_CurrentStateButton1 && !b_LastStateButton1)
{
  b_BlinkLed1 = !b_BlinkLed1; //Blinkbetrieb umschalten
  if (!b_BlinkLed1)
{
  digitalWrite(ci_PinLed1, LOW); //LED ausschalten, wenn der Blinkbetrieb beendet wird
}
}
b_LastStateButton1 = b_CurrentStateButton1;


  // --------------------------------------------------------------------------
  // Gruppe 4:
  // Flankenerkennung für Taster 2
  

  // --------------------------------------------------------------------------
  // Gruppe 5:
  // Blinkbetrieb für LED 1
  

  // --------------------------------------------------------------------------
  // Gruppe 6:
  // Blinkbetrieb für LED 2
  
  
}
