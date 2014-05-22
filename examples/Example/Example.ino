
<code>
#include <Arduino.h>
#include <NMEA.h>
#define GPS_SERIAL_DEV Serial
void setup(){


NMEA gps;

while(GPS_SERIAL_DEV.available()){
  if (gps.addChar(GPS_SERIAL_DEV.read())){
    if (gps.validFix()){
      Serial.println("Valid Fix");
      Serial.write("Course: ");
      Serial.println(gps.getCourse());
      Serial.write("Speed: (Knots) ");
      Serial.println(gps.getSpeed());
      Serial.write("Latitude: ");
      Serial.println(gps.getLatitude());
      Serial.write("Longitude: ");
      Serial.println(gps.getLongitude());
      Serial.write("Date: ");
      Serial.println(gps.getDate());
      Serial.write("Time: ");
      Serial.println(gps.getTime());
    }
  }else{
    Serial.println("No valid fix available");
  }
}
}

void loop(){}
</code>


