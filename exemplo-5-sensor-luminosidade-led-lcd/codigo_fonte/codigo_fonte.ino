/*
  Curso de Extensao: Programando para IoT com Arduino – Basico
  Professor:         Dr. Orlewilson Bentes Maia
  Data Criacao:      03/12/2016
  Data Atualizao:    05/09/2017
  Descricao:         Lendo valor do sensor de luminosidade, ligando/desligando LED e 
                     mostrando no LCD
*/
 
//Biblioteca para trabalhar com LCD (LiquidCrystal)
#include <LiquidCrystal.h>

// Porta digital no qual sera colocado um LED para ser ligado e desligado
int led = 13;

// Porta analogica no qual sera lido o valor do sensor de luminosidade
int luminosidade = A0;

// Variavel para armazenar o valor lido do sensor de luminosidade
int valorLuminosidade = 0;

// Variavel para armazenar o estado do LED (on - ligada, off - desligada)
String statusLed = "off";

// Definicao dos pinos que serão utilizados para ligar o LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

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

  // Configura o LCD (numero de colunas e linhas, respectivamente)
  lcd.begin(16, 2);
  
  // Indica qual porta digital sera utilizada como saida (ligar/desligar um LED)
  pinMode(led, OUTPUT);  

}
 
// Funcao principal do Arduino que ficara em loop infinito
void loop() {
  
  // limpa o LCD
  lcd.clear();

  // ler o valor atual do sensor de luminosidade
  // o valor varia entre 0 (escuro) e 1023 (claro)
  valorLuminosidade = analogRead(luminosidade);
    
  // posiciona o cursor na coluna 0, linha 0;
  lcd.setCursor(0, 0);
  
  // imprime o texto entre aspas para o LCD
  lcd.print("Sensor: " + String(valorLuminosidade));

  // se o valor for menor que 300, ligara o LED
  if (valorLuminosidade < 300){
    ligarLed();
    statusLed = "on";
  } else {
    desligarLed();
    statusLed = "off";
  }
  
  // posiciona o cursor na coluna 0, linha 1;
  lcd.setCursor(0, 1);
  lcd.print("Lamp: " + statusLed);
  
  delay(500);
   
}
