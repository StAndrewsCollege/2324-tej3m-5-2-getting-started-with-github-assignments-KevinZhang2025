void setup() {
 pinMode(12,OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(4,OUTPUT);
  //bar 1
 tone(4,311.13,500);
 delay(500);
 tone(4,622.25,500);
 delay(500);
 tone(4,554.37,1000);
 delay(1000);
 //bar2
 tone(4,493.88,750);
 delay(500);
 tone(4,554.37,500);
 delay(250);
 tone(4,493.88,250);
 delay(250);
 tone(4,554.37,250);
 delay(250);
 tone(4,622.25,250);
 delay(250);
 delay(1000);
 //bar 3
 tone(4,622.25,500);
 delay(500);
 tone(4,554.37,1000);
 delay(1000);
 //bar 4
 tone(4,493.88,750);
 delay(500);
 tone(4,554.37,500);
 delay(250);
 tone(4,493.88,250);
 delay(250);
 tone(4,466.16,500);
 //bar 5
 delay(250);
 delay(1000);
 tone(4,622.25,500);
 delay(500);
 tone(4,554.37,1000);
 delay(1000);
 // bar 6
 tone(4,493.88,750);
 delay(500);
 tone(4,554.37,500);
 delay(250);
 tone(4,493.88,250);
 delay(250);
 tone(4,554.37,250);
 delay(250);
 tone(4,622.25,250);
 delay(250);
 //bar 7
 delay(750);
 tone(4,392.00,500);
 delay(500);
 tone(4,415.30,500);
 delay(500);
 tone(4,466.16,500);
 delay(500);
 //bar 8
 tone(4,554.37,375);
 delay(375);
 tone(4,622.25,375);
 delay(375);
 tone(4,523.25,750);
 delay(750);
 tone(4,466.16,250);
 delay(250);
 tone(4,466.16,250);
 delay(250);
 //bar 9+10
 tone(4,622.25,250);
 delay(250);
 tone(4,622.25,750);
 delay(750);
 tone(4,466.16,500);
 delay(500);
 tone(4,622.25,250);
 delay(250);
 tone(4,698.46,1500);
 delay(1500);
 tone(4,622.25,250);
 delay(250);
 tone(4,698.46,250);
 delay(250);
 // bar 11
 tone(4,830.61,500);
 delay(500);
 tone(4,783.99,250);
 delay(250);
 tone(4,622.25,1500);
 delay(1500);
 // bar 12
 tone(4,415.30,250);
 delay(250);
 tone(4,415.30,500);
 delay(500);
 //four eighth notes
 tone(4,466.16,250);
 delay(250);
 tone(4,466.16,250);
 delay(250);
 tone(4,466.16,250);
 delay(250);
 tone(4,466.16,250);
 delay(250);
 // bar 13
 tone(4,622.25,250);
 delay(250);
 tone(4,622.25,750);
 delay(750);
 tone(4,466.16,500);
 delay(500);
 tone(4,622.25,250);
 delay(250);
 tone(4,698.46,750);
 delay(750);
 // bar 14
 tone(4,698.46,500);
 delay(500);
 tone(4,830.61,500);
 delay(500);
 tone(4,783.99,500);
 delay(500);
 // bar 15
 tone(4,698.46,250);
 delay(250);
 tone(4,622.25,250);
 delay(250);
 tone(4,698.46,250);
 delay(250);
 tone(4,622.25,1250);
 delay(1250);
 //set up
 pinMode(13, OUTPUT);
Serial.begin(9600);
}
//lights
void loop() {
 // bar 1
 int lightvalue = analogRead(A1);
Serial.print(lightvalue);
delay(1);
}