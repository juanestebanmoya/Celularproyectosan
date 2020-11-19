int boton1;
int boton2;
int boton3;
int boton4;
int boton5;
//


void setup() {
  Serial2.begin(115200);
  Serial.begin(115200);
  pinMode(PA0, INPUT);
  pinMode(PA1, INPUT);
  pinMode(PA5, INPUT);
  pinMode(PA6, INPUT);
  pinMode(PA4, INPUT);

  ///////
  if ( Serial2.available ()) {
    Serial.write(Serial2.read());
  }
  if (Serial.available()) {
    Serial2.write(Serial.read());
  }


  //
  pinMode(PA7, OUTPUT); //D7
  pinMode(PB0, OUTPUT); //D6
  pinMode(PB1, OUTPUT); // D5
  pinMode(PB10, OUTPUT); // D4
  pinMode(PB11, OUTPUT); // rs
  pinMode(PB12, OUTPUT); // en
  pinMode(PB13, OUTPUT); //D3
  pinMode(PB14, OUTPUT); // D2
  pinMode(PB15, OUTPUT); // D1
  pinMode(PA8, OUTPUT); // D0
  inicializar();
  delay(1000);


}

void loop() {
  boton1 = digitalRead(PA0);
  boton2 = digitalRead(PA1);
  boton3 = digitalRead(PA4);
  boton4 = digitalRead(PA5);
  boton5 = digitalRead(PA6);


  if (boton1 == HIGH) {
    Serial.println("BOTON1");
    llamando();
    Serial2.println("ATD3006857121;");

    delay(3000);
    inicializar();
  }
  if (boton2 == HIGH) {
    Serial.println("BOTON2 ");
    Serial2.println("ATD3054788569;");

    llamando();

    delay(250);
    inicializar();
  }
  if (boton3 == HIGH) {
    Serial.println("BOTON 3");
    Serial2.println("ATD3197541840;");
    llamando();
    delay(250);
    inicializar();
  }
  if (boton4 == HIGH) {
    Serial.println("BOTON 4");
    Serial2.println("ATA");
    contestando();
    delay(250);
    inicializar();
  }
  if (boton5 == HIGH) {
    Serial.println("BOTON 5");
    Serial2.println("ATH");
    colgando();


    delay(250);
    inicializar();
  }
}
void inicializar() {
  iniciar();
  ///////////Letra B
  letraB();
  // VOCAL I
  vocalI();
  // VOCAL E
  vocalE();
  /// LETRA N
  letraN();
  // LETRA V
  letraV();
  /// VOCAL E
  vocalE();
  // LETRA N
  letraN();
  // VOCAL I
  vocalI();

  // LETRA D
  letraD();
  // VOCAL 0
  vocalO();
  // ESPACIO
  espacio();
  /// CARITA
  carita();

}

void llamando() {
  iniciar();
  ////////////letra L
  letraL();
  /// LETRA L
  letraL();
  // VOCAL A
  vocalA();

  // LETRA M
  letraM();
  ando();
  // ESPACIO
  espacio();
  /// CARITA

  carita();

}
void colgando() {

  iniciar();
  // LETRA
  letraC();
  //  VOCAL 0
  vocalO();
  // LETRA L
  letraL();
  // LETRA G
  letraG();
  ando();
  // ESPACIO
  espacio();
  digitalWrite(PB12, LOW);
  /// CARITA

  carita();

}
void contestando() {
  iniciar();
  // LETRA C
  letraC();
  //  VOCAL 0
  vocalO();
  // LETRA N
  letraN();
  // LETRA T
  letraT();
  // VOCAL E
  vocalE();
  // LETRA S
  letraS();

  // LETRA T
  letraT();
  ando();
  // ESPACIO///
  espacio();
  // CARITA
  carita();

}
void ando() {

  // VOCAL A
  vocalA();
  // LETRA N
  letraN();
  // LETRA D
  letraD();
  // VOCAL O
  vocalO();
}
void iniciar() {

  digitalWrite(PB11, LOW);
  digitalWrite(PB1, HIGH);
  digitalWrite(PB10, HIGH);
  digitalWrite(PB13, HIGH);
  digitalWrite(PA7, LOW);
  digitalWrite(PB0, LOW);
  digitalWrite(PB14, LOW);
  digitalWrite(PB15, LOW);
  digitalWrite(PA8, LOW);
  digitalWrite(PB12, HIGH);
  delay(100);
  digitalWrite(PB12, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PB10, LOW);
  digitalWrite(PB13, LOW);
  /////////////////////////////////////////
  digitalWrite(PB14, HIGH);
  digitalWrite(PB13, HIGH);
  digitalWrite(PB11, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PB10, LOW);
  digitalWrite(PA7, LOW);
  digitalWrite(PB0, LOW);
  digitalWrite(PB15, LOW);
  digitalWrite(PA8, LOW);
  digitalWrite(PB12, HIGH);
  delay(100);
  digitalWrite(PB12, LOW);
  digitalWrite(PB14, LOW);
  digitalWrite(PB13, LOW);
  //////////////////////////////////
  digitalWrite(PA8, HIGH);
  digitalWrite(PB14, LOW);
  digitalWrite(PB13, LOW);
  digitalWrite(PB11, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PB10, LOW);
  digitalWrite(PA7, LOW);
  digitalWrite(PB0, LOW);
  digitalWrite(PB15, LOW);
  digitalWrite(PB12, HIGH);
  delay(100);
  digitalWrite(PB12, LOW);
  digitalWrite(PA8, LOW);
}
void espacio() {

  digitalWrite(PB1, HIGH);
  digitalWrite(PA8, LOW);
  digitalWrite(PB13, LOW);
  digitalWrite(PB10, LOW);
  digitalWrite(PB15, LOW);
  digitalWrite(PB14, LOW);
  digitalWrite(PB0, LOW);
  digitalWrite(PA7, LOW);
  digitalWrite(PB12, HIGH);
  delay(100);
  digitalWrite(PB12, LOW);
  digitalWrite(PB1, LOW);
}
void carita () {
  digitalWrite(PB1, HIGH);
  digitalWrite(PB10, HIGH);
  digitalWrite(PB13, HIGH);
  digitalWrite(PB15, HIGH);
  digitalWrite(PB14, LOW);
  digitalWrite(PA8, LOW);
  digitalWrite(PB0, LOW);
  digitalWrite(PA7, LOW);
  digitalWrite(PB12, HIGH);
  delay(100);
  digitalWrite(PB12, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PB10, LOW);
  digitalWrite(PB13, LOW);
  digitalWrite(PB15, LOW);
  //

  digitalWrite(PB1, HIGH);
  digitalWrite(PA8, HIGH);
  digitalWrite(PB13, HIGH);
  digitalWrite(PB10, LOW);
  digitalWrite(PB15, LOW);
  digitalWrite(PB14, LOW);
  digitalWrite(PB0, LOW);
  digitalWrite(PA7, LOW);
  digitalWrite(PB12, HIGH);
  delay(100);
  digitalWrite(PB12, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PA8, LOW);
  digitalWrite(PB13, LOW);

}
void letraB() {

  digitalWrite(PB11, HIGH);
  digitalWrite(PB0, HIGH);
  digitalWrite(PB15, HIGH);
  digitalWrite(PB1, HIGH);
  digitalWrite(PB0, HIGH);
  digitalWrite(PB13, LOW);//
  digitalWrite(PA8, LOW);
  digitalWrite(PA7, LOW);
  digitalWrite(PB14, LOW);
  digitalWrite(PB12, HIGH);
  delay(100);
  digitalWrite(PB12, LOW);
  digitalWrite(PB0, LOW);
  digitalWrite(PB15, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PB0, LOW);
}
void vocalE() {

  digitalWrite(PB0, HIGH);
  digitalWrite(PB1, HIGH);
  digitalWrite(PB14, HIGH);
  digitalWrite(PA8, HIGH);
  digitalWrite(PB13, LOW);

  digitalWrite(PB10, LOW);

  digitalWrite(PA7, LOW);
  digitalWrite(PB15, LOW);
  digitalWrite(PB12, HIGH);
  delay(100);
  digitalWrite(PB12, LOW);
  digitalWrite(PB0, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PB14, LOW);
  digitalWrite(PA8, LOW);
}

void letraN() {

  digitalWrite(PB0, HIGH);
  digitalWrite(PB1, HIGH);
  digitalWrite(PB13, HIGH);
  digitalWrite(PA8, HIGH);
  digitalWrite(PB14, LOW);
  digitalWrite(PB13, LOW);
  digitalWrite(PA7, LOW);
  digitalWrite(PB15, LOW);
  digitalWrite(PB12, HIGH);
  delay(100);
  digitalWrite(PB12, LOW);
  digitalWrite(PB0, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PB13, LOW);
  digitalWrite(PA8, LOW);
}
void letraL() {

  digitalWrite(PB0, HIGH);
  digitalWrite(PB1, HIGH);
  digitalWrite(PB13, HIGH);
  digitalWrite(PB14, HIGH);
  digitalWrite(PA8, LOW);
  digitalWrite(PA7, LOW);
  digitalWrite(PB15, LOW);
  digitalWrite(PB12, HIGH);
  delay(100);
  digitalWrite(PB12, LOW);
  digitalWrite(PB0, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PB13, LOW);
  digitalWrite(PB14, LOW);
}
void letraC() {

  digitalWrite(PB11, HIGH);

  digitalWrite(PB0, HIGH);
  digitalWrite(PB1, HIGH);
  digitalWrite(PA8, HIGH);
  digitalWrite(PB15, HIGH);
  digitalWrite(PB13, LOW);
  digitalWrite(PB14, LOW);
  digitalWrite(PB10, LOW);
  digitalWrite(PA7, LOW);
  digitalWrite(PB12, HIGH);
  delay(100);
  digitalWrite(PB12, LOW);
  digitalWrite(PB0, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PA8, LOW);
  digitalWrite(PB15, LOW);
}
void vocalO() {

  digitalWrite(PB11, HIGH);

  digitalWrite(PB0, HIGH);
  digitalWrite(PB1, HIGH);
  digitalWrite(PA8, HIGH);
  digitalWrite(PB15, HIGH);
  digitalWrite(PB13, LOW);
  digitalWrite(PB14, LOW);
  digitalWrite(PB10, LOW);
  digitalWrite(PA7, LOW);
  digitalWrite(PB12, HIGH);
  delay(100);
  digitalWrite(PB12, LOW);
  digitalWrite(PB0, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PA8, LOW);
  digitalWrite(PB15, LOW);
}
void vocalI() {
  digitalWrite(PB0, HIGH);
  digitalWrite(PB1, HIGH);
  digitalWrite(PB13, HIGH);
  digitalWrite(PA8, HIGH);
  digitalWrite(PB10, LOW);
  digitalWrite(PB14, LOW);

  digitalWrite(PA7, LOW);
  digitalWrite(PB15, LOW);
  digitalWrite(PB12, HIGH);
  delay(100);
  digitalWrite(PB12, LOW);

  digitalWrite(PB0, HIGH);
  digitalWrite(PB1, HIGH);
  digitalWrite(PB13, HIGH);
  digitalWrite(PA8, HIGH);

}
void letraV() {
  digitalWrite(PB0, HIGH);
  digitalWrite(PB1, HIGH);
  digitalWrite(PB10, HIGH);
  digitalWrite(PB15, HIGH);
  digitalWrite(PB14, HIGH);
  digitalWrite(PB13, LOW);
  digitalWrite(PA8, LOW);
  digitalWrite(PA7, LOW);
  digitalWrite(PB12, HIGH);
  delay(100);
  digitalWrite(PB12, LOW);
  digitalWrite(PB0, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PB10, LOW);
  digitalWrite(PB15, LOW);
  digitalWrite(PB14, LOW);

}
void letraD() {
  digitalWrite(PB0, HIGH);
  digitalWrite(PB1, HIGH);
  digitalWrite(PB14, HIGH);
  digitalWrite(PB13, LOW);
  digitalWrite(PB15, LOW);

  digitalWrite(PA8, LOW);
  digitalWrite(PB10, LOW);
  digitalWrite(PA7, LOW);
  digitalWrite(PB12, HIGH);
  delay(100);
  digitalWrite(PB12, LOW);

  digitalWrite(PB0, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PB14, LOW);

}
void vocalA() {

  digitalWrite(PB0, HIGH);
  digitalWrite(PB1, HIGH);
  digitalWrite(PB13, HIGH);
  digitalWrite(PA8, HIGH);
  digitalWrite(PB14, LOW);
  digitalWrite(PB13, LOW);
  digitalWrite(PA7, LOW);
  digitalWrite(PB15, LOW);
  digitalWrite(PB12, HIGH);
  delay(100);
  digitalWrite(PB12, LOW);
  digitalWrite(PB0, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PB13, LOW);
  digitalWrite(PA8, LOW);
}
void letraM() {

  digitalWrite(PB0, HIGH);
  digitalWrite(PB1, HIGH);
  digitalWrite(PB13, HIGH);
  digitalWrite(PA8, HIGH);
  digitalWrite(PB14, LOW);
  digitalWrite(PB13, LOW);
  digitalWrite(PA7, LOW);
  digitalWrite(PB15, LOW);
  digitalWrite(PB12, HIGH);
  delay(100);
  digitalWrite(PB12, LOW);
  digitalWrite(PB0, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PB13, LOW);
  digitalWrite(PA8, LOW);
}
void letraG() {

  digitalWrite(PB0, HIGH);
  digitalWrite(PB1, HIGH);
  digitalWrite(PB15, HIGH);
  digitalWrite(PB14, HIGH);
  digitalWrite(PA8, HIGH);
  digitalWrite(PB13, LOW);
  digitalWrite(PA7, LOW);
  digitalWrite(PB12, HIGH);
  delay(100);
  digitalWrite(PB12, LOW);
  digitalWrite(PB0, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PB15, LOW);
  digitalWrite(PB14, LOW);
  digitalWrite(PA8, LOW);
}
void letraT() {

  digitalWrite(PB0, HIGH);
  digitalWrite(PB1, HIGH);
  digitalWrite(PB10, HIGH);
  digitalWrite(PB14, HIGH);
  digitalWrite(PB13, LOW);
  digitalWrite(PB15, LOW);
  digitalWrite(PA8, LOW);
  digitalWrite(PA7, LOW);
  digitalWrite(PB12, HIGH);
  delay(100);
  digitalWrite(PB12, LOW);
  digitalWrite(PB0, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PB10, LOW);
  digitalWrite(PB14, LOW);
}
void letraS(){
digitalWrite(PB0, HIGH);
digitalWrite(PB1, HIGH);
digitalWrite(PB10, HIGH);
digitalWrite(PB15, HIGH);
digitalWrite(PA8, HIGH);
digitalWrite(PB14, LOW);  
digitalWrite(PB13, LOW);
digitalWrite(PA7, LOW);
digitalWrite(PB12, HIGH);
delay(100);
digitalWrite(PB12, LOW);
digitalWrite(PB0, LOW);
digitalWrite(PB1, LOW);
digitalWrite(PB10, LOW);
digitalWrite(PB15, LOW);
digitalWrite(PA8, LOW);
  
}
