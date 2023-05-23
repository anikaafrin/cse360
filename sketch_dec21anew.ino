
int temp ;
int valtemp  ;
int hum ;
int valhum ;
int ph; 
int valph;

void setup ( ) {
  Serial.begin (9600);
  pinMode(A0, INPUT);
  pinMode (A1, INPUT);
  pinMode (A2, INPUT);
}
void loop ( ) {
  valtemp = analogRead (A0);
  temp = (valtemp*30) /1023;

valhum = analogRead (A1) ;
hum = map (valhum, 0,1023, 0, 100) ;

 valph = analogRead (A2);
ph = map (valph, 0, 1023, 14, 0) ;

 Serial.print (temp) ;
 Serial.print ("  ,  ") ;
 Serial.print (hum) ;
Serial.print (" ,  ") ;
 Serial.println(ph) ;

delay(1) ;
}
