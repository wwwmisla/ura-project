# Batma²m - URA 

<div style="display: inline_block">

#### Projeto: Batma²m do URA - Um Robô por Aluno
#### Desenvolvido por: 
- Artur;
- Anne; 
- Misla Wislaine.

[![Licence](https://img.shields.io/github/license/Ileriayo/markdown-badges?style=for-the-badge)](./LICENSE)
![Badge em Desenvolvimento](http://img.shields.io/static/v1?label=STATUS&message=EM%20DESENVOLVIMENTO&color=GREEN&style=for-the-badge)

<img src="https://github.com/wwwmisla/ura-project/blob/main/img/ura_logo.png" width="400px" align="right" />

## Índice
 
 - [Título e Imagem de capa](#batmam---ura)
 - [Descrição do projeto](#-descrição-do-projeto)
 - [Componentes Utilizados](#-componentes-utilizados)
 - [Tecnologias Utilizadas](#%EF%B8%8F-tecnologias-utilizadas)
 - [Como Fazer](#-como-fazer)
   - [Circuito](#%EF%B8%8F-explica%C3%A7%C3%A3o-circuito---hardware)
   - [Código](#-explica%C3%A7%C3%A3o-c%C3%B3digo---software)
 - [Como Jogar](#-como-jogar)
 - [Documentação do Projeto](#%EF%B8%8F-documenta%C3%A7%C3%A3o-do-projeto)
 - [Referências](#-referências)
</div>

## 📄 Descrição do Projeto

<p align="justify">  
  Este é o repositório do projeto final do <b>Curso de Robótica para Graduandos - 2023.2</b> do <i>URA</i> (https://www.umroboporaluno.org/), o qual tem como objetivo o desenvolvimento de um projeto que envolva a <i>Robótica Educacional</i> e que esteja seguindo a <i>BNCC - Base Nacional Comum Curricular</i>.
</p>

<p align="justify">
 Neste projeto vamos apresentar um <b>"Jogo da Memória"</b> intitulado de <b>"Batma²m"</b>, inspirado no <b>"Genius"</b> — jogo de grande sucesso na década de 80. Ele é composto por 6 botões e 6 Leds que acenderão em uma sequência de notas musicais (Dó, Ré, Mi, Fa, Sol, La), com sons definidos para cada um dos Leds, que posteriormente se tornará uma sequência aleatória para aumentar o grau de dificuldade do jogo. Desse modo, o jogador deverá clicar nos botões conforme a sequência gerada pelo Arduíno, além disso, a cada jogada, a sequência é acrescida de um novo item. Vence o jogo quem conseguir repetir a maior sequência possível. Aliás, o jogo é limitado a 12 jogadas (6 da sequência de notas e 6 da sequência de notas acrescida da aleatoriedade), mas você poderá aumentar se desejar à medida que o grau de dificuldade do jogador aumentar ou diminuir.
</p>

<!-- Descrever o teclado musical como OA para crianças -->

## 🧰 Componentes Utilizados

| Quantidade | Componente | 
| :---:       |     :---:       |  
| 1     | Arduíno Uno R3      | 
| 6     | Chaves Momentâneas (Push Button)       |
| 6     | Leds de Cores Diferentes               |
| 7     | Resistores de 220 Ohms (ou valor adequado para o LED selecionado) |
| 1     | Buzzer |
| 1     | Protoboard |
| 16     | Jumpers (Macho/Macho) |

## 🛠️ Tecnologias Utilizadas

<div align="center">

![YouTube](https://img.shields.io/badge/YouTube-%23FF0000.svg?style=for-the-badge&logo=YouTube&logoColor=white)
![WhatsApp](https://img.shields.io/badge/WhatsApp-25D366?style=for-the-badge&logo=whatsapp&logoColor=white)
![Discord](https://img.shields.io/badge/Discord-%235865F2.svg?style=for-the-badge&logo=discord&logoColor=white)
![Notion](https://img.shields.io/badge/Notion-%23000000.svg?style=for-the-badge&logo=notion&logoColor=white)
![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![Windows](https://img.shields.io/badge/Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white)
![Markdown](https://img.shields.io/badge/markdown-%23000000.svg?style=for-the-badge&logo=markdown&logoColor=white)
![GitHub](https://img.shields.io/badge/github-%23000000.svg?style=for-the-badge&logo=github&logoColor=white)
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Canva](https://img.shields.io/badge/Canva-%2300C4CC.svg?style=for-the-badge&logo=Canva&logoColor=white)
![Tinkercad](https://img.shields.io/badge/Tinkercad-%5000000.svg?style=for-the-badge&logo=Tinkercad&logoColor=white)
![Google Acadêmico](https://img.shields.io/badge/Google-Acadêmico-%2300C4CC.svg?style=for-the-badge&logo=google-academico&logoColor=white)
![Repositórios Acadêmicos](https://img.shields.io/badge/Repositórios-Acadêmicos-%2300C4CC.svg?style=for-the-badge&logo=repositorios-academicos&logoColor=white)

</div>

## 📝 Como Fazer
<!-- Colocar slide da apresentação, o códido estará disponível e um pequeno manual de instruções -->
### 🖥️ Explicação Circuito - Hardware
<!-- Explicação com imagem do circuito virtual e do prático -->

<div align="center">
 
<img src="https://github.com/wwwmisla/ura-project/blob/main/img/Batma%C2%B2m%20-%20URA.png" width="400px" align="left">

<img src="https://github.com/wwwmisla/ura-project/blob/main/img/Batma%C2%B2m%20-%20URA.png"  width="400px" align="rigth">

</div>

#### 🎹 Circuito Virtual & 🎼 Circuito Prático

<p>Breve Explicação sobre a Arquitetura do Circuito:</p>

1. Entradas Digitais - Arduíno:
   - Componentes de Entrada:
     - 6 Botões.
     
   - Componentes de Saída:
     - 6 Leds e 1 Buzzer.
        
2. Portas Digitais Utilizadas - Arduíno:
   - 0 (RX);
     - Jumper Branco -> Botão Dó.
   - 1 (TX);
     - Jumper Amarelo -> Botão Ré.
   - 2;
     - Jumper Laranja -> Botão Mi.
   - 3;
     - Jumper Azul -> Botão Fa.
   - 4;
     - Jumper Verde -> Botão Sol.
   - 5;
     - Jumper Vermelho -> Botão La.
   - 6;
     - Jumper Marrom -> Buzzer.
   - 7;
     - Jumper Branco -> Ânodo do Led Branco. 
   - 8;
     - Jumper Amarelo -> Ânodo do Led Amarelo. 
   - 9;
     - Jumper Laranja -> Ânodo do Led Laranja. 
   - 10;
     - Jumper Azul -> Ânodo do Led Azul. 
   - 11;
     - Jumper Verde -> Ânodo do Led Verde. 
   - 12;
     - Jumper Vermelho -> Ânodo do Led Vermelho. 
   - GND.
     - Área de Alimentação da Protoboard (-).
       - Furo 12.
         
 3. Protoboard:
    - Resistores - Conectados a área de alimentação da protoboard (-):
      - R1 - Cátodo do Led Branco;
      - R2 - Cátodo do Led Amarelo;
      - R3 - Cátodo do Led Laranja;
      - R4 - Cátodo do Led Azul;
      - R5 - Cátodo do Led Verde;
      - R6 - Cátodo do Led Vermelho.
    - Buzzer:
      - R7 - Positivo do Buzzer;
      - Jumper com negativo vindo da área de alimentação da protoboard.
    - Botões:
       - Todos os 6 botões recebem jumpers (com cores respectivas as notas) que saem da área de alimentação da protoboard (-).
    - A trilha superior de alimentação (-) passa um jumper (preto) para a trilha inferior de alimentação (-).   

### 👩‍💻 Explicação Código - Software
<p>Aqui está um resumo explicativo do código.</p>

1. Definição de Pinos:
   - Começamos definindo valores constantes para as notas musicais dos sons e das melodias.

2. Definição de Variáveis:
   - Variáveis são definidas para manipular:
      - As melodias;
      - Os pinos para o Buzzer, os Leds e os Botões;
      - O status dos Botões;
      - Temporizadores;
      - Indicador do Modo Demonstração;
      - O status do Jogo;
      - A sequência de cores que o jogador deve responder;
      - As etapas e fases do Jogo;
      - As respostas do Jogador (serve para guardar o valor);
      - Variável para guardar o Botão pressionado pelo jogador;
      - Indicador quando perder o jogo;
      - Tempo para resposta do jogador;
    - Constante são definidas para manipular:
      - O número máximo de combinações ou fases de jogo;
      - O tempo de cada cor (millisegundos). 

3. Função de Configuração (setup):
   - Inicializa a comunicação serial a 9600 bps;
   - Define os pinos dos 6 Leds e do Buzzer como saída;
   - Define os pinos dos Botões como entrada;
   - Registro de tempo e inicializa randomização;
   - Inicializando o random através de uma leitura da porta analógica.
   
5. Função "loop":
   - Há dois laços de repetição (while).
     - O while do Modo Demonstração: chama as funções "modoDemo" e "leituraBotoes" quando a variável "statusJogo" é diferente de 1 e utiliza a função Serial.print para imprimir um "." na porta serial;
     - O while do Modo Jogo: chama a função "modoJogo" quando  a variável "statusJogo" é igual a 1.

6. Função "modoDemo":
   - Essa função consiste em um efeito dos Leds apenas e um pequeno atraso.
     - Utiliza-se uma condicional "if" e um "switch".

7. Função "modoJogo":
   - É dividida em duas partes: Inicialização e Jogo propriamente dito.
     - Utiliza-se um "switch" e um pequeno atraso.

8. Função "inicioJogo":
   - Função de efeitos de início do jogo e carregamento da memória.
     - É realizado um Serial.println para imprimir "Iniciando Jogo...", chamada a função "somInicio" e posteriormente feito um efeito com os Leds através de um laço de repetição "for";
     - Utiliza-se um for para fazer a sequência de notas(Dó, Ré, Mi, Fa, Sol, La), acendendo seus respectivos Leds e após isso é randomizado as notas e apagados os Leds para aumentar o grau de dificuldade do jogo;
     - Zera variáveis.  

9. Função "turnoArduino":
   - Acender os Leds conforme memória e fase atual.
     - Utiliza-se um Serial.print e um Serial.println para imprimir onde(fase) o jogador está, há um laço de repetição "for" contendo um "switch", ao final existe pequenos atrasos e a função "apagaLeds" é chamada. 

10. Função "turnoJogador":
    - Para cada fase alcançada, o jogador tem que repetir sequêcia do Arduíno.
    - Utiliza-se um Serial.print e um Serial.println para imprimir onde(fase) o jogador está, há a variável "terminoTurno", existe um laço de repetição "for" para checar se o botão pressionado está correto atráves de uma condicional "if" e "else", tem também um pequeno atraso, a incrementação de mais uma fase e mais uma condicional "if" para saber se o jogador chegou na fase que contém o mesmo valor limite do tamanho da mémoria, pois caso sejam iguais o jogador ganhou o jogo e ele é finalizado com a função "somGanhou".

11. Função "leituraBotoes":
    - Ler botões no modo demonstação, com lógica para sair do modo se pressionou botão.
      - Possui condicionais "if", a função "digitalRead" e pequenos atrasos.
     
12. Função "leituraBotoesJogo":
    - Leitura dos botões durante jogo, inclui debounce para evitar leituras espúrias.
      - Possui variáveis, um laço de repetição "while", condicionais "if", a função "digitalRead" e pequenos atrasos.
  
13. Função "perdeJogo":
    - Efeitos de Perdeu o Jogo (som e efeitos com os Leds).
      - É chamada a função "somPerdeu" e iniciado um laço de repetição "for" que contém vários "digitalWrite" e pequenos atrasos.
  
14. Função "ganhouJogo":
    - Efeitos de Ganhou o Jogo (som e efeitos com os Leds).
      - É chamada a função "somGanhou" e iniciado um laço de repetição "for" que contém vários "digitalWrite" e pequenos atrasos.  

15. Função "acendeLeds":
    - Acender os Leds, conforme status passado pelas variáveis.
      - Utiliza-se a condicional "if" e o "digitalWrite". 

17. Função "apagaLeds":
     - Serve para apagar todos os Leds.
      - Utiliza-se "digitalWrite".  

18. Funções de Sons - Notas Musicais:
     - Funções "somBR", "somAM", "somLA", "somAZ", "somVD", "somVM" relacionadas as cores dos Leds (Branco, Amarelo, Azul etc) e as suas respectivas notas musicais(Dó, Ré, Mi etc).
       - Utiliza-se a função "tone" para cada tom musical.  

19. Funções de Sons - Melodias:
     - Músicas para tornar o jogo mais divertido.
       - Função "somInicio";
       - Função "somPerdeu";
       - Função "somGanhou".
     - Utiliza-se o laço de repetição "for", variáveis para manipular a duração, as funções "tone" e "noTone".

## 🎮 Como Jogar
<!-- Fluxograma aqui -->
<div align="center">

<img src="https://github.com/wwwmisla/ura-project/blob/main/img/fluxograma_jogo.png" width="700px"/>
 
</div>

## 🗂️ Documentação do Projeto
<!-- Artigo e slide aqui -->

## 🧾 Referências

* [Jogo com Arduino | Monte o GENIUS! | Fácil de fazer!](https://www.youtube.com/watch?v=USpLw_m1tv8)
* [Como criar um Jogo da Memória com Arduíno (GENIUS)](https://www.youtube.com/watch?v=8ibVIUVA95k)
* [O ouvido absoluto em crianças: uma pequena revisão bibliográfica](https://repositorio.unesp.br/items/848688be-2df5-47cd-b4b0-90a089d63585)
* [O Ouvido Absoluto: bases neurocognitivas e perspectivas](https://www.scielo.br/j/pusf/a/DpM48FTvKyvPGfVMJRRwkbd/?format=html)
* [ENSINO INTERDISCIPLINAR DA ROBÓTICA LIVRE ATRAVÉS DA CRIAÇÃO DE UM TECLADO MUSICAL ELETRÔNICO](https://encurtador.com.br/nsQR5)
* [Arduino - Genius (Jogo da memória)](https://meetarduino.wordpress.com/2012/05/27/arduino-genius-jogo-da-memoria/)
* [Jogo da Memória (Genius) - arduino jogo #03](https://www.squids.com.br/arduino/index.php/projetos-arduino/jogos/252-jogo-da-memoria-genius-arduino-jogo-03)
