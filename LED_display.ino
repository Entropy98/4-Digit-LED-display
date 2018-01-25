int segA=6;
int segB=5;
int segC=10;
int segD=2;
int segE=3;
int segF=7;
int segG=11;
int decimal=9;
int firstDig=4;
int secondDig=8;
int thirdDig=13;
int fourthDig=12;
int an0Val=0;
int dig0=0;
int dig1=0;
int dig2=0;
int dig3=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(segA,OUTPUT);
  pinMode(segB,OUTPUT);
  pinMode(segC,OUTPUT);
  pinMode(segD,OUTPUT);
  pinMode(segE,OUTPUT);
  pinMode(segF,OUTPUT);
  pinMode(segG,OUTPUT);
  pinMode(decimal,OUTPUT);
  pinMode(firstDig,OUTPUT);
  pinMode(secondDig,OUTPUT);
  pinMode(thirdDig,OUTPUT);
  pinMode(fourthDig,OUTPUT);
}
//n is digit k is placement dp is decimal point init at false
void displayNum(int n,int k,bool dp=false){
  if(k==0){
    digitalWrite(firstDig,0);
    digitalWrite(secondDig,1);
    digitalWrite(thirdDig,0);
    digitalWrite(fourthDig,0); 
  }
  else if(k==1){
    digitalWrite(firstDig,1);
    digitalWrite(secondDig,0); 
    digitalWrite(thirdDig,0);
    digitalWrite(fourthDig,0); 
  }
  else if(k==2){
    digitalWrite(firstDig,0);
    digitalWrite(secondDig,0);
    digitalWrite(thirdDig,0);
    digitalWrite(fourthDig,1); 
  }
  else if(k==3){
    digitalWrite(firstDig,0);
    digitalWrite(secondDig,0);
    digitalWrite(thirdDig,1);
    digitalWrite(fourthDig,0); 
  }
  digitalWrite(segA,0);
  digitalWrite(segB,0);
  digitalWrite(segC,0);
  digitalWrite(segD,0);
  digitalWrite(segE,0);
  digitalWrite(segF,0);
  digitalWrite(segG,0);
  if(dp){
    digitalWrite(decimal,1);
  }
  else{
    digitalWrite(decimal,0);
  }
  if(n==1){
    digitalWrite(segC,1);
    digitalWrite(segB,1);
  }
  else if(n==2){
    digitalWrite(segA,1);
    digitalWrite(segB,1);
    digitalWrite(segG,1);
    digitalWrite(segE,1);
    digitalWrite(segD,1);
  }
  else if(n==3){
    digitalWrite(segA,1);
    digitalWrite(segB,1);
    digitalWrite(segC,1);
    digitalWrite(segD,1);
    digitalWrite(segG,1);
  }
  else if(n==4){
    digitalWrite(segC,1);
    digitalWrite(segB,1);
    digitalWrite(segG,1);
    digitalWrite(segF,1);
  }
  else if(n==5){
    digitalWrite(segA,1);
    digitalWrite(segF,1);
    digitalWrite(segG,1);
    digitalWrite(segC,1);
    digitalWrite(segD,1);
  }
  else if(n==6){
    digitalWrite(segA,1);
    digitalWrite(segB,1);
    digitalWrite(segG,1);
    digitalWrite(segE,1);
    digitalWrite(segD,1);
    digitalWrite(segC,1);
  }
  else if(n==7){
    digitalWrite(segA,1);
    digitalWrite(segB,1);
    digitalWrite(segC,1);
  }
  else if(n==8){
    digitalWrite(segA,1);
    digitalWrite(segB,1);
    digitalWrite(segC,1);
    digitalWrite(segD,1);
    digitalWrite(segE,1);
    digitalWrite(segF,1);
    digitalWrite(segG,1);
  }
  else if(n==9){
    digitalWrite(segA,1);
    digitalWrite(segB,1);
    digitalWrite(segC,1);
    digitalWrite(segF,1);
    digitalWrite(segG,1);
  }
  else if(n==0){
    digitalWrite(segA,1);
    digitalWrite(segB,1);
    digitalWrite(segC,1);
    digitalWrite(segD,1);
    digitalWrite(segE,1);
    digitalWrite(segF,1);
  }
  delay(5);
}

void loop() {
  // put your main code here, to run repeatedly:
  an0Val=analogRead(0);
  Serial.println(an0Val);
  dig0=an0Val/1000;
  dig1=(an0Val/100)%10;
  dig2=(an0Val/10)%10;
  dig3=an0Val%10;
  Serial.print("0: ");
  Serial.print(dig0);
  Serial.print(" 1: ");
  Serial.print(dig1);
  Serial.print(" 2: ");
  Serial.print(dig2);
  Serial.print(" 3: ");
  Serial.print(dig3);
  Serial.print('\n');
  displayNum(dig0,0);
  displayNum(dig1,1);
  displayNum(dig2,2);
  displayNum(dig3,3);
}

