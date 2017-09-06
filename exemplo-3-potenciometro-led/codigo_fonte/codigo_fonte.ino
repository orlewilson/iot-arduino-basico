/*
  Curso de Extensao: Programando para IoT com Arduino – Basico
  Professor:         Dr. Orlewilson Bentes Maia
  Data Criacao:      03/12/2016
  Data Atualizao:    05/09/2017
  Descricao:         Utilizando potenciometro para ligar/desligar LED (exemplo 03)
*/
 
// Porta digital no qual sera colocado um LED para ser ligado e desligado
int led = 13;

// Porta analgica no qual sera lido o valor do potenciometro
int potenciometro = A0;

// Variavel para armazenar o valor lido do potenciometro
int valorPotenciometro = 0;

// Funcao para ligar o LED
void ligarLed(){
  digitalWrite(led, HIGH);
}

// Funcao para desligar o LED
void desligarLed(){
  digitalWrite(led, LOW);
}


// Funcao para configurar o Arduino
void setup() {                

  // Indica qual porta digital sera utilizada como saida (ligar/desligar um LED)
  pinMode(led, OUTPUT);     
}

// Funcao principal do Arduino que ficara em loop infinito
void loop() {
  
  
  // ler o valor atual do potenciometro
  // o valor varia entre 0 e 1023
  valorPotenciometro = analogRead(potenciometro);
  
  // se o valor for maior que 500, ligara o LED
  if (valorPotenciometro > 500){
    ligarLed();
  } else {
    desligarLed();
  }
}

