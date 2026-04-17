<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 29 </h2>
      <p>Escreva um programa em C que defina uma estrutura para os itens colecionáveis e crie três tipos diferentes de itens, inicializando seus valores diretamente. Em seguida, simule o jogador coletando um desses itens e atualize sua pontuação.</p>
    </td>
  </tr>
</table>

## ❗Problema: Itens Colecionáveis em um Jogo de Plataforma ⚔️🎮

  - **Contexto:** *Você está desenvolvendo um jogo de plataforma 2D. No seu jogo, existem diferentes tipos de moedas e itens que o jogador pode coletar. Cada item tem um valor em pontos e um "peso" que, futuramente, poderia ser usado para calcular a velocidade do personagem. Por enquanto, vamos nos concentrar em definir esses itens.*

## 📋 Requisitos

  - **Estrutura do Item:** Crie uma struct chamada ItemColetavel que contenha dois membros: <br>
  int valor_pontos (quantos pontos o item vale). <br>
  float peso (o peso do item). 

  - **Criação dos Itens:** Dentro da função main, declare e inicialize três variáveis do tipo struct ItemColetavel usando a inicialização direta (como visto na aula): <br>
  moeda_bronze: Deve valer 10 pontos e ter peso 0.5. <br>
  moeda_prata: Deve valer 50 pontos e ter peso 0.7. <br>
  moeda_ouro: Deve valer 100 pontos e ter peso 1.0.

  - **Pontuação do Jogador:** Crie uma variável inteira chamada pontuacao_jogador e inicialize-a com 0.

  - **Simular Coleta:** Simule que o jogador coletou uma moeda_ouro. Para isso, some o valor_pontos da variável moeda_ouro à variável pontuacao_jogador.

  - **Exibir Resultado:** Mostre na tela a pontuação do jogador após a coleta. A saída deve ser exatamente: Moeda de ouro coletada! Pontuação atual: 100

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/ad1f4b377bf0cef38d12348570e14992e1f6db71/tarefas/tarefa29/tarefa29.c)
