/* 4 pin connectors connection -
 *  Vin - 1
 *  Gnd - 2
 *  SDA - 3
 *  SCL - 4
 */
#include <SoftwareSerial.h>
#include <Adafruit_MLX90614.h>
//SoftwareSerial BTserial(2,3); // for nano
SoftwareSerial BTserial(10,11); 

int sensorValue = 0;
Adafruit_MLX90614 mlx = Adafruit_MLX90614();
void setup() {
mlx.begin(); 
BTserial.begin(9600); 
Serial.begin(9600);}
void loop() {

//Serial.println(mlx.readAmbientTempF(),1);
BTserial.print(mlx.readObjectTempF()+3,1);
Serial.println(mlx.readObjectTempF()+3,1);
BTserial.print(" ");

//message to the receiving device

//delay(2000);
delay(60000);

}
