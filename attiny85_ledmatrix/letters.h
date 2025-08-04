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



bool fig[nombreLeds]={
_,_,_,_,
_,_,_,_,
_,_,_,_,
_,_,_,_,
_,_,_,_,
};


const bool a[nombreLeds]={
_,O,O,O,
O,_,_,O,
O,_,_,O,
O,O,O,O,
O,_,_,O
};
const bool b[nombreLeds]={
O,O,O,_,
O,_,_,O,
O,O,O,_,
O,_,_,O,
O,O,O,_
};
const bool c[nombreLeds]={
_,O,O,_,
O,_,_,O,
O,_,_,_,
O,_,_,O,
_,O,O,_
};
const bool d[nombreLeds]={
O,O,O,_,
O,_,_,O,
O,_,_,O,
O,_,_,O,
O,O,O,_
};
const bool e[nombreLeds]={
O,O,O,O,
O,_,_,_,
O,O,O,_,
O,_,_,_,
O,O,O,O
};
const bool f[nombreLeds]={
O,O,O,O,
O,_,_,_,
O,O,O,_,
O,_,_,_,
O,_,_,_
};

const bool g[nombreLeds]={
_,O,O,O,
O,_,_,_,
O,_,O,O,
O,_,_,O,
_,O,O,O
};

const bool h[nombreLeds]={
O,_,_,O,
O,_,_,O,
O,O,O,O,
O,_,_,O,
O,_,_,O
};
const bool i[nombreLeds]={
O,O,O,_,
_,O,_,_,
_,O,_,_,
_,O,_,_,
O,O,O,_
};
const bool j[nombreLeds]={
_,O,O,O,
_,_,_,O,
_,_,_,O,
O,_,_,O,
_,O,O,_
};
const bool k[nombreLeds]={
O,_,_,O,
O,_,O,_,
O,O,_,_,
O,_,O,_,
O,_,_,O
};
const bool l[nombreLeds]={
O,_,_,_,
O,_,_,_,
O,_,_,_,
O,_,_,_,
O,O,O,O
};
const bool m[nombreLeds]={
O,_,_,O,
O,O,O,O,
O,O,O,O,
O,_,_,O,
O,_,_,O
};
const bool n[nombreLeds]={
O,_,_,O,
O,O,_,O,
O,_,O,O,
O,_,_,O,
O,_,_,O
};
const bool o[nombreLeds]={
_,O,O,O,
O,_,_,O,
O,_,_,O,
O,_,_,O,
_,O,O,_
};
const bool p[nombreLeds]={
O,O,O,O,
O,_,_,O,
O,O,O,_,
O,_,_,_,
O,_,_,_
};
const bool q[nombreLeds]={
_,O,O,_,
O,_,_,O,
O,_,_,O,
_,O,O,_,
_,_,_,O
};
const bool r[nombreLeds]={
O,O,O,_,
O,_,_,O,
O,_,_,O,
O,O,O,_,
O,_,_,O
};
const bool s[nombreLeds]={
_,O,O,O,
O,_,_,_,
_,O,O,_,
_,_,_,O,
O,O,O,_
};
const bool t[nombreLeds]={
O,_,_,_,
O,O,O,_,
O,_,_,_,
O,_,_,O,
_,O,O,_
};
const bool u[nombreLeds]={
O,_,_,O,
O,_,_,O,
O,_,_,O,
O,_,_,O,
_,O,O,_
};
const bool v[nombreLeds]={
O,_,_,O,
O,_,_,O,
O,_,_,O,
_,O,_,O,
_,_,O,_
};
const bool w[nombreLeds]={
O,_,_,O,
O,_,_,O,
O,_,_,O,
O,O,O,O,
_,O,O,_
};
const bool x[nombreLeds]={
O,_,_,O,
O,O,_,O,
_,O,O,_,
O,_,_,O,
O,_,_,O
};
const bool y[nombreLeds]={
O,_,_,O,
O,_,_,O,
_,O,O,O,
_,_,_,O,
_,O,O,_
};
const bool z[nombreLeds]={
O,O,O,O,
_,_,_,O,
_,O,O,_,
O,_,_,_,
O,O,O,O
};

const bool esp[nombreLeds]={
_,_,_,_,
_,_,_,_,
_,_,_,_,
_,_,_,_,
_,_,_,_
};

//
//void char2fig(bool res[], char l) {
//  switch (l) {
//    case 'a':
//      res = a;
//    break;
//     case 'b':
//      res = b;
//    break;
//    case 'c':
//      res = c;
//    break;
//    case 'd':
//      res = d;
//    break;
//    case 'e':
//      res = e;
//    break;
//    case 'f':
//      res = f;
//    break;
//    case 'g':
//      res = g;
//    break;
//    case 'h':
//      res = h;
//    break;
//    case 'i':
//      res = i;
//    break;
//    case 'j':
//      res = j;
//    break;
//    case 'k':
//      res = k;
//    break;
//    case 'l':
//      res = l;
//    break;
//    case 'm':
//      res = m;
//    break;
//    case 'n':
//      res = n;
//    break;
//    case 'o':
//      res = o;
//    break;
//    case 'p':
//      res = p;
//    break;
//    case 'q':
//      res = q;
//    break;
//    case 'r':
//      res = r;
//    break;
//    case 's':
//      res = s;
//    break;
//    case 't':
//      res = t;
//    break;
//    case 'u':
//      res = u;
//    break;
//    case 'v':
//      res = v;
//    break;
//    case 'w':
//      res = w;
//    break;
//    case 'x':
//      res = x;
//    break;
//    case 'y':
//      res = y;
//    break;
//    case 'z':
//      res = z;
//    break;
//    case ' ':
//      res = esp;
//    break;  
//    default:
//      res = esp;
//    break;
//  }
//}
