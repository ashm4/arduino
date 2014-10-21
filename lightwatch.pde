//For my science project
int photo = A4;

int val = 0;

int time = 0;

void setup() {

 pinMode(photo, INPUT); //pin 4 is a photoresistor, which detects light
 Serial.begin(9600);

}

void loop() {

 analogRead(photo);

 delay(10);

 if (val > 512) //We don't know how much light a flashlight emits, so this will be changed later
  time = time + 1;

Serial.write(time);
}
