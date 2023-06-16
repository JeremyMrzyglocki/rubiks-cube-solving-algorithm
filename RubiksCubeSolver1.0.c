#include <stdio.h>
// corners:
int wob = 1;
int wbr = 2;
int wrg = 3;
int wgo = 4;
int yob = 5;
int ybr = 6;
int yrg = 7;
int ygo = 8;
// edges:
int wb =  9;
int wr = 10;
int wg = 11;
int wo = 12;
int ob = 13;
int br = 14;
int rg = 15;
int go = 16;
int yb = 17;
int yr = 18;
int yg = 19;
int yo = 20;
// positions of a solved cube:
int posc1 = 1;
int posc2 = 2;
int posc3 = 3;
int posc4 = 4;
int posc5 = 5;
int posc6 = 6;
int posc7 = 7;
int posc8 = 8;

int pos1 =  9;
int pos2 = 10;
int pos3 = 11;
int pos4 = 12;
int pos5 = 13;
int pos6 = 14;
int pos7 = 15;
int pos8 = 16;
int pos9 = 17;
int pos10 = 18;
int pos11 = 19;
int pos12 = 20;

int rotc1 = 0;
int rotc2 = 0;
int rotc3 = 0;
int rotc4 = 0;
int rotc5 = 0;
int rotc6 = 0;
int rotc7 = 0;
int rotc8 = 0;

int rot1 = 0;
int rot2 = 0;
int rot3 = 0;
int rot4 = 0;
int rot5 = 0;
int rot6 = 0;
int rot7 = 0;
int rot8 = 0;
int rot9 = 0;
int rot10 = 0;
int rot11 = 0;
int rot12 = 0;

int BR_solved = 0;
int BL_solved = 0;
int FL_solved = 0;
int FR_solved = 0;

void nR(){
    int zwischen = posc6; //zwischen = between
    posc6 = posc2;
    posc2 = posc3;
    posc3 = posc7;
    posc7 = zwischen;

    int zwischen2 = pos2;
    pos2 = pos7;
    pos7 = pos10;
    pos10 = pos6;
    pos6 = zwischen2;

    int zwischen3 = rotc2;
    rotc2 = (rotc3 + 1) % 3;
    rotc3 = (rotc7 + 2) % 3;
    rotc7 = (rotc6 + 1) % 3;
    rotc6 = (zwischen3 + 2) % 3;
    int zwischen4 = rot2;
    rot2 = rot7;
    rot7 = rot10;
    rot10 = rot6;
    rot6 = zwischen4;
}
void nL(){
    int zwischen = posc1;
    posc1 = posc5;
    posc5 = posc8;
    posc8 = posc4;
    posc4 = zwischen;

    int zwischen2 = pos4;
    pos4 = pos5;
    pos5 = pos12;
    pos12 = pos8;
    pos8 = zwischen2;

    int zwischen3 = rotc1;
    rotc1 = (rotc5 + 2) % 3;
    rotc5 = (rotc8 + 1) % 3;
    rotc8 = (rotc4 + 2) % 3;
    rotc4 = (zwischen3 + 1) % 3;
    int zwischen4 = rot4;
    rot4 = rot5;
    rot5 = rot12;
    rot12 = rot8;
    rot8 = zwischen4;
}
void nU(){
    int zwischen = posc1;
    posc1 = posc4;
    posc4 = posc3;
    posc3 = posc2;
    posc2 = zwischen;

    int zwischen2 = pos1;
    pos1 = pos4;
    pos4 = pos3;
    pos3 = pos2;
    pos2 = zwischen2;

    int zwischen3 = rotc1;
    rotc1 = rotc4;
    rotc4 = rotc3;
    rotc3 = rotc2;
    rotc2 = zwischen3;
    int zwischen4 = rot1;
    rot1 = rot4;
    rot4 = rot3;
    rot3 = rot2;
    rot2 = zwischen4;
}
void nD(){
    int zwischen = posc5;
    posc5 = posc6;
    posc6 = posc7;
    posc7 = posc8;
    posc8 = zwischen;

    int zwischen2 = pos9;
    pos9 = pos10;
    pos10 = pos11;
    pos11 = pos12;
    pos12 = zwischen2;

    int zwischen3 = rotc5;
    rotc5 = rotc6;
    rotc6 = rotc7;
    rotc7 = rotc8;
    rotc8 = zwischen3;

    int zwischen4 = rot9;
    rot9 = rot10;
    rot10 = rot11;
    rot11 = rot12;
    rot12 = zwischen4;
}
void nF(){
    int zwischen = posc4;
    posc4 = posc8;
    posc8 = posc7;
    posc7 = posc3;
    posc3 = zwischen;

    int zwischen2 = pos3;
    pos3 = pos8;
    pos8 = pos11;
    pos11 = pos7;
    pos7 = zwischen2;

    int zwischen3 = rotc3;
    rotc3 = (rotc4 + 1) % 3;
    rotc4 = (rotc8 + 2) % 3;
    rotc8 = (rotc7 + 1) % 3;
    rotc7 = (zwischen3 + 2) % 3;

    int zwischen4 = rot3;
    rot3 = (rot8 + 1) % 2;
    rot8 = (rot11 + 1) % 2;
    rot11 = (rot7 + 1) % 2;
    rot7 = (zwischen4 + 1) % 2;
}
void nB(){
    int zwischen = posc1;
    posc1 = posc2;
    posc2 = posc6;
    posc6 = posc5;
    posc5 = zwischen;

    int zwischen2 = pos1;
    pos1 = pos6;
    pos6 = pos9;
    pos9 = pos5;
    pos5 = zwischen2;

    int zwischen3 = rotc1;
    rotc1 = (rotc2 + 1) % 3;
    rotc2 = (rotc6 + 2) % 3;
    rotc6 = (rotc5 + 1) % 3;
    rotc5 = (zwischen3 + 2) % 3;

    int zwischen4 = rot1;
    rot1 = (rot6 + 1) % 2;
    rot6 = (rot9 + 1) % 2;
    rot9 = (rot5 + 1) % 2;
    rot5 = (zwischen4 + 1) % 2;
}
void R(){nR(); printf("R ");}
void L(){nL(); printf("L ");}
void U(){nU(); printf("U ");}
void F(){nF(); printf("F ");}
void D(){nD(); printf("D ");}
void B(){nB(); printf("B ");}



void nRI(){ nR(); nR(); nR();}
void nLI(){ nL(); nL(); nL();}
void nUI(){ nU(); nU(); nU();}
void nDI(){ nD(); nD(); nD();}
void nFI(){ nF(); nF(); nF();}
void nBI(){ nB(); nB(); nB();}
void RI(){nRI(); printf("R' ");}
void LI(){nLI(); printf("L' ");}
void UI(){nUI(); printf("U' ");}
void DI(){nDI(); printf("D' ");}
void FI(){nFI(); printf("F' ");}
void BI(){nBI(); printf("B' ");}

void R2(){ nR(); nR(); printf("R2 ");}
void L2(){ nL(); nL(); printf("L2 ");}
void U2(){ nU(); nU(); printf("U2 ");}
void D2(){ nD(); nD(); printf("D2 ");}
void B2(){ nB(); nB(); printf("B2 ");}
void F2(){ nF(); nF(); printf("F2 ");}

void S(){ nR(); nU(); nRI(); nUI(); printf("(R U R' U') ");}

void TPERM(){ nR(); nU(); nRI(); nUI(); nRI();nF();nR();nR();nUI();nRI();nUI(); nR();nU();nRI();nFI(); printf("T-Perm ");}
void YPERM(){ nF(); nR(); nUI(); nRI(); nUI();nR();nU();nRI();nFI();nR();nU(); nRI();nUI();nRI();nF(); R(); FI(); printf("Y-Perm ");}
void UAPERM(){ nR(); nUI(); nR(); nU(); nR(); nU(); nR(); nUI(); nRI(); nUI(); nR(); nR(); printf("Ua-Perm ");}
void UBPERM(){ nR(); nR(); nU(); nR(); nU(); nRI();nUI(); nRI(); nUI(); nRI(); nU(); nRI(); printf("Ub-Perm ");}
void HPERM(){ nR(); nR(); nU(); nU(); nR(); nU(); nU(); nR(); nR(); nU(); nU(); nR(); nR(); nU(); nU(); nR(); nU(); nU(); nR(); nR(); printf("H-Perm ");}
void ZPERM(){ nRI(); nUI(); nR(); nUI(); nR(); nU(); nR(); nUI(); nRI(); nU(); nR(); nU(); nR(); nR(); nUI(); nRI(); nU(); nU(); printf("Z-Perm ");}




void P(){printf("\n");}

void anzeigen(){
//  printf("\nlisting the positions:\n");
  printf("\nEcken: ");
  printf("%i,%i,%i,%i,%i,%i,%i,%i\n", posc1, posc2, posc3, posc4, posc5, posc6, posc7, posc8);
  printf("Rotation: ");
  printf("%i,%i,%i,%i,%i,%i,%i,%i\n", rotc1, rotc2, rotc3, rotc4, rotc5, rotc6, rotc7, rotc8);
  printf("Kanten: ");
  printf("%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i\n", pos1, pos2, pos3, pos4, pos5, pos6, pos7,
  pos8, pos9, pos10, pos11, pos12);
  printf("Rotation: ");
  printf("%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i\n", rot1, rot2, rot3, rot4, rot5, rot6, rot7,
  rot8, rot9, rot10, rot11, rot12);
}
int rightpos(a){
  if (a == pos1)  {if (pos1 ==  9) {return 1;} else {return 0;}}
  if (a == pos2)  {if (pos2 == 10) {return 1;} else {return 0;}}
  if (a == pos3)  {if (pos3 == 11) {return 1;} else {return 0;}}
  if (a == pos4)  {if (pos4 == 12) return 1; else {return 0;}}
  if (a == pos7)  {if (pos7 == 15) return 1; else {return 0;}}
  if (a == pos5)  {if (pos5 == 13) return 1; else {return 0;}}
  if (a == pos8)  {if (pos8 == 16) return 1; else {return 0;}}
  if (a == pos6)  {if (pos6 == 14) return 1; else {return 0;}}
  if (a == pos10) {if (pos10 == 18) return 1; else {return 0;}}
  if (a == pos9)  {if (pos9 == 17) return 1; else {return 0;}}
  if (a == pos11) {if (pos11 == 19) return 1; else {return 0;}}
  if (a == pos12) {if (pos12 == 20) return 1; else {return 0;}}
  else return 0;
  
}
int rightrot(a){
  if (a == 0) {return 1;}
  else {return 0;}
}

void solve_yelorg(){
  //First Piece
  //Check if YellowOrange is solved already
//  if (rightpos(pos12) && rightrot(rot12)) printf("Pos12 solved already\n");
  if (pos9 == yo) {D(); P();}
  else if (pos10 == yo) {D2(); P();}
  else if (pos11 == yo) {DI(); P();}

  else if (pos1 == yo) {UI(); L2(); P();}
  else if (pos2 == yo) {U2(); L2(); P();}
  else if (pos3 == yo) {U(); L2(); P();}
  else if (pos4 == yo) {L2(); P();}

  else if (pos5 == yo) {LI(); P();}
  else if (pos6 == yo) {R(); D2(); P();}
  else if (pos7 == yo) {RI(); D2(); P();}
  else if (pos8 == yo) {L(); P();}

  if (rightrot(rot12) == 0) {
    D(); F(); L(); P();
  }
//  else printf("-----Pos12 is rotated correctly already\n");
}
void solve_yelgre(){
//  if (rightpos(pos11) && rightrot(rot11)) printf("-----Pos11 solved already\n");
  if (pos9 == yg) {LI(); D2(); L(); P();}
  else if (pos10 == yg) {LI(); DI(); L(); P();}

  else if (pos1 == yg) {U2(); F2(); P();}
  else if (pos2 == yg) {U(); F2(); P();}
  else if (pos3 == yg) {F2(); P();}
  else if (pos4 == yg) {UI(); F2(); P();}

  else if (pos5 == yg) {DI(); LI(); D(); P();}
  else if (pos6 == yg) {D(); R(); DI(); P();}
  else if (pos7 == yg) {D(); RI(); DI(); P();}
  else if (pos8 == yg) {DI(); L(); D(); P();}

  if (rightrot(rot11) == 0) {
    FI(); D(); RI(); DI(); P();
  }
//  else printf("-----Pos11 is rotated correctly already\n");
}
void solve_yelred(){
//  if (rightpos(pos10) && rightrot(rot10)) printf("-----Pos10 solved already\n");
  if (pos9 == yr) {B(); R(); P();}

  else if (pos1 == yr) {U(); R2(); P();}
  else if (pos2 == yr) {R2(); P();}
  else if (pos3 == yr) {UI(); R2(); P();}
  else if (pos4 == yr) {U2(); R2(); P();}

  else if (pos5 == yr) {B2(); R(); P();}
  else if (pos6 == yr) {R(); P();}
  else if (pos7 == yr) {RI(); P();}
  else if (pos8 == yr) {D2(); L(); D2(); P();}

  if (rightrot(rot10) == 0) {
    R(); DI(); F(); D(); P();
  }
//  else printf("-----Pos10 is rotated correctly already\n");
}
void solve_yelblu(){
//  if (rightpos(pos9) && rightrot(rot9)) printf("-----Pos9 solved already\n");

  if (pos1 == yb) {B2(); P();}
  else if (pos2 == yb) {UI(); B2(); P();}
  else if (pos3 == yb) {U2(); B2(); P();}
  else if (pos4 == yb) {U(); B2(); P();}

  else if (pos5 == yb) {D(); LI(); DI(); P();}
  else if (pos6 == yb) {DI(); R(); D(); P();}
  else if (pos7 == yb) {DI(); RI(); D(); P();}
  else if (pos8 == yb) {D(); L(); DI(); P();}

  if (rightrot(rot9) == 0) {
    DI(); RI(); D(); BI(); P();
  }
//  else printf("-----Pos9 is rotated correctly already\n");
}


void firstcornerinsert(){
  if (rotc3 == 1) {R(); U(); RI(); P();}
  else if (rotc3 == 0) {R(); U2(); RI(); UI(); R(); U(); RI(); P();}
  else if (rotc3 == 2) {U(); R(); UI(); RI(); P();}
}

// First Pair
void firstcorner()
{
  //Pre-AUF
  //Changed it so that the FR-slot (so not yrg) is ignored. This makes it easier for slot 3 and 4
  if(posc3 == yob || posc3 == ybr || posc3 == ygo);
  else if (posc4 == yob || posc4 == ybr || posc4 == ygo) {UI(); P();}
  else if (posc1 == yob || posc1 == ybr || posc1 == ygo) {U2(); P();}
  else if (posc2 == yob || posc2 == ybr || posc2 == ygo) {U(); P();}
  else {S(); P();}
  if(posc3 != yob && posc3 != ybr && posc3 != ygo) {RI(); U(); R(); U();}
  //Pre-AUD + solve

  if(posc3 == yob)
  {
    D2();
    P();
    firstcornerinsert();
    if (pos1 == ob);
    else if (pos2 == ob) {UI(); P();}
    else if (pos3 == ob) {U2(); P();}
    else if (pos4 == ob) {U(); P();}
    else if (pos5 == ob && rot5 == 1) {L(); U(); LI(); P();}
    else if (pos5 == ob && rot5 == 0);
    else if (pos6 == ob) {RI(); UI(); R(); P();}
    else if (pos8 == ob) {LI(); U(); L(); P();}
    else if (pos7 == ob) {D(); R(); UI(); RI(); DI(); P();}
    if (pos1 == ob && rot1 == 0){
      L(); UI(); LI(); P();
    }
    else if (pos1 == ob && rot1 == 1){
      UI(); BI(); U(); B(); P();
    }
    D2(); P();
    BL_solved = 1;
    printf("---BL_solved \n");
  }



 else if(posc3 == ybr)
  {
    DI(); P();
    firstcornerinsert();
    if (pos1 == br);
    else if (pos2 == br) {UI(); P();}
    else if (pos3 == br) {U2(); P();}
    else if (pos4 == br) {U(); P();}
    else if (pos6 == br && rot6 == 1) {RI(); UI(); R(); P();}
    else if (pos6 == br && rot6 == 0);
    else if (pos5 == br) {L(); U(); LI(); P();}
    else if (pos7 == br) {D(); R(); UI(); RI(); DI(); P();}
    else if (pos8 == br) {LI(); U(); L(); P();}
    if (pos1 == br && rot1 == 0){
      RI(); U(); R(); P();}
    else if (pos1 == br && rot1 == 1){
      UI(); B(); U(); BI(); P();}
    D(); P();
    BR_solved = 1;
    printf("---BR_solved \n");
  }


/* 
  else if(posc3 == yrg)
  {
    firstcornerinsert();
    if (pos1 == rg);
    else if (pos2 == rg) {UI(); printf("U' ");}
    else if (pos3 == rg) {U2(); printf("U2 \n");}
    else if (pos4 == rg) {U(); printf("U \n");}
    else if (pos7 == rg && rot7 == 1) {FI(); UI(); F(); UI(); printf("F' U' F U' \n");}
    else if (pos7 == rg && rot7 == 0);
    else if (pos5 == rg) {L(); U(); LI(); printf("L U L' \n");}
    else if (pos6 == rg) {RI(); UI(); R(); printf("R' U' R \n");}
    else if (pos8 == rg) {LI(); U(); L(); printf("L' U L \n");}
    if (pos1 == rg && rot1 == 0){
      D(); FI(); U2(); F(); DI(); printf("D F' U2 F D' \n");
    }
    else if (pos1 == rg && rot1 == 1){
      D(); R(); U(); RI(); DI(); printf("D R U R' D' \n");
    }
    FR_solved = 1;
    printf("---FR_solved \n");
  }
  */

  else if (posc3 == ygo)
  {
    D(); P();
    firstcornerinsert();
    if (pos1 == go);
    else if (pos2 == go) {UI(); P();}
    else if (pos3 == go) {U2(); P();}
    else if (pos4 == go) {U(); P();}
    else if (pos8 == go && rot8 == 1) {F(); U2(); FI(); P();}
    else if (pos8 == go && rot8 == 0);
    else if (pos5 == go) {L(); U(); LI(); P();}
    else if (pos6 == go) {RI(); UI(); R(); P();}
    else if (pos7 == go) {DI(); R(); UI(); RI(); D(); P();}
    if (pos1 == go && rot1 == 0){
      LI(); UI(); L(); P();
    }
    else if (pos1 == go && rot1 == 1){
      F(); U2(); FI(); P();
    }
    DI(); P();
    FL_solved = 1;
    printf("---FL_solved \n");
  }
}


// fhad int instead of void before
void secondcorner()
{
  //Pre-AUF
  if (posc3 == yob || posc3 == ybr || posc3 == ygo);
  else if (posc4 == yob || posc4 == ybr || posc4 == ygo) {UI(); P();}
  else if (posc1 == yob || posc1 == ybr || posc1 == ygo) {U2(); P();}
  else if (posc2 == yob || posc2 == ybr || posc2 == ygo) {U(); P();}
  else {S(); P();}
  if (posc3 != yob && posc3 != ybr && posc3 != ygo && BR_solved == 0) {RI(); U(); R(); U(); P();}
  else if (posc3 != yob && posc3 != ybr && posc3 != ygo && FL_solved == 0) {LI(); UI(); L(); P();}
  //Pre-AUD + solve

  if(posc3 == yob)
  {
    D2();
    P();
    firstcornerinsert();
    if (pos1 == ob);
    else if (pos2 == ob) {UI(); P();}
    else if (pos3 == ob) {U2(); P();}
    else if (pos4 == ob) {U(); P();}
    else if (pos5 == ob && rot5 == 1) {L(); U(); LI(); P();}
    else if (pos5 == ob && rot5 == 0);
    else if (pos6 == ob) {RI(); UI(); R(); P();}

    else if (pos8 == ob && BR_solved == 0) {LI(); U(); L(); P();}
    else if (pos8 == ob && BR_solved == 1) {D2(); LI(); U(); L(); D2(); P();}

    else if (pos7 == ob && FL_solved == 1) {D(); R(); UI(); RI(); DI(); P();}
    else if (pos7 == ob && BR_solved == 1) {DI(); R(); UI(); RI(); D(); P();}

    if (pos1 == ob && rot1 == 0){
      L(); UI(); LI(); P();;
    }
    else if (pos1 == ob && rot1 == 1){
      UI(); BI(); U(); B(); P();;
    }
    D2(); P();
    BL_solved = 1;
    printf("---BL_solved \n");
  }



 else if(posc3 == ybr)
  {
    DI(); P();
    firstcornerinsert();
    if (pos1 == br);
    else if (pos2 == br) {UI(); P();}
    else if (pos3 == br) {U2(); P();}
    else if (pos4 == br) {U(); P();}
    else if (pos6 == br && rot6 == 1) {RI(); UI(); R(); P();}
    else if (pos6 == br && rot6 == 0);
    else if (pos5 == br) {L(); U(); LI(); P();}
    else if (pos7 == br) {DI(); R(); UI(); RI(); D(); P();}

    else if (pos8 == br) {LI(); U(); L(); P();}
    if (pos1 == br && rot1 == 0 && BL_solved == 0){
      RI(); U(); R(); P();}

    else if (pos1 == br && rot1 == 0 && BL_solved == 1){
      D2(); RI(); U(); R(); D2(); P();}

    else if (pos1 == br && rot1 == 1 && BL_solved == 0){
      UI(); B(); U(); BI(); P();}

    else if (pos1 == br && rot1 == 1 && BL_solved == 1){
      D2(); UI(); B(); U(); BI(); D2(); P();}



    D(); P();
    BR_solved = 1;
    printf("---BR_solved \n");

  }


/*
  else if(posc3 == yrg)
  {
    firstcornerinsert();
    if (pos1 == rg);
    else if (pos2 == rg) {UI(); printf("U' ");}
    else if (pos3 == rg) {U2(); printf("U2 \n");}
    else if (pos4 == rg) {U(); printf("U \n");}
    else if (pos7 == rg && rot7 == 1) {FI(); UI(); F(); UI(); printf("F' U' F U' \n");}
    else if (pos7 == rg && rot7 == 0);
    else if (pos5 == rg) {L(); U(); LI(); printf("L U L' \n");}
    else if (pos6 == rg) {RI(); UI(); R(); printf("R' U' R \n");}
    else if (pos8 == rg) {LI(); U(); L(); printf("L' U L \n");}
    //Anders:
    if (pos1 == rg && rot1 == 0 && FL_solved != 0){
      D(); FI(); U2(); F(); DI(); printf("D F' U2 F D' \n");
    }
    else if (pos1 == rg && rot1 == 0 && BR_solved != 0){
      DI(); FI(); U2(); F(); D(); printf("D' F' U2 F D \n");
    }
    else if (pos1 == rg && rot1 == 1 && FL_solved != 0){
      D(); R(); U(); RI(); DI(); printf("D R U R' D' \n");
    }
    else if (pos1 == rg && rot1 == 1 && BR_solved != 0){
      DI(); R(); U(); RI(); D(); printf("D' R U R' D \n");
    }
    FR_solved = 1;
    printf("---FR_solved \n");
  }*/

  else if (posc3 == ygo)
  {
    D();
    firstcornerinsert();
    if (pos1 == go);
    else if (pos2 == go) {UI(); P();}
    else if (pos3 == go) {U2(); P();}
    else if (pos4 == go) {U(); P();}
    else if (pos8 == go && rot8 == 1) {F(); U2(); FI(); P();}
    else if (pos8 == go && rot8 == 0);
    else if (pos5 == go) {L(); U(); LI(); P();}
    else if (pos6 == go) {RI(); UI(); R(); P();}
    else if (pos7 == go) {DI(); R(); UI(); RI(); D(); P();}

    if (pos1 == go && rot1 == 0 && BR_solved == 1){
      LI(); UI(); L(); P(); DI(); P();
    }
    else if (pos1 == go && rot1 == 1 && BR_solved == 1){
      F(); U2(); FI(); P(); DI(); P();
    }
    if (pos1 == go && rot1 == 0 && BL_solved == 1){
      D(); LI(); UI(); L(); D2(); P();
    }
    else if (pos1 == go && rot1 == 1 && BL_solved == 1){
      D(); F(); U2(); FI(); D2(); P();
    }


    
    FL_solved = 1;
    printf("---FL_solved \n");
  }
  /*return BL_solved;
  return BR_solved;
  return FR_solved;
  return FL_solved;*/
}

/*
thirdcorner(){
  if (BL_solved = 1 && BR_solved = 1 && FR_solved = 0 && FL_solved = 0)
    if (pos1 == wgo || pos1 == wrg || pos2 == wgo || pos2 == wrg || pos3 == wgo || pos3 == wrg || pos4 == wgo || pos4 == wrg)
} */

void thirdcorner()
{
  if(BL_solved == 0){
    if (posc1 == yob) {U2(); P();}
    else if (posc2 == yob) {U(); P();}
    else if (posc3 == yob);
    else if (posc4 == yob) {UI(); P();}
    else if (posc7 == yob) {S(); P();}
    else if (posc5 == yob) {L(); U2(); LI(); P();}
    D2(); P();
    firstcornerinsert();
    if (pos1 == ob);
    else if (pos2 == ob) {UI(); P();}
    else if (pos3 == ob) {U2(); P();}
    else if (pos4 == ob) {U(); P();}

    if(pos7 == ob){D2(); R(); UI(); RI(); D2(); P();} //if edge is in slot with corner preAUF

    if(pos1 == ob && rot1 == 0){L(); UI(); LI(); P();}
    if(pos1 == ob && rot1 == 1){UI(); BI(); U(); B(); P();}
    D2(); P();
    printf("---BL_solved \n");
  }

  else if(BR_solved == 0){
    if (posc1 == ybr) {U2(); P();}
    else if (posc2 == ybr) {U(); P();}
    else if (posc3 == ybr);
    else if (posc4 == ybr) {UI(); P();}
    else if (posc7 == ybr) {S(); P();}
    else if (posc6 == ybr) {B(); U(); BI(); P();}
    DI(); P();
    firstcornerinsert(); 
    D();
    if (pos1 == br);
    else if (pos2 == br) {UI(); P();}
    else if (pos3 == br) {U2(); P();}
    else if (pos4 == br) {U(); P();}
    
    if(pos7 == br) {R(); UI(); RI(); P();} //if edge is in slot with corner preAUF
    D();
    if(pos1 == br && rot1 == 0){RI(); U(); R(); P();}
    if(pos1 == br && rot1 == 1){UI(); B(); U(); BI(); P();}
    DI(); P();
    printf("---BR_solved \n");
  }

  else if(FL_solved == 0){
    if (posc1 == ygo) {U2(); P();}
    else if (posc2 == ygo) {U(); P();}
    else if (posc3 == ygo);
    else if (posc4 == ygo) {UI(); P();}
    else if (posc7 == ygo) {S(); P();}
    else if (posc8 == ygo) {LI(); UI(); L(); P();}

    D(); P();
    firstcornerinsert();
    if (pos1 == go);
    else if (pos2 == go) {UI(); P();}
    else if (pos3 == go) {U2(); P();}
    else if (pos4 == go) {U(); P();}

    if(pos7 == go){DI(); R(); UI(); RI(); D(); P();} //if edge is in slot with corner preAUF

    if(pos1 == go && rot1 == 0){D2(); LI(); UI(); L(); D(); P();}
    if(pos1 == go && rot1 == 1){D2(); F(); U2(); FI(); D(); P();}
    
    printf("---FL_solved \n");
  }

}



  void forthcorner(){
    if(posc7 == yrg){S(); P();} //takes corner out of slot
    if(pos7 == rg) {R(); UI(); RI(); P();} //Takes edge out without inserting corner

    if(posc1 == yrg){U2(); P();}
    if(posc2 == yrg){U(); P();}
    if(posc4 == yrg){UI(); P();}


    //Sticker yellow on tom
    if(rotc3 == 0){
        if(pos1 == rg && rot1 == 0) {U(); R(); U2(); RI(); U(); R(); UI(); RI(); P();}
        else if(pos1 == rg && rot1 == 1) {U2(); FI(); UI(); F(); UI(); FI(); U(); F(); P();}

        else if(pos2 == rg && rot2 == 0) {R(); U2(); RI(); UI(); R(); U(); RI(); P();}
        else if(pos2 == rg && rot2 == 1) {F(); U(); R(); UI(); RI(); FI(); R(); UI(); RI(); P();}

        else if(pos3 == rg && rot3 == 0) {U2(); S(); R(); UI(); RI(); U2(); R(); UI(); RI(); P();}
        else if(pos3 == rg && rot3 == 1) {FI(); U2(); F(); U(); FI(); UI(); F(); P();}

        else if(pos4 == rg && rot4 == 0) {R(); UI(); RI(); U2(); R(); U(); RI(); P();}
        else if(pos4 == rg && rot4 == 1) {UI(); FI(); U2(); F(); UI(); FI(); U(); F(); P();}
    }
    else if(rotc3 == 1){
        if(pos1 == rg && rot1 == 0) {R(); U(); RI(); P();}
        else if(pos1 == rg && rot1 == 1) {U(); FI(); U2(); F(); U2(); FI(); U(); F(); P();}

        else if(pos2 == rg && rot2 == 0) {UI(); R(); UI(); RI(); U(); R(); U(); RI(); P();}
        else if(pos2 == rg && rot2 == 1) {R(); UI(); RI(); U2(); FI(); UI(); F(); P();}

        else if(pos3 == rg && rot3 == 0) {R(); UI(); RI(); U(); R(); UI(); RI(); U2(); R(); UI(); RI(); P();}
        else if(pos3 == rg && rot3 == 1) {F(); RI(); FI(); R(); P();}

        else if(pos4 == rg && rot4 == 0) {UI(); R(); U(); RI(); U(); R(); U(); RI(); P();}
        else if(pos4 == rg && rot4 == 1) {U(); FI(); UI(); F(); U2(); FI(); U(); F(); P();}
    }
    else if(rotc3 == 2){
        if(pos1 == rg && rot1 == 0) {UI(); R(); U(); RI(); U2(); R(); UI(); RI(); P();}
        else if(pos1 == rg && rot1 == 1) {UI(); R(); UI(); RI(); U(); FI(); UI(); F(); P();}

        else if(pos2 == rg && rot2 == 0) {U(); R(); UI(); RI(); P();}
        else if(pos2 == rg && rot2 == 1) {UI(); R(); U2(); RI(); U(); FI(); U(); F(); P();}

        else if(pos3 == rg && rot3 == 0) {FI(); U(); F(); U2(); R(); U(); RI(); P();}
        else if(pos3 == rg && rot3 == 1) {U(); FI(); U(); F(); UI(); FI(); UI(); F(); P();}

        else if(pos4 == rg && rot4 == 0) {UI(); R(); U2(); RI(); U2(); R(); UI(); RI(); P();}
        else if(pos4 == rg && rot4 == 1) {FI(); UI(); F(); P();}
    }
    
    printf("---FR_solved \n");
  }

  void TwoLookOLL(){
    //Yellow Cross
         if(rot1 == 0 && rot2 == 0 && rot3 == 0 && rot4 == 0);
    else if(rot1 == 1 && rot2 == 1 && rot3 == 1 && rot4 == 1) {F(); S(); FI(); U2(); F(); U(); R(); UI(); RI(); FI(); P();}
    else if(rot1 == 0 && rot2 == 1 && rot3 == 0 && rot4 == 1) {U(); F(); S(); FI(); P();}
    else if(rot1 == 1 && rot2 == 0 && rot3 == 1 && rot4 == 0) {F(); S(); FI(); P();}
    else if(rot1 == 1 && rot2 == 1 && rot3 == 0 && rot4 == 0) {U(); F(); U(); R(); UI(); RI(); FI(); P();}
    else if(rot1 == 0 && rot2 == 1 && rot3 == 1 && rot4 == 0) {F(); U(); R(); UI(); RI(); FI(); P();}
    else if(rot1 == 0 && rot2 == 0 && rot3 == 1 && rot4 == 1) {UI(); F(); U(); R(); UI(); RI(); FI(); P();}
    else if(rot1 == 1 && rot2 == 0 && rot3 == 0 && rot4 == 1) {U2(); F(); U(); R(); UI(); RI(); FI(); P();}
    
    //Corners
    int i = 0;
    while ((rotc1 == 1 || rotc2 == 1 || rotc3 == 1 || rotc4 == 1) && (i < 4))
    {
    //Sunes
    if (rotc1 == 0 && rotc2 == 1 && rotc3 == 1 && rotc4 == 1){RI(); UI(); R(); UI(); RI(); U2(); R(); P();}
    else if (rotc1 == 2 && rotc2 == 2 && rotc3 == 2 && rotc4 == 0){R(); U(); RI(); U(); R(); U2(); RI(); P();}
    //Four Corner Cases
    else if (rotc1 == 1 && rotc2 == 2 && rotc3 == 1 && rotc4 == 2){R(); U(); RI(); U(); R(); UI(); RI(); U(); R(); U2(); RI(); P();}
    else if (rotc1 == 1 && rotc2 == 1 && rotc3 == 2 && rotc4 == 2){R(); U2(); R2(); UI(); R2(); UI(); R2(); U2(); R(); P();}
    //Two Corner Cases
    else if (rotc1 == 2 && rotc2 == 1 && rotc3 == 0 && rotc4 == 0){R2(); DI(); R(); U2(); RI(); D(); R(); U2(); R(); P();}
    else if (rotc1 == 2 && rotc2 == 0 && rotc3 == 0 && rotc4 == 1){L(); F(); RI(); FI(); LI(); F(); R(); FI(); P();}
    else if (rotc1 == 1 && rotc2 == 0 && rotc3 == 2 && rotc4 == 0){RI(); F(); R(); BI(); RI(); FI(); R(); B(); P();}
    else U();
    i++;
    }
    printf("---OLL solved\n");
  }

  void TwoLookPLL(){

    int j = 0;
    while ((posc1 != 1 || posc2 != 2 || posc3 != 3 || posc4 != 4) && (j < 4))
    {
    //solved
    if (posc1 == 1 && posc2 == 2 && posc3 == 3 && posc4 == 4);
    //Two corners flipped
    else if (posc1 == 2 && posc2 == 1 && posc3 == 3 && posc4 == 4) {U(); TPERM(); UI(); P();}
    else if (posc1 == 1 && posc2 == 3 && posc3 == 2 && posc4 == 4) {TPERM(); P();}
    else if (posc1 == 1 && posc2 == 2 && posc3 == 4 && posc4 == 3) {UI(); TPERM(); U(); P();}
    else if (posc1 == 4 && posc2 == 2 && posc3 == 3 && posc4 == 1) {U2(); TPERM(); U2(); P();}
    //Diagonal corners flipped
    else if (posc1 == 1 && posc2 == 4 && posc3 == 3 && posc4 == 2) {U(); YPERM(); UI(); P();}
    else if (posc1 == 3 && posc2 == 2 && posc3 == 1 && posc4 == 4) {YPERM(); P();}
    else U();
    j++;
    }

    //Edges solved
    if (pos1 == 9 && pos2 == 10 && pos3 == 11 && pos4 == 12);
    //Threecycles
    else if (pos1 == 10 && pos2 == 11 && pos3 == 9 && pos4 == 12) {U(); UBPERM(); UI(); P();}
    else if (pos1 == 11 && pos2 == 9 && pos3 == 10 && pos4 == 12) {U(); UAPERM(); UI(); P();}

    else if (pos1 == 9 && pos2 == 12 && pos3 == 10 && pos4 == 11) {UAPERM(); P();}
    else if (pos1 == 9 && pos2 == 11 && pos3 == 12 && pos4 == 10) {UBPERM(); P();}

    else if (pos1 == 12 && pos2 == 10 && pos3 == 9 && pos4 == 11) {UI(); UAPERM(); U(); P();}
    else if (pos1 == 11 && pos2 == 10 && pos3 == 12 && pos4 == 9) {UI(); UBPERM(); U(); P();}

    else if (pos1 == 12 && pos2 == 9 && pos3 == 11 && pos4 == 10) {U2(); UAPERM(); U2(); P();}
    else if (pos1 == 10 && pos2 == 12 && pos3 == 11 && pos4 == 9) {U2(); UBPERM(); U2(); P();}
    //Four EPLL
    else if (pos1 == 11 && pos2 == 12 && pos3 == 9 && pos4 == 10) {HPERM(); P();}
    else if (pos1 == 12 && pos2 == 11 && pos3 == 10 && pos4 == 9) {U(); ZPERM(); UI(); P();}
    else if (pos1 == 10 && pos2 == 9 && pos3 == 12 && pos4 == 11) {UI(); ZPERM(); U(); P();}

    printf("---PLL solved\n");
  }


void showslots(){
  printf("\nBL_solved = %i\n", BL_solved);
  printf("BR_solved = %i\n", BR_solved);
  printf("FL_solved = %i\n", FL_solved);
  printf("FR_solved = %i\n\n", FR_solved);
}



int main(){

  // Here is a number of scrambles that you can try out: 
  B(); UI(); R2(); DI(); R2(); U2(); D2(); U(); L2(); RI(); F(); U2(); B(); L2();
  //B(); F2(); R2(); DI(); R2(); D(); L2(); D(); B2(); L(); B2(); F(); R(); U2(); F2(); D2(); F(); D2();
  //U(); F(); RI(); U2(); R(); B2(); RI(); F2(); LI(); D(); B(); U2(); B2(); R(); F(); L2(); RI(); D(); U2(); L(); B2();  
  //U(); R2(); U2(); R(); B2(); RI(); F2(); L2(); D(); B(); U2(); B(); RI(); F(); L2(); R(); D(); U2(); L(); B2(); 
  //U2(); B(); RI(); F(); L2(); R(); D(); U2(); L(); B2(); DI(); U2(); R(); B2(); U(); D2();
  //U2(); F2(); RI(); F(); L2(); R(); D(); R2(); L(); B2(); RI(); U2(); R(); B2(); D2(); U(); D2(); 
  //RI(); F2(); LI(); D(); B(); U2(); R(); B2(); R(); F2(); R2(); DI(); R2(); D(); L2(); D(); 
  //D(); B(); U2(); R(); B2(); R(); F2(); R2(); F(); DI(); R2(); L2(); D(); U2(); L(); B2(); DI(); U2(); R(); B2(); 
  //B2(); DI(); U2(); R(); B2(); U(); D2(); B(); UI(); R2(); DI(); R2(); U2(); D2(); R();

  printf("\n\n--------------------------\n");
  printf("\n\n--------------------------\n");
  printf("\n\nSOLUTION:\n");
  printf("\nScrambled Cube:\n");
  anzeigen();
  printf("\n---Solve the Cube with\n");
  solve_yelorg();
  solve_yelgre();
  solve_yelred();
  solve_yelblu();
  printf("---Cross solved\n");
  firstcorner();
  secondcorner();
  thirdcorner();
  forthcorner();
  
  TwoLookOLL();
  TwoLookPLL();
  anzeigen();
  return 0;
}
