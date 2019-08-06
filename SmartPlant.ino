int goodMoisture = 300; //initialize the good moisture as 300

void setup() {
  //put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);        //initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);

}

void loop() {
  //put your main code here, to run repeatedly:
  
  int sensorValue = analogRead(0);    //connect sensor to Analog 0
  Serial.print("Sensor value : "); 
  Serial.println(sensorValue);        //print the value to serial port

  if(sensorValue > goodMoisture){     //if condition started
     digitalWrite(LED_BUILTIN, LOW); //if the condition true led will turn off
    }else{
     digitalWrite(LED_BUILTIN, HIGH);  //if the condition false led will turn on
    }          
                                      //if condition finished

   delay(1000);                       //wait for a second

}
