#include <CapacitiveSensor.h>

CapacitiveSensor   cs_3_4 = CapacitiveSensor(4,3); // 1M resistor between pins 4 & 8, pin 8 is sensor pin, add a wire and or foil
CapacitiveSensor   cs_5_6 = CapacitiveSensor(6,5);
CapacitiveSensor   cs_7_8 = CapacitiveSensor(8,7);
CapacitiveSensor   cs_9_10 = CapacitiveSensor(10,9);
CapacitiveSensor   cs_11_12 = CapacitiveSensor(12,11);
void setup()                    
{ 
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

void loop()                    
{
 long sensor1 =  cs_3_4.capacitiveSensor(50);
 long sensor2 =  cs_5_6.capacitiveSensor(50);
 long sensor3 =  cs_7_8.capacitiveSensor(50);
 long sensor4 =  cs_9_10.capacitiveSensor(50);
 long sensor5 =  cs_11_12.capacitiveSensor(50);

    //Serial.println(sensor1);  // print sensor output 
   if(sensor1 >= 1000)
   {Serial.println("Sensor 1 touched");
   digitalWrite(13 , HIGH);
    delay(5000);  //seconde de délais avant le lancement de la vidéo
    digitalWrite(13 , LOW);
   }

   //sensor 2
      if(sensor2 >= 1000)
   {Serial.println("Sensor 2 touched");
   digitalWrite(13 , HIGH);
    delay(5000);  //seconde de délais avant le lancement de la vidéo
    digitalWrite(13 , LOW);
   }

    //sensor 3
      if(sensor3 >= 1000)
   {Serial.println("Sensor 3 touched");
   digitalWrite(13 , HIGH);
    delay(5000);  //seconde de délais avant le lancement de la vidéo
    digitalWrite(13 , LOW);
   }

    //sensor 4
      if(sensor4 >= 1000)
   {Serial.println("Sensor 4 touched");
   digitalWrite(13 , HIGH);
    delay(5000);  //seconde de délais avant le lancement de la vidéo
    digitalWrite(13 , LOW);
   }

    //sensor 5
      if(sensor5 >= 1000)
   {Serial.println("Sensor 5 touched");
   digitalWrite(13 , HIGH);
    delay(5000);  //seconde de délais avant le lancement de la vidéo
    digitalWrite(13 , LOW);
   }
 
}
