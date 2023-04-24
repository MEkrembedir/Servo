//A simple example code for the servos in the laika robot dog
//8 servo motors can be controlled with this code

#include<Servo.h>
Servo servo1; Servo servo2; Servo servo3; Servo servo4;
Servo servo5; Servo servo6; Servo servo7; Servo servo8; 



//Servo Angle Table For Edit Servo Position
  int wake1=70;   int step1=55;   
  int wake2=60;   int step2=50;  
  int wake3=72;   int step3=75;  
  int wake4=125;  int step4=143; 
  int wake5=65;   int step5=55;   
  int wake6=130;  int step6=145; 
  int wake7=110;  int step7=130;  
  int wake8=55;   int step8=40;  

// Record Servos Angle
int now1,now2,now3,now4,now5,now6,now7,now8;

void front_leg( int set1, int set2, int set3, int set4){ 
  Serial.print(set1);
  Serial.print("--");
  Serial.print(set2);
  Serial.print("--");
  Serial.print(set3);
  Serial.print("--");
  Serial.print(set4);
  Serial.print("--");
  now1=set1;now2=set2;now3=set3;now4=set4;
  servo1.write(set1);
  servo2.write(set2);
  servo3.write(set3);
  servo4.write(set4);
  }

void back_leg( int set5, int set6, int set7, int set8){

  Serial.print(set5);
  Serial.print("--");
  Serial.print(set6);
  Serial.print("--");
  Serial.print(set7);
  Serial.print("--");
  Serial.println(set8);
  now5=set5;now6=set6;now7=set7;now8=set8;
  servo5.write(set5);
  servo6.write(set6);
  servo7.write(set7);
  servo8.write(set8);
  }

void fiil(int target1,int target2,int target3,int target4,int target5,int target6,int target7,int target8){
  for(int i=0;i<180;i++){
  front_leg(decision(now1,target1),decision(now2,target2),decision(now3,target3),decision(now4,target4));
  back_leg(decision(now5,target5),decision(now6,target6),decision(now7,target7),decision(now8,target8));
  
  delay(30);
  }
  Serial.println("GG");
  }

 int decision(int start,int last){
    int cikti;
     if(start<last){
                 if(start+1<last){cikti=start+1;} 
                 if(start+1==last){cikti=last;} 
                 if(start+1>last){cikti=last;}}
     if(start>last){     
                if(start-1>last){cikti=start-1;}     
                if(start-1<last){cikti=last;}     
               if(start-1==last){cikti=last;}}
 if(start==last){cikti=last;}              
  return cikti;}
  

void example(){
  fiil(wake1,wake2,wake3,wake4,wake5,wake6,wake7,wake8);
  Serial.println("wake complete");
  delay(1000);
  fiil(step1,step2,step3,step4,step5,step6,step7,step8);
  Serial.println("step complete");
  delay(1000);
  }
  
void setup() {
servo1.attach(2);
servo2.attach(3);
servo3.attach(4);
servo4.attach(5);
servo5.attach(6);
servo6.attach(7);
servo7.attach(8);
servo8.attach(9);
Serial.begin(9600);
}

void loop() {
 example();
}
