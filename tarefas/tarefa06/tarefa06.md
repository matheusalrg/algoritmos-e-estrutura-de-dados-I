<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 06 </h2>
      <p>Escreva um programa em C que calcule e exiba a altura total do salto do personagem usando aritmética de ponteiros para percorrer um vetor de plataformas.</p>
    </td>
  </tr>
</table>

## ❗Problema: A Jornada do Saltador 🏃‍♂️🦘

  - **Contexto:** *Em um jogo de plataforma, nosso herói precisa atravessar um abismo pulando sobre uma sequência de plataformas mágicas. Cada plataforma fornece um impulso de salto diferente. Para otimizar o cálculo do trajeto, o motor do jogo usa aritmética de ponteiros para "caminhar" pela lista de plataformas e somar os impulsos.
Sua tarefa é simular essa lógica, calculando a altura total que o jogador alcança após saltar sobre todas as plataformas.*

## 📋 Requisitos
  - **Vetor de Plataformas:** Crie um vetor de inteiros chamado plataformas e inicialize-o com os seguintes valores de impulso: {10, 20, 5, 15, 30}.
    
  - **Ponteiro para Plataforma:** Crie uma variável do tipo "ponteiro para inteiro" chamada ponteiro_plataforma.
    
  - **Variável de Altura:** Crie uma variável inteira chamada altura_total e inicialize-a com 0.

  - **Loop com Aritmética de Ponteiros:** Mostre na tela a pontuação do jogador antes de coletar qualquer moeda. A saída deve ser: "Pontuacao inicial: 0"

  - ** Simule a Coleta:** Crie um laço for que itere por todas as plataformas do vetor. Dentro do laço, você deve usar aritmética de ponteiros para acessar o valor de impulso de cada plataforma e somá-lo à variável altura_total. **Dica:** Em vez de usar plataformas[i], acesse o valor usando a expressão *(plataformas + i).
    
  - **Imprima o Resultado:** Após o laço, mostre na tela a altura total alcançada. A saída deve ser exatamente: Altura total do salto: 80 metros!


📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/cac1a48747eab9d186e19af332e46999b33aab99/tarefas/tarefa06/tarefa06.c)
