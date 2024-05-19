#include <Servo.h>
Servo s1;
Servo s2;
Servo s3;
int start_s1=89;
int start_s2=1;
int start_s3=89;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  s1.attach(9);
  s1.write(start_s1);
  s2.attach(10);
  s2.write(start_s2);
  s3.attach(11);
  s3.write(start_s3);
  //left
  pinMode(3, INPUT);
  //right
  pinMode(2, INPUT);
  //down
  pinMode(5, INPUT);
  //up
  pinMode(4, INPUT);
  //catch
  pinMode(6, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //left/right
  if(digitalRead(3) == LOW && digitalRead(2) == HIGH && start_s1<120){
    start_s1+=1;

    s1.write(start_s1);

    delay(10);
    
  }
  else if(digitalRead(2) == LOW && digitalRead(3) == HIGH && start_s1 >50){
    start_s1-=1;
   
    s1.write(start_s1);

    delay(10);
    
  }

  //up/down
  if(digitalRead(4) == LOW && digitalRead(5) == HIGH && start_s2<100){

    start_s2+=1;

    s2.write(start_s2);
  
    delay(10);
    
  }
  else if(digitalRead(5) == LOW && digitalRead(4) == HIGH && start_s2>0){

    start_s2-=1;

    s2.write(start_s2);
    
    delay(10);
    
  }


  //catch
  if(digitalRead(6) == LOW  && start_s3<90){
    start_s3+=1;

    s3.write(start_s3);

    delay(10);
    
  }
  else if(digitalRead(6) == HIGH && start_s3 >20){
    start_s3-=1;
   
    s3.write(start_s3);

    delay(10);
    
  } 





}

