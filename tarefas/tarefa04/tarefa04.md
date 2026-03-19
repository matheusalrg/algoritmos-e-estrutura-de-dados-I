<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 04 </h2>
      <p>Escreva um programa em C que simule o jogador coletando um item de "power-up" que dobra sua pontuação.</p>
    </td>
  </tr>
</table>

## ❗Problema: Power-up de Pontuação Dupla 🆙

  - **Contexto:** *Em um jogo de plataforma, seu personagem pode coletar um item especial de "power-up" que dobra a pontuação atual. Para otimizar o jogo, a função que calcula essa pontuação não deve criar cópias desnecessárias de variáveis. Em vez disso, ela deve receber a localização exata da pontuação na memória e alterá-la diretamente, garantindo que a mudança seja refletida em todo o jogo.*

## 📋 Requisitos
**1. Função Principal (main):**

  - Crie uma variável inteira chamada pontuacao_jogador e inicialize-a com o valor 1500. 

  - Imprima a pontuação do jogador antes de coletar o power-up. A saída deve ser: "Pontuacao antes do power-up: 1500".

  - Chame a função que aplica o power-up (você a criará no próximo passo).

  - Imprima a pontuação do jogador após a coleta do power-up para confirmar que o valor foi dobrado. A saída deve ser: "Pontuacao apos o power-up: 3000".

 **2. Função do Power-up (aplicar_powerup_pontuacao_dupla):**

  - Crie uma função sem retorno (void) com o nome aplicar_powerup_pontuacao_dupla.
    
  - Esta função deve receber um único parâmetro: um **ponteiro para um inteiro.** Este ponteiro representará o endereço da variável pontuacao_jogador.

  - Dentro da função, use o ponteiro para acessar o valor original da pontuação e multiplique-o por 2, atualizando o valor diretamente na memória.


📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/a80baf4a1c0a15501c57dd7c1de0b4a41e2ea264/tarefas/tarefa04/tarefa04.c)
