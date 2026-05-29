<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 72 </h2>
      <p>Crie um programa em C que leia o número de pilotos em uma corrida, seguido dos dados de cada piloto (posição de chegada e nome). Utilize o algoritmo de ordenação por intercalação (Merge Sort) para organizar a lista de pilotos em ordem crescente de sua posição final. Ao final, o programa deve imprimir a lista ordenada, mostrando a posição e o nome de cada piloto.</p>
    </td>
  </tr>
</table>

## ❗Problema: Ordenação do Pódio 🏅

  - **Contexto:** *Você está desenvolvendo o sistema de placar para um jogo de corrida futurista. Ao final de cada corrida, o sistema recebe os dados dos pilotos (nome e sua posição final de chegada) de forma desordenada. Para exibir o pódio e a classificação final na tela, é crucial que esses dados sejam ordenados com base na posição de chegada, do primeiro ao último colocado.*

## 📋 Requisitos

  - Utilize uma **struct** chamada **Piloto** para armazenar a **posicao** (inteiro) e o **nome** (string) de cada competidor.
  - Implemente a lógica do Merge Sort de forma recursiva, com uma função **mergeSort** para dividir o vetor e uma função **intercala** para combinar as metades ordenadas.
  - A ordenação deve ser baseada no campo **posicao** da **struct**.
  - O programa deve ler primeiro o número total de pilotos e, em seguida, os dados de cada um (posição e nome).
  - Após a ordenação, imprima a lista final no formato **posicao nome** para cada piloto, um por linha.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/611d3116663771ab91afbe405d6614f237b1c992/tarefas/tarefa72/tarefa72.c)
