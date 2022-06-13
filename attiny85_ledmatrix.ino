const int nombreLeds = 20;
const int led[nombreLeds][2] = {
  {0,2},
  {2,0},
  {1,2},
  {2,1},
  {3,1},
  {1,3},
  {0,1},
  {1,0},
  {4,1},
  {1,4},
  {4,0},
  {0,4},
  {3,2},
  {2,3},
  {3,0},
  {0,3},
  {4,2},
  {2,4},
  {4,3},
  {3,4}
};
const int micropause = 100;

const bool O=true;
const bool _=false;

bool fig[20]={
_,_,_,_,
_,_,_,_,
_,_,_,_,
_,_,_,_,
_,_,_,_
};

const bool a[20]={
O,O,O,O,
O,_,_,O,
O,O,O,O,
O,_,_,O,
O,_,_,O
};
const bool c[20]={
O,O,O,O,
O,_,_,_,
O,_,_,_,
O,_,_,_,
O,O,O,O
};
const bool e[20]={
O,O,O,O,
O,_,_,_,
O,O,O,O,
O,_,_,_,
O,O,O,O
};
const bool g[20]={
O,O,O,O,
O,_,_,_,
O,_,O,O,
O,_,_,O,
O,O,O,O
};
const bool h[20]={
O,_,_,O,
O,_,_,O,
O,O,O,O,
O,_,_,O,
O,_,_,O
};
const bool i[20]={
_,O,_,_,
_,O,_,_,
_,O,_,_,
_,O,_,_,
_,O,_,_
};
const bool j[20]={
O,O,O,O,
_,_,O,_,
_,_,O,_,
O,_,O,_,
_,O,_,_
};
const bool k[20]={
O,_,_,O,
O,_,O,_,
O,O,_,_,
O,_,O,_,
O,_,_,O
};
const bool l[20]={
O,_,_,_,
O,_,_,_,
O,_,_,_,
O,_,_,_,
O,O,O,O
};
const bool m[20]={
O,_,_,O,
O,O,O,O,
O,O,O,O,
O,_,_,O,
O,_,_,O
};
const bool n[20]={
O,_,_,O,
O,O,_,O,
O,_,O,O,
O,_,_,O,
O,_,_,O
};
const bool o[20]={
O,O,O,O,
O,_,_,O,
O,_,_,O,
O,_,_,O,
O,O,O,O
};
const bool s[20]={
O,O,O,O,
O,_,_,_,
O,O,O,O,
_,_,_,O,
O,O,O,O
};
const bool r[20]={
O,O,O,O,
O,_,_,O,
O,O,O,_,
O,_,_,O,
O,_,_,O
};
const bool u[20]={
O,_,_,O,
O,_,_,O,
O,_,_,O,
O,_,_,O,
O,O,O,O
};
const bool v[20]={
O,_,_,O,
O,_,_,O,
O,_,_,O,
O,_,_,O,
_,O,O,_
};
const bool x[20]={
O,_,_,O,
O,_,_,O,
_,O,O,_,
O,_,_,O,
O,_,_,O
};
const bool y[20]={
O,_,_,O,
_,O,_,O,
_,_,O,_,
_,O,_,_,
O,_,_,_
};

const bool esp[20]={
_,_,_,_,
_,_,_,_,
_,_,_,_,
_,_,_,_,
_,_,_,_
};

int previous[2];

unsigned long previousMicros = 0;
int ledAct = 0;

unsigned long dt = 0;

int numAnim = 0;
unsigned long debutAnim = 0;
const int nombreAnim = 5;
unsigned long dureeAnim[nombreAnim] = {6000000,3000000,2000000,4000000};

unsigned long pauses[nombreAnim] = {100000,70000,50000,20000};
unsigned long pauseVariable = pauses[0];

int chenille = 0;
int prec=0;
int lettre=0;
int lettreAct=0;
int coloneAct=0;

// Allumer la led l
void on(int l[]){
  pinMode(previous[0],INPUT);
  pinMode(previous[1],INPUT);
  pinMode(l[0], OUTPUT);
  pinMode(l[1], OUTPUT);
  previous[0]=l[0];
  previous[1]=l[1];
  digitalWrite(l[0],HIGH);
  digitalWrite(l[1],LOW);
}

// Eteindre les leds
void off(){
  for (int i=0;i<5;i++){
    pinMode(i,INPUT);
  }
}

void anim0(){   // Changement d'état aléatoire d'une led
    int c=random(0,nombreLeds);
    fig[c]=!fig[c];
}

void anim1(){   // Allumage aléatoire d'une led
    int c=random(0,nombreLeds);
    fig[c]=true;
}

void anim2(){   // Chenillard à 1 led
  fig[chenille]=_;
  chenille = (chenille + 1) % nombreLeds;
  fig[chenille]=true;
}

void anim3(){   // Etincelles aléatoires
  fig[prec]=false;
  chenille=(prec + random(1,nombreLeds)) % nombreLeds;  // Pour choisir une autre led
  prec = chenille;
  fig[chenille]=true;
}

void anim5(){   // Flash de lettres
  switch(lettre){
    case 0:
      placarde(g);
    break;
    case 1:
      placarde(u);
    break;
    case 2:
      placarde(i);
    break;
    case 3:
      placarde(l);
    break;
    case 4:
      placarde(h);
    break;
    case 5:
      placarde(e);
    break;
    case 6:
      placarde(m);
    break;
    default:
      placarde(fig);
    break;
  }
  lettre=(lettre+1)%7;
}


// Fonction qui actualise fig sur la led ledAct
//void affiche(){
//  if (fig[ledAct]){
//    on(led[ledAct]);
//  }
//  else{
//    off();  // Pour avoir une luminosité moyenne constante
//  }
//}

// Fonction qui actualise fig sur la led ledAct
void affiche(){
  fig[ledAct]?on(led[ledAct]):off();
}

// Fonction qui met fig à l'état de la matrice passée en argument
void placarde(bool nouveau[]){
  for (int i=0; i<nombreLeds; i++){
    fig[i]=nouveau[i];
  }
}

void shift(bool col[5]){
  for (int i=0;i<nombreLeds;i++){
    if (i%4 != 3){
      fig[i]=fig[i+1];
    }
  };
  for (int i=0;i<5;i++){
    fig[4*i+3]=col[i];
  }
}


void setup() {
  for (int i=0;i<nombreLeds;i++){
    pinMode(i,INPUT);
  }
  pinMode(previous[0],OUTPUT);
  pinMode(previous[1],OUTPUT);
}

void loop() {
  unsigned long currentMicros = micros();
  
  // Actualisation de la matrice fig
  if (currentMicros - previousMicros >= micropause) {
    previousMicros = currentMicros;
    ledAct = (ledAct + 1) % nombreLeds;
    affiche();
  }

  // Changement d'animation
  if (currentMicros - debutAnim >= dureeAnim[numAnim]){
    debutAnim = currentMicros;
    numAnim = (numAnim + 1) % nombreAnim;
    pauseVariable = pauses[numAnim];
    int chenille = 0;
    int prec=0;
  }
  
  if (currentMicros - dt >= pauseVariable){
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
      default:
        anim0();
      break;
    }
  }  
}
