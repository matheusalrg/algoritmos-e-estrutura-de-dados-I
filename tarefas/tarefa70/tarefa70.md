<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 70 </h2>
      <p>Você deve criar um programa que ajude o jogador a encontrar rapidamente o fragmento mais poderoso. Em vez de percorrer o inventário item por item (busca linear), você implementará um método mais sofisticado usando o paradigma de Divisão e Conquista. O programa dividirá recursivamente a coleção de fragmentos ao meio, encontrará o fragmento mais poderoso em cada metade e, em seguida, comparará os dois para determinar o mais poderoso do conjunto original.</p>
    </td>
  </tr>
</table>

## ❗Problema: Encontrando a Fonte de Poder Máxima 💪🔱

  - **Contexto:** *Supondo um jogo de RPG de fantasia, o jogador coleta "Fragmentos de Alma" de monstros derrotados. Cada fragmento possui um nível de poder numérico. Para forjar uma arma lendária, o jogador precisa encontrar e usar o fragmento com o maior nível de poder de todo o seu inventário, que pode conter milhares de itens.*

## 📋 Requisitos

  - Leia um número inteiro N, representando a quantidade de Fragmentos de Alma no inventário.
  - Leia N números inteiros, que são os níveis de poder de cada fragmento, e armazene-os em um vetor.
  - Implemente uma função recursiva que receba o vetor e os índices de início e fim do segmento a ser analisado.
  - A função deve seguir o paradigma de Divisão e Conquista:
  - **Caso Base:** Se o segmento contiver apenas um elemento, retorne o valor desse elemento.
  - **Dividir:** Divida o segmento atual em dois sub-segmentos (metade esquerda e metade direita).
  - **Conquistar:** Faça chamadas recursivas para encontrar o valor máximo em cada um dos dois sub-segmentos.
  - **Combinar:** Compare os dois valores máximos retornados e retorne o maior deles.
  - A função main deve chamar a função recursiva para o vetor completo (do índice 0 ao N-1) e imprimir o valor máximo encontrado.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/25f1b966189f302c7942c7cd0eb6857cfb1f439e/tarefas/tarefa70/tarefa70.c)
