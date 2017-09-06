/*
  Curso de Extensao: Programando para IoT com Arduino – Basico
  Professor:         Dr. Orlewilson Bentes Maia
  Data Criacao:      03/12/2016
  Data Atualizao:    05/09/2017
  Descricao:         Utilizando sensor de luminosidade para ligar/desligar LED (exemplo 04)
*/
 
// Porta digital no qual sera colocado um LED para ser ligado e desligado
int led = 13;

// Porta analogica no qual sera lido o valor do sensor de luminosidade
int luminosidade = A0;

// Variavel para armazenar o valor lido do sensor de luminosidade
int valorLuminosidade = 0;

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

  // Indica que utilizara a porta serial para imprimir
  Serial.begin(9600);
  
}

// Funcao principal do Arduino que ficara em loop infinito
void loop() {
  
  
  // ler o valor atual do potenciometro
  // o valor varia entre 0 (escuro) e 1023 (claro)
  valorLuminosidade = analogRead(luminosidade);
  
  // imprime na porta serial o valor do sensor de luminosidade
  Serial.println(valorLuminosidade);
  
  // se o valor for menor que 300, ligara o LED
  if (valorLuminosidade < 300){
    ligarLed();
  } else {
    desligarLed();
  }
}

