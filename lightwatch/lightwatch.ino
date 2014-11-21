//For my science project
int photo = A4;

int val = 0;

int secs = 0;
int mins = 0;
int hours = 0;
int days = 0;

void setup() {

 pinMode(photo, INPUT); //pin 4 is a photoresistor, which detects light
 Serial.begin(9600);

}

void loop() {

 analogRead(photo);

if(secs == 60) {
	mins = mins + 1;
 	if(mins == 60) {
 		hours = hours + 1;
 			if(hours == 24) {
 				days = days + 1;
 				}
 		}
 }	
 			
 delay(10);

 if (val > 512) //We don't know how much light a flashlight emits, so this will be changed later
  secs = secs + 1;

Serial.print(secs);
Serial.print(" seconds");
Serial.println(mins);
Serial.print(" minutes");
Serial.println(hours);
Serial.print(" hours");
Serial.println(days);
Serial.print(" days");
Serial.println("==============================");
}
