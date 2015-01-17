char val; // variable to receive data from the serial port
int ledpin = 8; // LED connected to pin 48 (on-board LED)
int ledpinmr = 9;
int ledpinml = 10;
int ledpinm1r = 11;
int ledpinm1l = 12;

void setup(){
  pinMode(ledpin, OUTPUT);  // pin 48 (on-board LED) as OUTPUT
  pinMode(ledpinmr,OUTPUT);
  pinMode(ledpinml,OUTPUT);
  pinMode(ledpinm1r,OUTPUT);
  pinMode(ledpinm1l,OUTPUT);
  Serial.begin(9600);   
  Serial1.begin(9600);   // start serial communication at 9600bps
  
}

void loop(){
  
  if( Serial1.available())       // if data is available to read
  {
    val = Serial1.read();     // read it and store it in 'val'
    Serial.print(val); 
  }
    
  switch (val) {
    
    case '1' :
          digitalWrite(ledpinml, LOW); 
          digitalWrite(ledpinmr, LOW); 
    
          digitalWrite(ledpinm1r, LOW);
          digitalWrite(ledpinm1l, LOW);
    break;
    
    case '2' :
          digitalWrite(ledpinm1r, HIGH);
          digitalWrite(ledpinm1l, LOW);
    
    break;
    
    case '3':
        digitalWrite(ledpinm1l, HIGH);
        digitalWrite(ledpinm1r, LOW);
    break;
    
    case '4' :
      digitalWrite(ledpinml, HIGH); 
     // analogWrite(ledpinml, 100);
      digitalWrite(ledpinmr, LOW); 
    
    break;
    
    case '5' :
    
          digitalWrite(ledpinml, HIGH); 
          digitalWrite(ledpinmr, LOW);  
          
          digitalWrite(ledpinm1r, HIGH);
          digitalWrite(ledpinm1l, LOW);
    
    break;
    
    case '6' :
          digitalWrite(ledpinml, HIGH); 
          digitalWrite(ledpinmr, LOW); 
          
         digitalWrite(ledpinm1l, HIGH);
        digitalWrite(ledpinm1r, LOW);
    
    break;
    
    case '7' :
          digitalWrite(ledpinmr, HIGH);
          digitalWrite(ledpinml, LOW);  
    
    break;
    
     case '8' :
          digitalWrite(ledpinmr, HIGH);
          digitalWrite(ledpinml, LOW);   
          digitalWrite(ledpinm1r, HIGH);
          digitalWrite(ledpinm1l, LOW);
    break;
    
    case '9' :
        digitalWrite(ledpinmr, HIGH);
        digitalWrite(ledpinml, LOW);   
        digitalWrite(ledpinm1l, HIGH);
        digitalWrite(ledpinm1r, LOW);
    break;
   
   /* case 'U':    // your hand is on the sensor
    digitalWrite(ledpinmr, HIGH);
    digitalWrite(ledpinml, LOW);  
    break;
    
    case 'B':    // your hand is on the sensor
    digitalWrite(ledpinml, HIGH); 
    digitalWrite(ledpinmr, LOW); 
    break;
    
    case 'R':    // your hand is on the sensor
    digitalWrite(ledpinm1r, HIGH);
    digitalWrite(ledpinm1l, LOW);
    break;
    
    case 'L':    // your hand is on the sensor
    digitalWrite(ledpinm1l, HIGH);
    digitalWrite(ledpinm1r, LOW);
    break;
    
     case 'X':    // your hand is on the sensor
     digitalWrite(ledpinm1l, LOW); 
     digitalWrite(ledpinm1r, LOW); 
     break;
    
    case 'V':    // your hand is on the sensor
    digitalWrite(ledpinml, LOW); 
    digitalWrite(ledpinmr, LOW);
    break;
    
    case '6':    // your hand is on the sensor
    digitalWrite(ledpinmr, HIGH);
    digitalWrite(ledpinml, LOW);  
    
    digitalWrite(ledpinm1l, HIGH);
    digitalWrite(ledpinm1r, LOW);
    break;
    
    case '7':    // your hand is on the sensor
    digitalWrite(ledpinmr, HIGH);
    digitalWrite(ledpinml, LOW);
    
    digitalWrite(ledpinm1r, HIGH);
    digitalWrite(ledpinm1l, LOW);
    break;
    
    case '8':
    digitalWrite(ledpinml, HIGH); 
    digitalWrite(ledpinmr, LOW);   
    
    digitalWrite(ledpinm1l, HIGH);
    digitalWrite(ledpinm1r, LOW);
    break;
    
    case '9':    // your hand is on the sensor
    digitalWrite(ledpinml, HIGH); 
    digitalWrite(ledpinmr, LOW); 
    
    digitalWrite(ledpinm1r, HIGH);
    digitalWrite(ledpinm1l, LOW);
    break;
       case '4':    // your hand is on the sensor
    digitalWrite(ledpinml, LOW); 
    digitalWrite(ledpinmr, LOW); 
    
    digitalWrite(ledpinm1r, LOW);
    digitalWrite(ledpinm1l, LOW);
    break;
    
     case '2':    // your hand is on the sensor
    digitalWrite(ledpinmr, HIGH);
    digitalWrite(ledpinml, LOW);  
    
    digitalWrite(ledpinm1r, LOW);
    digitalWrite(ledpinm1l, LOW);
    break;
    
     case '3':    // your hand is on the sensor
   digitalWrite(ledpinml, HIGH); 
    digitalWrite(ledpinmr, LOW); 
    
    digitalWrite(ledpinm1r, LOW);
    digitalWrite(ledpinm1l, LOW);
    break;
    */
    
  }
}
