//switches  
const int switch_A = ;
const int switch_B = ;
const int switch_C = ;
const int switch_D = ;

//LEDS
const int LED_Green = ; //correspond w/switch_A
const int LED_Red = ; //correspond w/switch_B
const int LED_Blue =; //correspond w/switch_C
const int LED_Yellow =; //correspond w/switch_D

void setup() {
  // put your setup code here, to run once:
  //switch
  pinMode(switch_A, INPUT);
  pinMode(switch_B, INPUT);
  pinMode(switch_C, INPUT);
  pinMode(switch_D, INPUT);

  //LED
  pinMode(LED_Green, OUTPUT);
  pinMode(LED_Red, OUTPUT);
  pinMode(LED_Blue, OUTPUT);
  pinMode(LED_Yellow, OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
  digitalRead(switch_A);
  if (switch_D == 1 && switch_A ==switch_B switch_C)

}
