<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 73 </h2>
      <p>Crie um programa em C que simule essa triagem rápida. O programa deve primeiro ler a quantidade de itens no baú e, em seguida, o nível de poder de cada um. O último item lido será o pivô. Usando um vetor secundário, seu programa deve particionar a lista de itens e, ao final, imprimir a lista reorganizada.</p>
    </td>
  </tr>
</table>

## ❗Problema: Triagem Rápida de Itens em um RPG 🎒

  - **Contexto:** *Em um RPG de ação, após derrotar um chefe de fase, ele derruba um baú com vários itens. Cada item tem um "nível de poder". Para ajudar o jogador a decidir rapidamente o que pegar, o sistema de inventário possui uma função de "triagem rápida". Esta função pega o último item da lista como referência (pivô) e reorganiza o restante: itens com poder menor ou igual ao de referência são colocados no início da lista, e os mais poderosos, no final.*

## 📋 Requisitos

  - Leia um inteiro **N** que representa a quantidade de itens.
  - Crie um vetor **v** de tamanho **N** para armazenar os níveis de poder.
  - Leia **N** inteiros e armazene-os em **v**.
  - Considere o último elemento do vetor (**v[N-1]**) como o pivô.
  - Implemente uma função **void particao(int n, int v[])** que realize a partição.
  - Dentro da função, crie um vetor secundário s de tamanho **N**.
  - Percorra o vetor original **v**. Coloque os elementos menores ou iguais ao pivô no início do vetor s e os elementos maiores no final.
  - Após preencher o vetor secundário, copie seus elementos de volta para o vetor original **v**.
  - Na função **main**, após chamar a partição, imprima o vetor **v** resultante, com os elementos separados por um espaço.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/e0b02a9705fb3410fabca9cad0d997ea6feb4e4a/tarefas/tarefa73/tarefa73.c)
