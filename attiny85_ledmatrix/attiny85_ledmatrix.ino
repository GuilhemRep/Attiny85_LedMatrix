#include "letters.h"
#include "anims.h"

// Temps atomique d'affichage
const int micropause = 25;

unsigned long previousMicros = 0;
int ledAct = 0;

unsigned long dt = 0;

int numAnim = 0;
unsigned long debutAnim = 0;
const int nombreAnim = 6;
unsigned long pauses[nombreAnim] = {100000,50000,50000,10000,400000,100000};

unsigned long dureeAnim[nombreAnim] = {2000000,1000000,2000000,4000000,7*pauses[4],8*5*pauses[5]};
unsigned long pauseCurrentAnim = pauses[0];


// Fonction qui actualise fig sur la led ledAct
void affiche(){
 fig[ledAct]?on(led[ledAct]):off();
}

// Probablement inutile
void setup() {
  Serial.begin(9600);

  for (int i=0;i<nombreLeds;i++){
    pinMode(pin[i],INPUT);
  }
  pinMode(previous[0],OUTPUT);
  pinMode(previous[1],OUTPUT);
}

void loop() {
  unsigned long currentMicros = micros();
  
  // Actualisation de l'affichage
  if (currentMicros - previousMicros >= micropause) {
    previousMicros = currentMicros;
    ledAct = (ledAct + 1) % nombreLeds;
    affiche();
  }

  // Changement d'animation
  if (currentMicros - debutAnim >= dureeAnim[numAnim]){
    debutAnim = currentMicros;
    numAnim = (numAnim + 1) % nombreAnim;
    pauseCurrentAnim = pauses[numAnim];
    int chenille = 0;
    int prec=0;
  }

  if (currentMicros - dt >= pauseCurrentAnim){
    dt = currentMicros;
    switch (numAnim){
      case 0:
        anim0();
      break;
      case 1:
        anim1();
      break;
      case 2:
        anim2();
      break;
      case 3:
        anim3();
      break;
      case 4:
        anim4();
      break;
      case 5:
        anim5();
      break;
      default:

      break;
    }
  }  
}
