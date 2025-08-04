int chenille = 0;
int prec=0;
int lettreAct=0;
int coloneAct=0;


// Pour le défilement
int currentChar = 0;
int currentPos = 0;

int previous[2];

// Pour le vrai défilement
int letterIndex = 0;
int step = 0;

void serialPrintFig(bool f[]){
  for (int i=0; i<nombreLeds; i++){
    if (f[i]) {
      Serial.print("O");
    } else {
      Serial.print(" ");
    }
    if (i%4 == 3) {
      Serial.println("|");
    }
  }
}

// Allumer la led l, déconnecter la led précedente
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


// Fonction qui met fig à l'état de la matrice passée en argument
void placarde(bool letter[]){
  for (int i=0; i<nombreLeds; i++){
    fig[i]=letter[i];
  }
}

// for 20 leds
void placarde2(bool lettre1[], bool lettre2[]){
  switch (step){
      case 0:
        placarde(lettre1);
      break;
      case 1:
        for (int i=0; i<5; i++){
          fig[4*i+0]=lettre1[4*i+1];
          fig[4*i+1]=lettre1[4*i+2];
          fig[4*i+2]=lettre1[4*i+3];
        }
        for (int i=0; i<5; i++){
          fig[4*i+3]=_;
        }
      break;
      case 2:
        for (int i=0; i<5; i++){
          fig[4*i+0]=lettre1[4*i+2];
          fig[4*i+1]=lettre1[4*i+3];
        }
        for (int i=0; i<5; i++){
          fig[4*i+2]=_;
        }
        for (int i=0; i<5; i++){
          fig[4*i+3]=lettre2[4*i];
        }
      break;
      case 3:
        for (int i=0; i<5; i++){
          fig[4*i+0]=lettre1[4*i+3];
        }
        for (int i=0; i<5; i++){
          fig[4*i+1]=_;
        }
        for (int i=0; i<5; i++){
          fig[4*i+2]=lettre2[4*i];
          fig[4*i+3]=lettre2[4*i+1];
        }
      break;
      case 4:
        for (int i=0; i<5; i++){
          fig[4*i+0]=_;
        }
        for (int i=0; i<5; i++){
          fig[4*i+1]=lettre2[4*i];
          fig[4*i+2]=lettre2[4*i+1];
          fig[4*i+3]=lettre2[4*i+2];
        }
      break;
      default:
        
      break;
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
  fig[prec] = false;
  chenille = (prec + random(1,nombreLeds)) % nombreLeds;  // Pour choisir une autre led
  prec = chenille;
  fig[chenille]=true;
}

void anim4(){
  bool* txt[7] = {b,o,n,j,o,u,r};
  placarde(txt[letterIndex]);
  letterIndex=(letterIndex+1)%7;
}

void anim5(){   // défilement
   switch(letterIndex%8){
     case 0:
       placarde2(esp, d);
     break;
     case 1:
       placarde2(d, i);
     break;
     case 2:
       placarde2(i,m);
     break;
     case 3:
       placarde2(m,i);
     break;
     case 4:
       placarde2(i,t);
     break;
     case 5:
       placarde2(t,r);
     break;
     case 6:
       placarde2(r,i);
     break;
     case 7:
       placarde2(i,esp);
     break;
     default:
       placarde(esp);
     break;
   }
  if (step >= 4) {
    letterIndex  = (letterIndex+1)%8;
    step = 0;
  } else {
    step += 1;    
  }
}
