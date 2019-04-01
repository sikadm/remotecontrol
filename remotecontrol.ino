
//include appropriate libraries
// assign pins variable names
#define BUTTON 1
#define IR_LED A5
#define PHOTODIODE 7

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(IR_LED, OUTPUT);
  pinMode(PHOTODIODE, INPUT);
}

void loop() {
//if button pressed
  if (BUTTON == HIGH){
  //while photodiode low --> receiver has not said it received
    while (PHOTODIODE == LOW){
    //send signal using protocol-- RC-5 power 
      digitalWrite(IR_LED, HIGH);
      delay(2.4);
      digitalWrite(IR_LED, LOW);
      delay(0.6);
      digitalWrite(IR_LED, HIGH);
      delay(1.2);
      digitalWrite(IR_LED, LOW);
      delay(0.6);
      digitalWrite(IR_LED, HIGH);
      delay(0.6);
      digitalWrite(IR_LED, LOW);
      delay(0.6);
      digitalWrite(IR_LED, HIGH);
      delay(1.2);
      digitalWrite(IR_LED, LOW);
      delay(0.6);
      digitalWrite(IR_LED, HIGH);
      delay(0.6);
      digitalWrite(IR_LED, LOW);
      delay(0.6);
      digitalWrite(IR_LED, HIGH);
      delay(1.2);
      digitalWrite(IR_LED, LOW);
      delay(0.6);
      digitalWrite(IR_LED, HIGH);
      delay(0.6);
      digitalWrite(IR_LED, LOW);
      delay(0.6);
      digitalWrite(IR_LED, HIGH);
      delay(0.6);
      digitalWrite(IR_LED, LOW);
      delay(0.6);
      digitalWrite(IR_LED, HIGH);
      delay(1.2);
      digitalWrite(IR_LED, LOW);
      delay(0.6);
      digitalWrite(IR_LED, HIGH);
      delay(0.6);
      digitalWrite(IR_LED, LOW);
      delay(0.6);
      digitalWrite(IR_LED, HIGH);
      delay(0.6);
      digitalWrite(IR_LED, LOW);
      delay(0.6);
      digitalWrite(IR_LED, HIGH);
      delay(0.6);
      digitalWrite(IR_LED, LOW);
      delay(0.6);
      digitalWrite(IR_LED, HIGH);
      delay(0.6);
      digitalWrite(IR_LED, LOW);
      delay(270);
    }
  }


/*once photodiode confirms the message has been received,
 * the IR LED will stop transmitting the message
 */
 
}
