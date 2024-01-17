// Esse é um projeto para arduino!

#define bot 8    // botão
#define led_g 10 // led verde
#define led_y 11 // led amarelo
#define led_r 12 // led vermelho
#define _A 0     // pinos do display de 7 segmentos
#define _B 1      
#define _C 2
#define _D 3
#define _E 4
#define _F 5
#define _G 6
#define TEMPO 1000 // temporizador
#define TEMPOP 500

void setup() {
    pinMode(bot, INPUT_PULLUP);
    pinMode(led_r, OUTPUT);
    pinMode(led_g, OUTPUT);
    pinMode(led_y, OUTPUT);
    pinMode(_A, OUTPUT);
    pinMode(_B, OUTPUT);
    pinMode(_C, OUTPUT);
    pinMode(_D, OUTPUT);
    pinMode(_E, OUTPUT);
    pinMode(_F, OUTPUT);
    pinMode(_G, OUTPUT);
}

void loop() {
    digitalWrite(led_g, 1);
    if(digitalRead(bot) == 0) {
      digitalWrite(led_g, 0);
      digitalWrite(led_y, 1);
      delay(3000);
      digitalWrite(led_y, 0);
      digitalWrite(led_r, 1);          
      display7seg();
      digitalWrite(led_r, 0);
    }
}

void display7seg() {
      digitalWrite(_A, 1);    //9
      digitalWrite(_B, 1);
      digitalWrite(_C, 1);
      digitalWrite(_D, 1);
      digitalWrite(_E, 0);
      digitalWrite(_F, 1);
      digitalWrite(_G, 1);
      delay(TEMPO);

      digitalWrite(_A, 1);    //8
      digitalWrite(_B, 1);
      digitalWrite(_C, 1);
      digitalWrite(_D, 1);
      digitalWrite(_E, 1);
      digitalWrite(_F, 1);
      digitalWrite(_G, 1);
      delay(TEMPO);

      digitalWrite(_A, 1);    //7
      digitalWrite(_B, 1);
      digitalWrite(_C, 1);
      digitalWrite(_D, 0);
      digitalWrite(_E, 0);
      digitalWrite(_F, 0);
      digitalWrite(_G, 0);
      delay(TEMPO);

      digitalWrite(_A, 1);    //6
      digitalWrite(_B, 0);
      digitalWrite(_C, 1);
      digitalWrite(_D, 1);
      digitalWrite(_E, 1);
      digitalWrite(_F, 1);
      digitalWrite(_G, 1);
      delay(TEMPO);

      digitalWrite(_A, 1);    //5
      digitalWrite(_B, 0);
      digitalWrite(_C, 1);
      digitalWrite(_D, 1);
      digitalWrite(_E, 0);
      digitalWrite(_F, 1);
      digitalWrite(_G, 1);
      delay(TEMPO);

      digitalWrite(_A, 0);    //4
      digitalWrite(_B, 1);
      digitalWrite(_C, 1);
      digitalWrite(_D, 0);
      digitalWrite(_E, 0);
      digitalWrite(_F, 1);
      digitalWrite(_G, 1);
      delay(TEMPOP);

      digitalWrite(_A, 0);    //BLANCK
      digitalWrite(_B, 0);
      digitalWrite(_C, 0);
      digitalWrite(_D, 0);
      digitalWrite(_E, 0);
      digitalWrite(_F, 0);
      digitalWrite(_G, 0);
	    delay(TEMPOP);

      digitalWrite(_A, 1);    //3
      digitalWrite(_B, 1);
      digitalWrite(_C, 1);
      digitalWrite(_D, 1);
      digitalWrite(_E, 0);
      digitalWrite(_F, 0);
      digitalWrite(_G, 1);
      delay(TEMPOP);

      digitalWrite(_A, 0);    //BLANCK
      digitalWrite(_B, 0);
      digitalWrite(_C, 0);
      digitalWrite(_D, 0);
      digitalWrite(_E, 0);
      digitalWrite(_F, 0);
      digitalWrite(_G, 0);
  	  delay(TEMPOP);

      digitalWrite(_A, 1);    //2
      digitalWrite(_B, 1);
      digitalWrite(_C, 0);
      digitalWrite(_D, 1);
      digitalWrite(_E, 1);
      digitalWrite(_F, 0);
      digitalWrite(_G, 1);
      delay(TEMPOP);

      digitalWrite(_A, 0);    //BLANCK
      digitalWrite(_B, 0);
      digitalWrite(_C, 0);
      digitalWrite(_D, 0);
      digitalWrite(_E, 0);
      digitalWrite(_F, 0);
      digitalWrite(_G, 0);
      delay(TEMPOP);

      digitalWrite(_A, 0);    //1
      digitalWrite(_B, 1);
      digitalWrite(_C, 1);
      digitalWrite(_D, 0);
      digitalWrite(_E, 0);
      digitalWrite(_F, 0);
      digitalWrite(_G, 0);
      delay(TEMPOP);

      digitalWrite(_A, 0);    //BLANCK
      digitalWrite(_B, 0);
      digitalWrite(_C, 0);
      digitalWrite(_D, 0);
      digitalWrite(_E, 0);
      digitalWrite(_F, 0);
      digitalWrite(_G, 0);
	    delay(TEMPOP);

      digitalWrite(_A, 1);    //0
      digitalWrite(_B, 1);
      digitalWrite(_C, 1);
      digitalWrite(_D, 1);
      digitalWrite(_E, 1);
      digitalWrite(_F, 1);
      digitalWrite(_G, 0);
      delay(TEMPOP);

      digitalWrite(_A, 0);    //BLANCK
      digitalWrite(_B, 0);
      digitalWrite(_C, 0);
      digitalWrite(_D, 0);
      digitalWrite(_E, 0);
      digitalWrite(_F, 0);
      digitalWrite(_G, 0);
}