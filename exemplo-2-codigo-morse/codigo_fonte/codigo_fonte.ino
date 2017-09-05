/*
  Curso de Extensao: Programando para IoT com Arduino – Basico
  Professor:         Dr. Orlewilson Bentes Maia
  Data Criacao:      03/12/2016
  Data Atualizao:    05/09/2017
  Descricao:         Alterando o exemplo 01 (criar um Pisca LED) para gerar um codigo Morse (exemplo 02)
*/
 
// Porta digital no qual sera colocado um LED para ser ligado e desligado
int led = 13;

// Funcao para ligar o LED
void ligar(){
  digitalWrite(led, HIGH);
}

// Funcao para desligar o LED
void desligar(){
  digitalWrite(led, LOW);
}

// Funcao para simbolizar uma parada curta do codigo morse
void paradaCurta(){
  // Funcao do Arduino para parar durante um certo tempo em milisegundos (ms)
  delay(500);            
}

// Funcao para simbolizar uma longa curta do codigo morse
void paradaLonga(){
  // Funcao do Arduino para parar durante um certo tempo em milisegundos (ms)
  delay(1000);               
}

// Funcao para simbolizar uma ponto do codigo morse
void ponto(){
  ligar();
  paradaCurta();
  desligar();
  paradaCurta();
}

// Funcao para simbolizar uma traco do codigo morse
void traco(){
  ligar();
  paradaLonga();
  desligar();
  paradaLonga();
}

// Funcao para simbolizar uma mensagem de SOSO em codigo morse
void sos(){
  ponto();
  ponto();
  ponto();
  traco();
  traco();
  traco();
  ponto();
  ponto();
  ponto();
}

// Funcao para configurar o Arduino
void setup() {                

  // Indica qual porta digital sera utilizada como saida (ligar/desligar um LED)
  pinMode(led, OUTPUT);     
}

// Funcao principal do Arduino que ficara em loop infinito
void loop() {
  sos();  
}

