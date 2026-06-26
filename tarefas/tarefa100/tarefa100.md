<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 100 </h2>
      <p>Você está desenvolvendo o sistema de comando para uma unidade mágica, o 'Arcanista'. O Arcanista pode receber uma sequência de ordens para lançar feitiços. Sua tarefa é criar um programa que simule a pilha de comandos do Arcanista. O programa deve permitir que o jogador insira múltiplos comandos de feitiço na pilha. Ao final, o programa deve simplesmente encerrar, preparando o terreno para uma futura aula onde veremos como 'executar' (remover) esses comandos da pilha.</p>
    </td>
  </tr>
</table>

## ❗Problema: Pilha de Ações em Tempo Real

  - **Contexto:** *Em jogos de estratégia em tempo real (RTS) ou RPGs, as ações do jogador ou de uma unidade são frequentemente processadas em uma ordem específica. Por exemplo, se um jogador emite múltiplos comandos de movimento e ataque, o último comando emitido geralmente tem prioridade e é executado primeiro. Este comportamento é perfeitamente modelado por uma pilha, onde a última ordem dada é a primeira a ser retirada da "fila" de comandos para execução.*

## 📋 Requisitos

  - Crie uma struct chamada Feitico que armazene o nome do feitiço (string, ex: "BolaDeFogo") e seu custo_mana (inteiro).
  - Implemente uma Pilha (Stack) usando uma lista encadeada para armazenar os feitiços.
  - O programa deve apresentar um menu com as seguintes opções: <br>
  1: Adicionar um novo feitiço à pilha de comandos. <br>
  2: Finalizar a sequência de comandos e sair. <br>
  Ao escolher a opção 1, o programa deve solicitar o nome e o custo de mana do feitiço e adicioná-lo ao topo da pilha.
  - O programa deve continuar executando até que o usuário escolha a opção 2.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/762d9efbd0e982f6211c1cdfbb51c72b783f6640/tarefas/tarefa100/tarefa100.c)
