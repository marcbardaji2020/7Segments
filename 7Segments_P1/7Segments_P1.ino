/**********************************************************************************
**                                                                               **
**                               7 Segments P1                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int Temps = 800;
int A = 5;
int B = 6;
int C = 7;
int D = 8;
int E = 9;
int F = 10;
int G = 11;
int P = 13;

//********** Setup ****************************************************************
void setup() 
{
    pinMode (A, OUTPUT);
    pinMode (B, OUTPUT);
    pinMode (C, OUTPUT);
    pinMode (D, OUTPUT);
    pinMode (E, OUTPUT);
    pinMode (F, OUTPUT);
    pinMode (G, OUTPUT);
    pinMode (P, OUTPUT);
}

//********** Loop *****************************************************************
void loop() 
{
  digitalWrite (A, 1);
  digitalWrite (B, 1);
  digitalWrite (C, 1);
  digitalWrite (D, 1);
  digitalWrite (E, 1);
  digitalWrite (F, 1);
  digitalWrite (G, 0);
  digitalWrite (P, 0);
  delay (Temps);
  digitalWrite (A, 0);
  digitalWrite (B, 1);
  digitalWrite (C, 1);
  digitalWrite (D, 0);
  digitalWrite (E, 0);
  digitalWrite (F, 0);
  digitalWrite (G, 0);
  digitalWrite (P, 0);
  delay (Temps);
  digitalWrite (A, 1);
  digitalWrite (B, 1);
  digitalWrite (C, 0);
  digitalWrite (D, 1);
  digitalWrite (E, 1);
  digitalWrite (F, 0);
  digitalWrite (G, 1);
  digitalWrite (P, 0);
  delay (Temps);
  digitalWrite (A, 1);
  digitalWrite (B, 1);
  digitalWrite (C, 1);
  digitalWrite (D, 1);
  digitalWrite (E, 0);
  digitalWrite (F, 0);
  digitalWrite (G, 1);
  digitalWrite (P, 0);
  delay (Temps);
  digitalWrite (A, 0);
  digitalWrite (B, 1);
  digitalWrite (C, 1);
  digitalWrite (D, 0);
  digitalWrite (E, 0);
  digitalWrite (F, 1);
  digitalWrite (G, 1);
  digitalWrite (P, 0);
  delay (Temps);
  digitalWrite (A, 1);
  digitalWrite (B, 0);
  digitalWrite (C, 1);
  digitalWrite (D, 1);
  digitalWrite (E, 0);
  digitalWrite (F, 1);
  digitalWrite (G, 1);
  digitalWrite (P, 0);
  delay (Temps);
  digitalWrite (A, 0);
  digitalWrite (B, 0);
  digitalWrite (C, 1);
  digitalWrite (D, 1);
  digitalWrite (E, 1);
  digitalWrite (F, 1);
  digitalWrite (G, 1);
  digitalWrite (P, 0);
  delay (Temps);
  digitalWrite (A, 1);
  digitalWrite (B, 1);
  digitalWrite (C, 1);
  digitalWrite (D, 0);
  digitalWrite (E, 0);
  digitalWrite (F, 0);
  digitalWrite (G, 0);
  digitalWrite (P, 0);
  delay (Temps);
  digitalWrite (A, 1);
  digitalWrite (B, 1);
  digitalWrite (C, 1);
  digitalWrite (D, 1);
  digitalWrite (E, 1);
  digitalWrite (F, 1);
  digitalWrite (G, 1);
  digitalWrite (P, 0);
  delay (Temps);
  digitalWrite (A, 1);
  digitalWrite (B, 1);
  digitalWrite (C, 1);
  digitalWrite (D, 0);
  digitalWrite (E, 0);
  digitalWrite (F, 1);
  digitalWrite (G, 1);
  digitalWrite (P, 0);
  delay (Temps);
}

//********** Funcions *************************************************************
