#define led1 13
#define led2 12
#define led3 11
#define led4 10
#define vcc1 5
#define vcc2 4
//#define delay = 1000


unsigned long perviousMillis = 0;

const long interval = 1000;

unsigned long previousMillis = 0;

int ledState = LOW;


void blinker(){
  
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
  
  }
  }


void number0(){

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  
 //digitalWrite(vcc2, LOW);
}

void number1(){

  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
//digitalWrite(vcc1, LOW);
//digitalWrite(vcc2, HIGH);
}

void number2(){

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);

}

void number3(){

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);

}

void number4(){

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);

}

void number5(){

  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);

}

void number6(){

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);

}

void number7(){

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);

}

void number8(){

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);

}

void number9(){

  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);


}

void setup() {

Serial.begin(9600);
Serial.println("");
Serial.println("Alku");
Serial.println("");

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(vcc1, OUTPUT);
pinMode(vcc2, OUTPUT);

}



void showNum(int i){
  Serial.print("showNum i= ");
  Serial.println(i);
  switch(i){
    case 0: number0();break;
    case 1: number1();break;
    case 2: number2();break;
    case 3: number3();break;
    case 4: number4();break;
    case 5: number5();break;
    case 6: number6();break;
    case 7: number7();break;
    case 8: number8();break;
    case 9: number9();break;
  }
}

void count(){
  for(int x=0;x<2;x++){
    showNum(x);
    Serial.print("for-loopissa. x= ");
    Serial.println(x);
    delay(1);
  }
}




void number42(){

  Serial.println("Vasen näyttö");
  digitalWrite(vcc1, HIGH);
  digitalWrite(vcc2, LOW);
  number4();
  Serial.println("Oikea näyttö");
  digitalWrite(vcc1, LOW);
  digitalWrite(vcc2, HIGH);
  number2();
}

 void number24(){

  Serial.println("Vasen näyttö");
  digitalWrite(vcc1, HIGH);
  digitalWrite(vcc2, LOW);
  number2();
  Serial.println("Oikea näyttö");
  digitalWrite(vcc1, LOW);
  digitalWrite(vcc2, HIGH);
  number4();
  
 }


 
void loop() {
  
blinker();

if (ledState == HIGH){
  number42();
}
else {
  number24();
}
}



void loop1() {

int x = Serial.read();

  if(x != -1){
   

  } if (x=='0'){
  number0();
 }
 else if (x=='1'){
  number1();
 }
 else if (x=='2'){
  number2();
 }
 else if (x=='3'){
  number3();
 }
 else if (x=='4'){
  number4();
 }
 else if (x=='5'){
  number5();
 }
 else if (x=='6'){
  number6();
 }
 else if (x=='7'){
  number7();
 }
 else if (x=='8'){
  number8();
 }
 else if (x=='9'){
  number9();
 }
 
  }
 


  
