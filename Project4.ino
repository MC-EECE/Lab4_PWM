const int MAX_8_INT = 255;
int brightness;
int fade_amount;
int pot;
int pot_scale;

void setup() {
  // put your setup code here, to run once:
brightness = 0; 
fade_amount = 1; 
analogReadResolution(12);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(LED_BUILTIN, pot_scale); 
brightness = brightness + fade_amount; 
if (brightness == 0 or brightness == MAX_8_INT)
{
fade_amount = -fade_amount; 
}
delay(100);
pot = analogRead(A0); 
pot_scale= pot / 16;

}
