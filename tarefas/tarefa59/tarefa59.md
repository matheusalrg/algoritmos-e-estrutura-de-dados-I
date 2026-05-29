<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 59 </h2>
      <p>Você deve criar um programa que simule o sistema de busca do Bestiário. O programa primeiro registrará um conjunto de monstros (fornecidos em ordem crescente de ID) e, em seguida, permitirá que o jogador procure por um monstro específico usando seu ID.</p>
    </td>
  </tr>
</table>

## ❗Problema:  Busca Eficiente no Bestiário 🔍

  - **Contexto:** *Supondo um jogo de RPG de mundo aberto, o jogador mantém um Bestiário, um catálogo digital de todos os monstros que já encontrou. À medida que o jogo avança, este catálogo pode crescer para centenas de entradas. Para que a interface do Bestiário seja rápida e responsiva, o sistema de busca precisa ser extremamente eficiente. Os monstros no Bestiário são sempre armazenados de forma ordenada pelo seu ID numérico único.*

## 📋 Requisitos

  - Defina uma **struct** chamada **Monstro** para armazenar os dados de cada criatura: um id (inteiro), um nome (string com no máximo 50 caracteres), hp (inteiro) e ataque (inteiro).
  - O programa deve primeiro ler um número N de monstros a serem catalogados.
  - Em seguida, leia os dados dos N monstros (ID, nome, HP, ataque) para um vetor de structs. Assuma que os dados de entrada já estarão ordenados pelo id do monstro.
  - Implemente uma função de **Busca Binária Recursiva** que receba o ID a ser procurado, o vetor de monstros e os limites da busca. A função deve retornar o índice do monstro no vetor se ele for encontrado, ou -1 caso contrário.
  - Após catalogar os monstros, o programa deve entrar em um loop onde o jogador pode digitar um ID para buscar. O loop deve continuar até que o jogador digite 0.
  - Para cada ID buscado, chame sua função de busca binária. Se o monstro for encontrado, imprima seus dados no formato: **Monstro Encontrado: [Nome] (ID: [id]) - HP: [hp], Ataque: [ataque].**
  - Se o monstro não for encontrado, imprima a mensagem: **Monstro com ID [id] nao encontrado.**

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/5aab7c3a9f98c9196259082ae4c212eecaeda178/tarefas/tarefa59/tarefa59.c)
