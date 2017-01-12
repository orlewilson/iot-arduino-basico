/*
  Curso de Extensao: Programando para IoT com Arduino – Basico
  Professor:         Dr. Orlewilson Bentes Maia
  Data:              26/11/2016
  Descricao:         Elaborar um projeto em Arduino para ligar e desligar um LED (exemplo 01)
*/
 
// Porta digital no qual sera colocado um LED para ser ligado e desligado
int led = 13;

// Funcao para configurar o Arduino
void setup() {                

  // Indica qual porta digital sera utilizada como saida (ligar/desligar um LED)
  pinMode(led, OUTPUT);     
}

// Funcao principal do Arduino que ficara em loop infinito
void loop() {
  // Funcao do Arduino para ligar o LED (colocar nivel alto, ou seja, 5V)
  digitalWrite(led, HIGH);

  // Funcao do Arduino para parar durante um certo tempo em milisegundos (ms)
  delay(1000); // 1 segundo

  // Funcao do Arduino para desligar o LED (colocar nivel baixo, ou seja, 0V)  
  digitalWrite(led, LOW);
  
  // Funcao do Arduino para parar durante um certo tempo em milisegundos (ms)
  delay(1000); // 1 segundo
}
