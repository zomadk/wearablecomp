
int buzz1 = 10;
int buzz2 = 11;
int buzz3 = 12;
char myCol[20];

void setup() {  
   Serial.begin (9600);  
   pinMode(buzz1, OUTPUT);    
   pinMode(buzz2, OUTPUT);   
   pinMode(buzz3, OUTPUT);   
  
   digitalWrite(buzz1, LOW);
   digitalWrite(buzz2, LOW);
   digitalWrite(buzz3, LOW); 
 
}


void loop() {
  int lf = 10;
  Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"r")==0){
       digitalWrite(buzz3, HIGH);       
       digitalWrite(buzz2, LOW);   
       digitalWrite(buzz1, LOW);
   }
  if(strcmp(myCol,"y")==0){
       digitalWrite(buzz3, LOW);       
       digitalWrite(buzz2, HIGH);   
       digitalWrite(buzz1, LOW); 
   }
  if(strcmp(myCol,"g")==0){
       digitalWrite(buzz3, LOW);       
       digitalWrite(buzz2, LOW);   
       digitalWrite(buzz1, HIGH); 
   }

   if(strcmp(myCol,"f")==0){
       digitalWrite(buzz3, LOW);       
       digitalWrite(buzz2, LOW);   
       digitalWrite(buzz1, LOW); 
   }
}

