//leduri: verde(21), galben(22), rosu(23)
//pini afisaj: d1(13), B(12), C(26), E(25), D(33), G(17), RDP(5), A(18), F(19),D2(16)

#include "BluetoothSerial.h"
#define ledverde 21
#define ledrosu 23
#define ledgalben 22
#define DIGIT1 13
#define DIGIT2 16
#define A 18
#define B 12
#define C 26
#define E 25
#define D 33
#define G 17
#define DP 5
#define F 19


BluetoothSerial ESP_BT;
int incoming;

int threshold = 40;
bool touch1detected = false;
bool touch2detected = false;
bool touch3detected = false;

void gotTouch1(){
 touch1detected = true;
}

void gotTouch2(){
 touch2detected = true;
}

void gotTouch3(){
 touch3detected = true;
}

void rosu(){
  digitalWrite(ledrosu, HIGH);
  ESP_BT.println("Semaforul s-a facut rosu, va rog asteptati");
    for(int a = 1; a<=10; a++){
      if(a % 2 == 0){
        ESP_BT.print("Au mai ramas: ");
        ESP_BT.print(10 - a);
        ESP_BT.println(" secunde.");
      }
      delay(1000);
    }
    digitalWrite(ledrosu, LOW);

    for(int a = 0; a<=1000;a+=10){
      //S
      digitalWrite(DIGIT1, LOW); //DIGIT1
      digitalWrite(DIGIT2 ,HIGH); //DIGIT2
      digitalWrite(A,HIGH); //a
      digitalWrite(B,LOW); //b
      digitalWrite(C,HIGH); //c
      digitalWrite(D,HIGH); //d
      digitalWrite(E,LOW); //e
      digitalWrite(F,HIGH); //f
      digitalWrite(G,HIGH); // g
      digitalWrite(DP,LOW); // DP

      delay(5);

      //T
      digitalWrite(DIGIT1,HIGH); //DIGIT1
      digitalWrite(DIGIT2,LOW); //DIGIT2
      digitalWrite(A,LOW); //a
      digitalWrite(B,LOW); //b
      digitalWrite(C,LOW); //c
      digitalWrite(D,HIGH); //d
      digitalWrite(E,HIGH); //e
      digitalWrite(F,HIGH); //f
      digitalWrite(G,HIGH); // g
      digitalWrite(DP,LOW); // DP

      delay(5); 
    }
    for(int a = 0; a<=1000;a+=10){
      //A
      digitalWrite(DIGIT1, LOW); //DIGIT1
      digitalWrite(DIGIT2 ,HIGH); //DIGIT2
      digitalWrite(A,HIGH); //a
      digitalWrite(B,HIGH); //b
      digitalWrite(C,HIGH); //c
      digitalWrite(D,LOW); //d
      digitalWrite(E,HIGH); //e
      digitalWrite(F,HIGH); //f
      digitalWrite(G,HIGH); // g
      digitalWrite(DP,LOW); // DP

      delay(5);

      //r
      digitalWrite(DIGIT1,HIGH); //DIGIT1
      digitalWrite(DIGIT2,LOW); //DIGIT2
      digitalWrite(A,LOW); //a
      digitalWrite(B,LOW); //b
      digitalWrite(C,LOW); //c
      digitalWrite(D,LOW); //d
      digitalWrite(E,HIGH); //e
      digitalWrite(F,LOW); //f
      digitalWrite(G,HIGH); // g
      digitalWrite(DP,LOW); // DP

      delay(5); 
    }
    for(int a = 0; a<=1000;a+=10){
      //T
      digitalWrite(DIGIT1, LOW); //DIGIT1
      digitalWrite(DIGIT2 ,HIGH); //DIGIT2
      digitalWrite(A,LOW); //a
      digitalWrite(B,LOW); //b
      digitalWrite(C,LOW); //c
      digitalWrite(D,HIGH); //d
      digitalWrite(E,HIGH); //e
      digitalWrite(F,HIGH); //f
      digitalWrite(G,HIGH); // g
      digitalWrite(DP,LOW); // DP

      delay(10);

    }
      digitalWrite(A,LOW); //a
      digitalWrite(B,LOW); //b
      digitalWrite(C,LOW); //c
      digitalWrite(D,LOW); //d
      digitalWrite(E,LOW); //e
      digitalWrite(F,LOW); //f
      digitalWrite(G,LOW); // g
      digitalWrite(DP,LOW); // DP

      digitalWrite(A,LOW); //a
      digitalWrite(B,LOW); //b
      digitalWrite(C,LOW); //c
      digitalWrite(D,LOW); //d
      digitalWrite(E,LOW); //e
      digitalWrite(F,LOW); //f
      digitalWrite(G,LOW); // g
      digitalWrite(DP,LOW); // DP    
}

void verde(){
  digitalWrite(ledverde, HIGH);
  ESP_BT.println("Semaforul s-a facut verde, va rog traversati");
    digitalWrite(ledgalben, HIGH);
    delay(1000);
    digitalWrite(ledgalben, LOW);
    delay(1000);
    ESP_BT.println("Au mai ramas: 8 secunde");
    digitalWrite(ledgalben, HIGH);
    delay(1000);
    digitalWrite(ledgalben, LOW);
    delay(500);
    digitalWrite(ledgalben, HIGH);
    delay(500);
    digitalWrite(ledgalben, LOW);
    ESP_BT.println("Au mai ramas: 6 secunde");
    digitalWrite(ledgalben, HIGH);
    delay(500);
    digitalWrite(ledgalben, LOW);
    delay(500);
    digitalWrite(ledgalben, HIGH);
    delay(500);
    digitalWrite(ledgalben, LOW);
    delay(500);
    ESP_BT.println("Au mai ramas: 4 secunde");
    digitalWrite(ledgalben, HIGH);
    delay(333);
    digitalWrite(ledgalben, LOW);
    delay(333);
    digitalWrite(ledgalben, HIGH);
    delay(333);
    digitalWrite(ledgalben, LOW);
    delay(333);
    digitalWrite(ledgalben, HIGH);
    delay(333);
    digitalWrite(ledgalben, LOW);
    delay(333);
    ESP_BT.println("Au mai ramas: 2 secunde");
    digitalWrite(ledgalben, HIGH);
    delay(333);
    digitalWrite(ledgalben, LOW);
    delay(333);
    digitalWrite(ledgalben, HIGH);
    delay(333);
    digitalWrite(ledgalben, LOW);
    delay(333);
    digitalWrite(ledgalben, HIGH);
    delay(333);
    digitalWrite(ledgalben, LOW);
    delay(333);
    ESP_BT.println("Au mai ramas: 0 secunde");
    digitalWrite(ledverde, LOW);

    for(int i = 0; i<=1000;i+=10){
      //S
      digitalWrite(DIGIT1, LOW); //DIGIT1
      digitalWrite(DIGIT2 ,HIGH); //DIGIT2
      digitalWrite(A,HIGH); //a
      digitalWrite(B,LOW); //b
      digitalWrite(C,HIGH); //c
      digitalWrite(D,HIGH); //d
      digitalWrite(E,LOW); //e
      digitalWrite(F,HIGH); //f
      digitalWrite(G,HIGH); // g
      digitalWrite(DP,LOW); // DP

      delay(5);

      //t
      digitalWrite(DIGIT1,HIGH); //DIGIT1
      digitalWrite(DIGIT2,LOW); //DIGIT2
      digitalWrite(A,LOW); //a
      digitalWrite(B,LOW); //b
      digitalWrite(C,LOW); //c
      digitalWrite(D,HIGH); //d
      digitalWrite(E,HIGH); //e
      digitalWrite(F,HIGH); //f
      digitalWrite(G,HIGH); // g
      digitalWrite(DP,LOW); // DP

      delay(5); 
    }
    for(int i = 0; i<=1000;i+=10){
      //o
      digitalWrite(DIGIT1,LOW); //DIGIT1
      digitalWrite(DIGIT2,HIGH);
      digitalWrite(A,LOW); //a
      digitalWrite(B,LOW); //b
      digitalWrite(C,HIGH); //c
      digitalWrite(D,HIGH); //d
      digitalWrite(E,HIGH); //e
      digitalWrite(F,LOW); //f
      digitalWrite(G,HIGH); // g
      digitalWrite(DP,LOW); // DP

      delay(5);

      //P
      digitalWrite(DIGIT1,HIGH); //DIGIT1
      digitalWrite(DIGIT2,LOW);
      digitalWrite(A,HIGH); //a
      digitalWrite(B,HIGH); //b
      digitalWrite(C,LOW); //c
      digitalWrite(D,LOW); //d
      digitalWrite(E,HIGH); //e
      digitalWrite(F,HIGH); //f
      digitalWrite(G,HIGH); // g
      digitalWrite(DP,LOW); // DP

      delay(5); 
    }
    
      digitalWrite(A,LOW); //a
      digitalWrite(B,LOW); //b
      digitalWrite(C,LOW); //c
      digitalWrite(D,LOW); //d
      digitalWrite(E,LOW); //e
      digitalWrite(F,LOW); //f
      digitalWrite(G,LOW); // g
      digitalWrite(DP,LOW); // DP

      digitalWrite(A,LOW); //a
      digitalWrite(B,LOW); //b
      digitalWrite(C,LOW); //c
      digitalWrite(D,LOW); //d
      digitalWrite(E,LOW); //e
      digitalWrite(F,LOW); //f
      digitalWrite(G,LOW); // g
      digitalWrite(DP,LOW); // DP    
}


void setup() {
  // put your setup code here, to run once:
  

  pinMode(ledverde, OUTPUT);
  pinMode(ledrosu, OUTPUT);
  pinMode(ledgalben, OUTPUT);

  pinMode(A, OUTPUT); //A
  pinMode(B, OUTPUT); //B
  pinMode(C, OUTPUT); //C
  pinMode(D, OUTPUT); //D
  pinMode(E, OUTPUT); //E
  pinMode(F, OUTPUT); //F
  pinMode(G, OUTPUT); //G
  pinMode(DP, OUTPUT); //DP
  pinMode(DIGIT1, OUTPUT); //DIGIT1
  pinMode(DIGIT2, OUTPUT); //DIGIT2
  touchAttachInterrupt(T3, gotTouch1, threshold);
  touchAttachInterrupt(T6, gotTouch2, threshold);
  touchAttachInterrupt(T9, gotTouch3, threshold);

  Serial.begin(115200);
  ESP_BT.begin("ESP32 T5");
}

int x = 0;
void loop() {
  // put your main code here, to run repeatedly:
  if(x == 0){
    touch1detected = false;
    touch2detected = false;
    touch3detected = false;
    x++;
  }

  if (ESP_BT.available()) {
    incoming = ESP_BT.read();
    Serial.println("Received:");
  }

  if(touch1detected){
    rosu();
    Serial.println("functie rosu");
  }
  if(touch2detected){
    verde();
    Serial.println("functie verde");
  }
  if(touch3detected){
    while(x){
      rosu();
      verde();
    }
  }
  touch1detected = false;
  touch2detected = false;
  touch3detected = false;
  
}


