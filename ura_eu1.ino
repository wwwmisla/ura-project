/*******************************************************************************
*
*  Projeto - Nome do Projeto
*  Criado por: Artur, Anne e Misla
*  
*
*  
*
*******************************************************************************/

// Vamos começar definindo as notas para os sons.
#define ton_do 241
#define ton_re 294
#define ton_mi 329
#define ton_fa 349
#define ton_sol 392
#define ton_la 440
#define ton_si 493

/*
 * Indica o pino de áudio, leds e botões.
 * A ordem destas
 * sequências estão relacionadas a ordem dos tons.
 */
int pino_audio 		= 9;

int led_vermelho 	= 10;
int led_verde 		= 11;

int bt_do		 	= 2;
int bt_re 			= 3;
int bt_mi 			= 4;
int bt_fa 			= 5;
int bt_sol 			= 6;
int bt_la 			= 7;
int bt_si 			= 8;

int bt_ligar 		= 12;
int bt_desligar 	= 13;

/*
 * É necessário criar um array para quando for sortear um som.
 * Sequência de itens.
 * Indica a rodada atual que o jogo se encontra.
 * Indica o passo atual dentro da sequência, é usado enquanto a sequência está sendo reproduzida.
 */

int tons[7] = {ton_do, ton_re, ton_mi, ton_fa, ton_sol, ton_la, ton_si};
int sequencia[100] = {};
int rodada_atual = 0;
int passo_atual_na_sequencia = 0;

// Indica se um botão foi pressionado durante o loop principal.
int botao_pressionado = 0;
// Flag indicando se o jogo acabou.
int perdeu_o_jogo = false;

void setup()
{
  pinMode(led_vermelho, OUTPUT);	// Led Vermelho
  pinMode(led_verde, OUTPUT);		// Led Verde
  
  pinMode(pino_audio, OUTPUT); 		// Pino do buzzer
  
  pinMode(bt_do, INPUT); 			// Botão da nota Dó
  pinMode(bt_re, INPUT); 			// Botão da nota Ré
  pinMode(bt_mi, INPUT); 			// Botão da nota Mi
  pinMode(bt_fa, INPUT); 			// Botão da nota Fa
  pinMode(bt_sol, INPUT); 			// Botão da nota Sol
  pinMode(bt_la, INPUT); 			// Botão da nota La
  pinMode(bt_si, INPUT); 			// Botão da nota Si
  
  pinMode(bt_ligar, INPUT);			// Botão de ligar o jogo
  pinMode(bt_desligar, INPUT); 		// Botão de desligar o jogo
  
  // Inicializando o random através de uma leitura da porta analógica.
  // Esta leitura gera um valor variável entre 0 e 1023.
  randomSeed(analogRead(0));
}

void loop()
{
  // Tocar um som de início para anúnicar que o jogo está começando quando é a primeira rodada.
  if (rodada_atual == 0) {
    somInicio();
    delay(500);
  }
  
  // Chamar a função que inicializa a próxima rodada.
  
  
  // Reproduzir a sequência atual.
  
  
  // Aguarda os botões serem pressionados pela criança participante.
 
  
  // Aguarda 2 segundo entre cada jogada da criança.
  
  // Se perdeu o jogo reinicializamos todas as variáveis.
  
  
}

// Sorteia um novo item e adiciona na sequência.


// Reproduz a sequência para ser memorizada.


// Aguarda a criança iniciar sua jogada.
    

// Aguardar jogada da criança


// Game Over


// Tocar som de início
void somInicio(){  
  
  for (int i = 0; i < 2; i++) { 
  tone(pino_audio, tons[0]);
  digitalWrite(led_vermelho, HIGH);
  digitalWrite(led_verde, HIGH);
  delay(200);
    
  tone(pino_audio, tons[1]);
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_verde, LOW);
  delay(200);
    
  tone(pino_audio, tons[2]);
  digitalWrite(led_vermelho, HIGH);
  digitalWrite(led_verde, HIGH);
  delay(200);
    
  tone(pino_audio, tons[3]);
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_verde, LOW);
  delay(200);
    
  tone(pino_audio, tons[4]);
  digitalWrite(led_vermelho, HIGH);
  digitalWrite(led_verde, HIGH);
  delay(200);
    
  tone(pino_audio, tons[5]);
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_verde, LOW);
  delay(200);
    
  tone(pino_audio, tons[6]);
  digitalWrite(led_vermelho, HIGH);
  digitalWrite(led_verde, HIGH);
  delay(200);
    
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_verde, LOW);
  delay(500);
    
  noTone(pino_audio);
    
  } 
}