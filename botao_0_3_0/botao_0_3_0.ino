/*   Botao_0_3_0
 * 
 * Atividade 6
 * 
 *  O código faz com que cada botão controle 1 led. 
 *  
 * 
 *  Componentes:
 *  
 *  - Arduino UNO CP2102
 *  - 3 Leds (Vermelho, Amarelo e Verde)
 *  - 3 Resistores de 270Ω
 *  - Jumpers diversos
 *  - 3 push buttons de 2 pinos.
 *  
 *  Conexão Arduino:
 *  
 *  Push 1:
 *  
 *  - Led Vermelho (5)  - Jumper Branco
 *  - Botão 1      (8)  - Jumper Roxo 
 *  
 *  Push 2:
 *  
 *  - Led Amarelo  (6)  - Jumper Laranja
 *  - Botão 2      (9)  - Jumper Vermelho
 *  
 *  Push 3: 
 *  
 *  - Led Verde    (7)  - Jumper Marrom
 *  - Botão 3      (10) - Jumper Branco  
 * 
 * 
 *  0.0.0 --> Comentário com as especificações de componentes utilizados.
 *  
 *  0.1.0 --> Acrescentando #define para cada pino
 *            Adaptando o pinMode para cada LED e botão
 *            Acrescentando no comentário as conexões do arduino
 *            
 *  0.2.0 --> Colocando if e else no loop.         
 *  
 *  0.3.0 --> Acrescentando comentários finais
 *        
 * 
 *  11/09/2021 
 * Andressa Mikaela Padilha
 */


// --> Apelidos <-- 

//Push 1

#define led1 5
#define botao1 8

//Push 2

#define led2 6
#define botao2 9
 
//Push 3

#define led3 7
#define botao3 10


// A função de setup é executada uma vez quando você pressiona reset ou liga a placa
void setup() {

 //Push 1
 pinMode(led1,OUTPUT);            //inicializa o pino do led1 como saída
 pinMode(botao1,INPUT_PULLUP);    //inicializa o pino do botão1 como entrada

 //Push 2
 pinMode(led2,OUTPUT);            //inicializa o pino do led2 como saída
 pinMode(botao2,INPUT_PULLUP);    //inicializa o pino do botão2 como entrada

 //Push 3
 pinMode(led3,OUTPUT);            //inicializa o pino do led3 como saída
 pinMode(botao3,INPUT_PULLUP);    //inicializa o pino do botão3 como entrada
}


// a função loop executa de repetidamente de forma infinita
void loop() {
  
  //Push 1
  if (digitalRead(botao1) == LOW) {       
    digitalWrite(led1, HIGH); //Coloca a saída em nível alto para ligar o led
  } else {
    digitalWrite(led1, LOW);  //Coloca a saída em nivel baixo para desligar o led
  }

  //Push 2
  if (digitalRead(botao2) == LOW) {
    digitalWrite(led2, HIGH); //Coloca a saída em nível alto para ligar o led
  } else {
    digitalWrite(led2, LOW);  //Coloca a saída em nivel baixo para desligar o led
  }
  
  //Push 3
   if (digitalRead(botao3) == LOW) {
    digitalWrite(led3, HIGH); //Coloca a saída em nível alto para ligar o led
  } else {
    digitalWrite(led3, LOW);  //Coloca a saída em nivel baixo para desligar o led
  }
}
