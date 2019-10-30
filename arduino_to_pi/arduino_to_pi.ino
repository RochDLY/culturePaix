#include <CapacitiveSensor .h>

CapacitiveSensor   cs_3_4 = CapacitiveSensor(4,3); // 1M resistor between pins 4 & 8, pin 8 is sensor pin, add a wire and or foil
CapacitiveSensor   cs_5_6 = CapacitiveSensor(6,5);
CapacitiveSensor   cs_7_8 = CapacitiveSensor(8,7);
CapacitiveSensor   cs_9_10 = CapacitiveSensor(10,9);
CapacitiveSensor   cs_11_12 = CapacitiveSensor(12,11);
String data = "a.mp4";
String random_number = "0";
// video for country1
String country11[] = {"a.mp4" , "b.mp4" , "c.mp4" , "d.mp4" , "e.mp4"};
String country1[] = {"a.mp4" , "b.mp4" , "c.mp4" , "d.mp4" , "e.mp4"};
//video country 2
String country22[] = {"f.mp4" , "g.mp4" , "h.mp4" , "i.mp4" , "j.mp4"};
String country2[] = {"f.mp4" , "g.mp4" , "h.mp4" , "i.mp4" , "j.mp4"};
//video country 3
String country33[] = {"k.mp4" , "l.mp4" , "m.mp4" , "n.mp4" , "o.mp4"};
String country3[] = {"k.mp4" , "l.mp4" , "m.mp4" , "n.mp4" , "o.mp4"};
//video country 4
String country44[] = {"p.mp4" , "q.mp4" , "r.mp4" , "s.mp4" , "t.mp4"};
String country4[] = {"p.mp4" , "q.mp4" , "r.mp4" , "s.mp4" , "t.mp4"};
//video country 5
String country55[] = {"u.mp4" , "v.mp4" , "w.mp4" , "x.mp4" , "y.mp4"};
String country5[] = {"u.mp4" , "v.mp4" , "w.mp4" , "x.mp4" , "y.mp4"};

void setup() {
   cs_3_4.set_CS_AutocaL_Millis(0xFFFFFFFF);// turn off autocalibrate on channel 1 - just as an example
   cs_5_6.set_CS_AutocaL_Millis(0xFFFFFFFF);// turn off autocalibrate on channel 1 - just as an example
   cs_7_8.set_CS_AutocaL_Millis(0xFFFFFFFF);// turn off autocalibrate on channel 1 - just as an example
   cs_9_10.set_CS_AutocaL_Millis(0xFFFFFFFF);// turn off autocalibrate on channel 1 - just as an example
   cs_11_12.set_CS_AutocaL_Millis(0xFFFFFFFF);// turn off autocalibrate on channel 1 - just as an example
   Serial.begin(9600);
   pinMode(7,OUTPUT);
   pinMode(13 , OUTPUT);
   digitalWrite(13 , LOW);
   digitalWrite(7 , HIGH);
}

void loop() {
  long sensor1 =  cs_3_4.capacitiveSensor(50);
  long sensor2 =  cs_5_6.capacitiveSensor(50);
  long sensor3 =  cs_7_8.capacitiveSensor(50);
  long sensor4 =  cs_9_10.capacitiveSensor(50);
  long sensor5 =  cs_11_12.capacitiveSensor(50);
 
  if(sensor1 >= 1000){
    digitalWrite(13 , HIGH);
    random_number = generate_random_number1();
    Serial.println(random_number);
    delay(20000);
    digitalWrite(13 , LOW);
  }
  
  if(sensor2 >= 1000){
    digitalWrite(13 , HIGH);
    random_number = generate_random_number2();
    Serial.println(random_number);
    delay(20000);
    digitalWrite(13 , LOW);
  }
  
  if(sensor3 >= 1000){
    digitalWrite(13 , HIGH);
    random_number = generate_random_number3();
    Serial.println(random_number);
    delay(20000);
    digitalWrite(13 , LOW);
  }
  
  if(sensor4 >= 1000){
    digitalWrite(13 , HIGH);
    random_number = generate_random_number4();
    Serial.println(random_number);
    delay(20000);
    digitalWrite(13 , LOW);
  }
  
  if(sensor5 >= 1000){
    digitalWrite(13 , HIGH);
    random_number = generate_random_number5();
    Serial.println(random_number);
    delay(20000);
    digitalWrite(13 , LOW);
  }
  delay(100);
}

String generate_random_number1(){
  while(1){
    int x = random(0, 5);
    //Serial.println(x);
    int y = 0;
    while(y<5){
      if(country1[x] == "0"){
        x = x + 1; 
      }
      else{
        String value = country1[x];
        country1[x] = "0";
        return value;
      }
      if(x>4){
        x = 0;
      }
      y++;
    }
    for(int i =0 ; i<5 ; i++){
    country1[i] = country11[i];}
  }
  return "0";
}



String generate_random_number2(){
  while(1){
    int x = random(0, 5);
    //Serial.println(x);
    int y = 0;
    while(y<5){
      if(country2[x] == "0"){
      x = x + 1; 
    }
    else{
      String value = country2[x];
      country2[x] = "0";
      return value;
    }
    if(x>4){
      x = 0;
    }
    y++;
    }
    for(int i =0 ; i<5 ; i++){
    country2[i] = country22[i];}
  }
  return "0";
}




String generate_random_number3(){
  while(1){
    int x = random(0, 5);
    //Serial.println(x);
    int y = 0;
    while(y<5){
      if(country3[x] == "0"){
      x = x + 1; 
    }
    else{
      String value = country3[x];
      country3[x] = "0";
      return value;
    }
    if(x>4){
      x = 0;
    }
    y++;
    }
    for(int i =0 ; i<5 ; i++){
    country3[i] = country33[i];}
  }
  return "0";
}



String generate_random_number4(){
  while(1){
    int x = random(0, 5);
    //Serial.println(x);
    int y = 0;
    while(y<5){
    if(country4[x] == "0"){
    x = x + 1; 
    }
    else{
      String value = country4[x];
      country4[x] = "0";
      return value;
    }
    if(x>4){
    x = 0;
    }
    y++;
    }
    for(int i =0 ; i<5 ; i++){
    country4[i] = country44[i];}
 }
 return "0";
}




String generate_random_number5(){
  while(1){
    int x = random(0, 5);
    //Serial.println(x);
    int y = 0;
    while(y<5){
      if(country5[x] == "0"){
      x = x + 1; 
    }
    else{
      String value = country5[x];
      country5[x] = "0";
      return value;
    }
    if(x>4){
    x = 0;
    }
    y++;
    }
    for(int i =0 ; i<5 ; i++){
    country5[i] = country55[i];}
  }
  return "0";
}
