<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 34 </h2>
      <p>Escreva um programa em C que simule a gestão dos atributos do seu herói em um jogo de plataforma, utilizando o conceito de estruturas e ponteiros para manipular esses dados de forma eficiente.</p>
    </td>
  </tr>
</table>

## ❗Problema: O Gerenciamento de Atributos do Herói no Jogo 🗂️🦸‍♀️

  - **Contexto:** *Em um jogo de plataforma, seu herói possui atributos essenciais como saúde, pontuação de jogo e sua posição no mapa (coordenadas X e Y). Para garantir que o jogo seja fluído e responsivo, o "motor" do jogo precisa ser extremamente eficiente na forma como acessa e modifica esses atributos na memória. Em C, uma técnica comum para isso é usar ponteiros para manipular diretamente os dados do herói, evitando cópias desnecessárias e garantindo que as alterações sejam instantâneas e reflitam o estado real do herói.*

## 📋 Requisitos

  - **Definição da Estrutura Heroi:** 
  -Crie uma estrutura chamada Heroi. <br>
  -Esta estrutura deve conter os seguintes membros inteiros: <br>
    saude (inicialize com 100) <br>
    pontuacao (inicialize com 0) <br>
    posX (posição horizontal, inicialize com 0) <br>
    posY (posição vertical, inicialize com 0)
    
  - **Criação e Inicialização do Herói:**
  -No main, declare uma variável do tipo struct Heroi e chame-a de meuHeroi. <br>
  -Inicialize meuHeroi com os valores padrão especificados acima (saúde 100, pontuação 0, posX 0, posY 0). <br>
  -Imprima na tela o estado inicial do herói (saúde, pontuação, posX, posY) usando os membros diretos da estrutura.

  - **Criação do Ponteiro para o Herói:**
  -Declare uma variável do tipo "ponteiro para struct Heroi" e chame-a de ptrHeroi.
  -Faça ptrHeroi apontar para o endereço de memória de meuHeroi.

  - **Simulação de Ações no Jogo (usando o ponteiro):**

    - **Sofrer Dano:** Simule o herói sofrendo dano. Use ptrHeroi para diminuir a saude do herói em 25 pontos. Após a alteração, imprima a nova saude usando o ponteiro.
    - **Coletar Moedas: **Simule o herói coletando moedas. Use ptrHeroi para aumentar a pontuacao do herói em 50 pontos. Após a alteração, imprima a nova pontuacao usando o ponteiro.
    - **Mover Herói:** Simule o herói se movendo. Use ptrHeroi para aumentar posX em 10 e diminuir posY em 5. Após a alteração, imprima as novas coordenadas (posX, posY) usando o ponteiro. 

  - **Impressão Final do Estado:** Após todas as simulações, imprima o estado final completo do herói (saúde, pontuação, posX, posY) na tela. Desta vez, todos os valores devem ser acessados e impressos apenas através do ponteiro ptrHeroi, utilizando o operador ->.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-aI/blob/3c7333d22e22930eb288a33a8014316500218da6/tarefas/tarefa34/tarefa34.c)
