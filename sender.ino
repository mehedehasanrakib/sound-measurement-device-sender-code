
int num_Measure = 128 ; // Set the number of measurements +++  
int pinSignal = A0; // pin connected to pin O module sound sensor  
long level = 0 ;
long Sound_signal;    // Store the value read Sound Sensor   
long sum = 0 ; // Store the total value of n measurements   
int dB;
 void setup ()  
{   
  pinMode (pinSignal, INPUT); // Set the signal pin as input   
  Serial.begin (9600); 
}

void loop ()
{ 
for ( int i = 0 ; i <num_Measure; i ++)  
  {  
   Sound_signal = analogRead (pinSignal);  
    sum =sum + Sound_signal;  
  } 
   level = sum / num_Measure; // Calculate the average value 
  dB = (level+83.2073) / 11.003;
     
  Serial.print (dB);

  
   Serial.print(";");
   
  delay(500);
 sum=0;
  
    }
   
