<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 93 </h2>
      <p>Você precisa implementar a função que permite essa alteração. O líder da guilda informará o ID do membro cujo nome precisa ser mudado e, em seguida, fornecerá o novo nome. O sistema deve encontrar o membro na lista e atualizar seu nome.</p>
    </td>
  </tr>
</table>

## ❗Problema: Renomeando um Companheiro de Guilda em um RPG 🧙🏻

  - **Contexto:** *Em um RPG online, os jogadores podem gerenciar os membros de sua guilda. Uma funcionalidade importante, mas que precisa de cuidado, é a capacidade de um líder de guilda corrigir ou alterar o nome de um membro no registro oficial. O registro da guilda é implementado como uma lista encadeada, onde cada membro é identificado por um ID numérico único.*

## 📋 Requisitos

  - Defina uma **struct** para representar um **Membro** com um **id** (int) e um **nome** (char[100]).
  - Crie uma lista encadeada para armazenar os membros da guilda.
  - Implemente as funções básicas: **inserir_fim** para adicionar novos membros e **mostrar_lista** para exibir o registro atual.
  - O foco principal é implementar uma função **alterar_nome(Lista *lista, int id, char novo_nome[]).**
  - Dentro de **alterar_nome**, você deve primeiro usar uma função de busca (**pesquisar**) para encontrar o nó do membro pelo id fornecido.
  - Se o membro for encontrado, use **strcpy()** para atualizar seu nome.
  - Se o membro não for encontrado, exiba uma mensagem de erro apropriada.
  - Crie um menu simples na função **main** que permita ao usuário adicionar membros, mostrar a lista, alterar o nome de um membro e sair.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/016543ad5bdc81ee0a5db5480e50d75f9f68ab4a/tarefas/tarefa93/tarefa93.c)
