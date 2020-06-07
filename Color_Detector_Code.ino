#define LDR A4 //LDR pin
int R = 5; //Red color pin of LED
int G = 4; //Green color pin of LED
int B = 3; //Blue color pin of LED
int colour_sensor;
void setup() {
    pinMode(R, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(B, OUTPUT);
    Serial.begin(9600);
}
void loop() {
  colour_sensor = analogRead(LDR);
    {
    if (colour_sensor>=262 && colour_sensor<=268)
    {
      digitalWrite(B,HIGH);
      }
            else
      {
        digitalWrite(B,LOW);
        }
    }
    delay(75);
    {
      if (colour_sensor>=255 && colour_sensor<=261)
    {
      digitalWrite(R,HIGH);
      }
    else
      {
        digitalWrite(R,LOW);
        }
    }
    delay(75);
    {
      if (colour_sensor>=400 && colour_sensor<=425)
    {
      digitalWrite(G,HIGH);
      }
      else
      {
        digitalWrite(G,LOW);
        }
    }
    delay(75);
    Serial.println(colour_sensor);
}
