#include <SoftwareSerial.h>
SoftwareSerial bluetooth(0,1);
int X = '0'||'1';
int LED = 13;
int RX=0;
int TX=1;
void setup() 
{
  Serial.begin(9600);
  bluetooth.begin(9600);
  pinMode(LED ,OUTPUT);
  pinMode(RX,INPUT);
  pinMode(TX,OUTPUT);
 Serial.println("Connected");
  char theX = X;
}

void loop() 
{ 
// if (bluetooth.available()) 
  // X = bluetooth.read();
 X = '1'; 
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
 
