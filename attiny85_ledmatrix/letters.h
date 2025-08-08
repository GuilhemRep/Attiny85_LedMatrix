const bool O=true;
const bool _=false;

const int nombreLeds = 20;


const int pin[5] = {8,9,10,11,12};

const int led[nombreLeds][2] = {
  {pin[0],pin[4]},
  {pin[0],pin[3]},
  {pin[0],pin[2]},
  {pin[0],pin[1]},
  {pin[1],pin[4]},
  {pin[1],pin[3]},
  {pin[1],pin[2]},
  {pin[1],pin[0]},
  {pin[2],pin[4]},
  {pin[2],pin[3]},
  {pin[2],pin[1]},
  {pin[2],pin[0]},
  {pin[3],pin[4]},
  {pin[3],pin[2]},
  {pin[3],pin[1]},
  {pin[3],pin[0]},
  {pin[4],pin[3]},
  {pin[4],pin[2]},
  {pin[4],pin[1]},
  {pin[4],pin[0]},

};



bool fig[nombreLeds] ={
_,_,_,_,
_,_,_,_,
_,_,_,_,
_,_,_,_,
_,_,_,_,
};


const bool a[nombreLeds] PROGMEM ={
_,O,O,O,
O,_,_,O,
O,_,_,O,
O,O,O,O,
O,_,_,O
};
const bool b[nombreLeds] PROGMEM ={
O,O,O,_,
O,_,_,O,
O,O,O,_,
O,_,_,O,
O,O,O,_
};
const bool c[nombreLeds] PROGMEM ={
_,O,O,_,
O,_,_,O,
O,_,_,_,
O,_,_,O,
_,O,O,_
};
const bool d[nombreLeds] PROGMEM ={
O,O,O,_,
O,_,_,O,
O,_,_,O,
O,_,_,O,
O,O,O,_
};
const bool e[nombreLeds] PROGMEM ={
O,O,O,O,
O,_,_,_,
O,O,O,_,
O,_,_,_,
O,O,O,O
};
const bool f[nombreLeds] PROGMEM ={
O,O,O,O,
O,_,_,_,
O,O,O,_,
O,_,_,_,
O,_,_,_
};

const bool g[nombreLeds] PROGMEM ={
_,O,O,O,
O,_,_,_,
O,_,O,O,
O,_,_,O,
_,O,O,O
};

const bool h[nombreLeds] PROGMEM ={
O,_,_,O,
O,_,_,O,
O,O,O,O,
O,_,_,O,
O,_,_,O
};
const bool i[nombreLeds] PROGMEM ={
O,O,O,_,
_,O,_,_,
_,O,_,_,
_,O,_,_,
O,O,O,_
};
const bool j[nombreLeds] PROGMEM ={
_,O,O,O,
_,_,_,O,
_,_,_,O,
O,_,_,O,
_,O,O,_
};
const bool k[nombreLeds] PROGMEM ={
O,_,_,O,
O,_,O,_,
O,O,_,_,
O,_,O,_,
O,_,_,O
};
const bool l[nombreLeds] PROGMEM ={
O,_,_,_,
O,_,_,_,
O,_,_,_,
O,_,_,_,
O,O,O,O
};
const bool m[nombreLeds] PROGMEM ={
O,_,_,O,
O,O,O,O,
O,O,O,O,
O,_,_,O,
O,_,_,O
};
const bool n[nombreLeds] PROGMEM ={
O,_,_,O,
O,O,_,O,
O,_,O,O,
O,_,_,O,
O,_,_,O
};
const bool o[nombreLeds] PROGMEM ={
_,O,O,O,
O,_,_,O,
O,_,_,O,
O,_,_,O,
_,O,O,_
};
const bool p[nombreLeds] PROGMEM ={
O,O,O,O,
O,_,_,O,
O,O,O,_,
O,_,_,_,
O,_,_,_
};
const bool q[nombreLeds] PROGMEM ={
_,O,O,_,
O,_,_,O,
O,_,_,O,
_,O,O,_,
_,_,_,O
};
const bool r[nombreLeds] PROGMEM ={
O,O,O,_,
O,_,_,O,
O,_,_,O,
O,O,O,_,
O,_,_,O
};
const bool s[nombreLeds] PROGMEM ={
_,O,O,O,
O,_,_,_,
_,O,O,_,
_,_,_,O,
O,O,O,_
};
const bool t[nombreLeds] PROGMEM ={
O,_,_,_,
O,O,O,_,
O,_,_,_,
O,_,_,O,
_,O,O,_
};
const bool u[nombreLeds] PROGMEM ={
O,_,_,O,
O,_,_,O,
O,_,_,O,
O,_,_,O,
_,O,O,_
};
const bool v[nombreLeds] PROGMEM ={
O,_,_,O,
O,_,_,O,
O,_,_,O,
_,O,_,O,
_,_,O,_
};
const bool w[nombreLeds] PROGMEM ={
O,_,_,O,
O,_,_,O,
O,_,_,O,
O,O,O,O,
_,O,O,_
};
const bool x[nombreLeds] PROGMEM ={
O,_,_,O,
O,O,_,O,
_,O,O,_,
O,_,_,O,
O,_,_,O
};
const bool y[nombreLeds] PROGMEM ={
O,_,_,O,
O,_,_,O,
_,O,O,O,
_,_,_,O,
_,O,O,_
};
const bool z[nombreLeds] PROGMEM ={
O,O,O,O,
_,_,_,O,
_,O,O,_,
O,_,_,_,
O,O,O,O
};

const bool esp[nombreLeds] PROGMEM ={
_,_,_,_,
_,_,_,_,
_,_,_,_,
_,_,_,_,
_,_,_,_
};

const bool* const alphabetBitmaps[27] PROGMEM = {
  a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,y,z,esp
};

const bool* getLetterBitmap(char c) {
  if (c >= 'a' && c <= 'z') {
    return (const bool*) pgm_read_ptr(&alphabetBitmaps[c - 'a']);
  } else {
    return nullptr;  // Or a default empty bitmap
  }
}

void getStringBitmaps(const char* str, const bool* outBitmaps[], size_t maxLength) {
  for (size_t i = 0; i < maxLength && str[i] != '\0'; ++i) {
    outBitmaps[i] = getLetterBitmap(str[i]);
  }
}


//const int nombreLeds = 5;
//const int maxChars = 10;
//
//const char* message = "AB";
//const bool* bitmaps[maxChars];
//
//void setup() {
//  Serial.begin(9600);
//  getStringBitmaps(message, bitmaps, maxChars);
//
//  for (int i = 0; i < 2; i++) {
//    Serial.print("Letter ");
//    Serial.println(message[i]);
//    for (int j = 0; j < nombreLeds; j++) {
//      bool val = pgm_read_byte(&bitmaps[i][j]);
//      Serial.print(val ? "O" : "_");
//      Serial.print(" ");
//    }
//    Serial.println();
//  }
//}
