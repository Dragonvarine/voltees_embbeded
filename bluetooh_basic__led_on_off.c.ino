#include <SoftwareSerial.h>
SoftwareSerial MyHC(0,1);
int X = '0'||'1';
int LED = 13;
int RX=0;
int TX=1;
void setup() {
  Serial.begin(9600);
  MyHC.begin(9600);
  pinMode(LED ,OUTPUT);
  pinMode(RX,INPUT);
  pinMode(TX,OUTPUT);
 Serial.println("Connected");
  char MyHC= X;
}
void loop() 
{ 
 if (MyHC.available()) 
   X = MyHC.read(); 
 if (X == '1') 
 { 
   digitalWrite(LED, HIGH); 
   Serial.println("LED On"); 
 } 
 else if (X == '0') 
 { 
   digitalWrite(LED, LOW); 
   Serial.println("LED Off"); 
 } 
}    
 
