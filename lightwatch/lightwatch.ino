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

 val = analogRead(photo);

if(secs == 60) {
	mins = mins + 1;
        secs = 0;
 	if(mins == 60) {
 		hours = hours + 1;
                mins = 0;
 			if(hours == 24) {
 				days = days + 1;
                                hours = 0;
 				}
 		}
 }	
 			
 delay(1000);

 if (val > 512) //We don't know how much light a flashlight emits, so this will be changed later
  secs = secs + 1;

Serial.println(secs);
Serial.println("seconds");
Serial.println(mins);
Serial.println("minutes");
Serial.println(hours);
Serial.println("hours");
Serial.println(days);
Serial.println("days");
Serial.println("==============================");
}
