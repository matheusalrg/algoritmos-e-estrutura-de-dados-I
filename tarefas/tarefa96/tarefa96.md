<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 96 </h2>
      <p>Você deve criar um programa em C que permita ao jogador adicionar novos monstros ao seu bestiário e, crucialmente, ordenar essa lista com base no "Nível de Ameaça" de cada monstro. O nível de ameaça é um valor inteiro que representa o quão perigoso é o monstro.</p>
    </td>
  </tr>
</table>

## ❗Problema: Ordenação de Registros no Bestiário

  - **Contexto:** *Em um RPG, o jogador mantém um registro de cada monstro que derrotou. Este registro, implementado como uma lista encadeada, cresce dinamicamente à medida que o jogador explora o mundo. Para analisar os inimigos e preparar estratégias, o jogador precisa de uma forma de organizar seu bestiário.*

## 📋 Requisitos

  - Defina uma **struct Monstro** que contenha um **id** (inteiro representando o nível de ameaça) e um **nome** (string).
  - Utilize uma estrutura de lista encadeada para armazenar os registros dos monstros.
  - Implemente uma função **adicionarMonstro** que insira um novo monstro no final da lista.
  - Implemente a função **ordenarBestiario**, que utiliza o algoritmo **Bubble Sort** (exatamente como visto na aula) para ordenar a lista de monstros em ordem crescente de **id**.
  - Implemente uma função **mostrarBestiario** para exibir todos os monstros da lista, mostrando seu ID e nome.
  - Crie um menu principal que permita ao usuário: adicionar um monstro, ordenar o bestiário, mostrar o bestiário e sair.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/b59101a0a0deced7d9cecb2c19b012b43b786d7d/tarefas/tarefa96/tarefa96.c)
