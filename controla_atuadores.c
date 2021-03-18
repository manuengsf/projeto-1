#include <signal.h>
#include <stdio.h>
#include <wiringPi.h>
#include <unistd.h>
#define RESISTOR 23
#define VENTOINHA 24
void iniciasistema(){
    wiringPiSetup();
    pinMode(RESISTOR,OUTPUT); 
    pinMode(VENTOINHA,OUTPUT); 
    digitalWrite(VENTOINHA,HIGH);
    digitalWrite(RESISTOR,HIGH);
} 
void liga_resistor(){
     digitalWrite(RESISTOR,LOW);
}
void liga_ventoinha(){
     digitalWrite(VENTOINHA,LOW);
}

void desliga_resistor(){
     digitalWrite(RESISTOR,HIGH);
}
void desliga_ventoinha(){
     digitalWrite(VENTOINHA,HIGH);
}
int main(){

    int i;
    iniciasistema();    
    for(i=0;i<5;i++){
      liga_resistor();
      delay(500);
      desliga_resistor();
      liga_ventoinha();
      delay(500);
    }              
    return 0;
}
