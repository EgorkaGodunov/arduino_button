#define btn_pin 3
#define check_time 20
#define led_pin 11
int i = 0;
int prev=0;
int counter=0;
void setup() {
  Serial.begin(9600);
  pinMode(btn_pin,INPUT);
  pinMode(led_pin,OUTPUT);
  
}
void loop(){
  int val = digitalRead(btn_pin);
  if(val!= prev){
    if(val==1){
      counter+=1;
    }
    delay(50);
  }
  prev=val;
// С УДЕРЖАНИЕМ
// if(val==0){
  //   while (i < 255){
  //     analogWrite(led_pin, i);
  //     delay(6);
  //     ++i;
  // }

  //ПО НАЖАТИЮ
  if(counter%2==0){
    while (i < 255){
    analogWrite(led_pin, i);
    delay(6);
    ++i;
    
    }
  }else{
    i=0;
    digitalWrite(led_pin,LOW);    
  }

}
// void loop(){
//   int val = digitalRead(btn_pin);
  
//   if(val == 1 && val==prevsv){
//     if(millis() - prev > check_time){
//       Serial.println("yes"+'\n');
//     }
//     prev = millis();
    
//     digitalWrite(led_pin,LOW);
//     prevsv=val;
//   }else{
//     digitalWrite(led_pin,HIGH);
//     sv=1;
//     Serial.println(val,prevsv);
//     prevsv=val;
//   }
// }


// void loop() {
//   millis();
//   int val = digitalRead(btn_pin);
//   if(val == 1){
//     counter += 1;
//   }
//   if(prev!=val){
//     counter=0;
//   }
  
//   prev=val;
//   if(counter > 20){#pressed}

// }