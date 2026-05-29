<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 74 </h2>
      <p>Você deve criar um programa em C que leia a quantidade de unidades mecha e, em seguida, os pontos de vida de cada uma. O programa deve então particionar o vetor de HP. O pivô para a partição será o valor de HP da última unidade lida. Todos os mechas com HP menor que o pivô devem ser movidos para o início do vetor, e todos os com HP maior devem ser movidos para o final. O pivô deve ficar posicionado entre esses dois grupos. Esta operação deve ser feita "in-place", ou seja, modificando o vetor original sem criar um vetor auxiliar, para economizar recursos computacionais críticos no campo de batalha.</p>
    </td>
  </tr>
</table>

## ❗Problema: Triagem de Unidades Mecha para Reparo 🔧

  - **Contexto:** *Supondo um jogo de estratégia de ficção científica, você controla a "Legião de Ferro". Após uma batalha intensa, o sistema de triagem automática precisa reorganizar rapidamente as unidades mecha com base em seus pontos de vida (HP) restantes. O sistema usa a saúde da última unidade na lista como um "limiar de dano" para decidir quem precisa de reparos imediatos.*

## 📋 Requisitos

  - Leia um inteiro **n** representando o número de unidades mecha.
  - Leia **n** inteiros em um vetor, representando os pontos de vida de cada unidade.
  - Crie uma função **void particao(int n, int v[])** que implemente a lógica de particionamento.
  - O pivô para a partição deve ser sempre o último elemento do vetor (**v[n-1]**).
  - A partição deve ser realizada no próprio vetor (in-place).
  - Após a partição, imprima o vetor resultante com os elementos separados por um espaço.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/6258ee1785334d3772c9c8e22e1b4ca30b0f0ea9/tarefas/tarefa74/tarefa74.c)
