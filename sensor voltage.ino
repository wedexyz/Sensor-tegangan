int analogInput = A1;
float vout = 0.0;
float vin = 0.0;
float vr = 0.0;
float R1 = 30000.0; //
float R2 = 7500.0; //
int value = 0;

void setup()
{
pinMode(analogInput, INPUT);
Serial.begin(9600);

}

void loop()
{
// read the value at analog input
value = analogRead(analogInput);
vout = (value * 5.0) / 1024.0;
vin = vout / (R2/(R1+R2));
vr =24.98 -vin;

Serial.println(vr,2);
delay(500);
}
