<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 86 </h2>
      <p>Você deve criar um programa em C que gerencie a formação de batalha de uma equipe usando uma lista encadeada. O programa deve apresentar um menu com opções para adicionar heróis e, mais importante, implementar a funcionalidade de 'Inserir Antes'.</p>
    </td>
  </tr>
</table>

## ❗Problema: Inserção Estratégica na Formação de Batalha ⚔️

  - **Contexto:** *Supondo um RPG tático, a ordem dos heróis na formação de batalha é crucial. Heróis na frente absorvem mais dano, enquanto os de trás ficam protegidos. O jogador pode recrutar novos heróis e precisa posicioná-los estrategicamente na formação existente.
<br>
Uma das táticas mais importantes é a proteção de um personagem-chave (o 'VIP'). Ao recrutar um 'Guarda-Costas', o jogador deve poder inseri-lo na formação exatamente antes do VIP para interceptar ataques direcionados.*

## 📋 Requisitos

  **Estrutura de Dados:**
  - Crie uma struct Heroi com id (inteiro) e nome (string).
  - Implemente uma lista encadeada simples para armazenar os heróis da formação.
  **Menu de Opções:**
  - 1 - **Adicionar Herói no Fim da Formação**: Adiciona um novo herói ao final da lista.
  - 2 - **Adicionar Guarda-Costas (Inserir Antes)**: Pede os dados de um novo herói (o guarda-costas) e, em seguida, pede o id de um herói já existente (o VIP). O guarda-costas deve ser inserido na lista imediatamente antes do VIP.
  - 3 - **Mostrar Formação**: Exibe a lista de heróis na ordem atual.
  - 4 - **Sair**.
  **Lógica de Inserção:**
  - A função **inserir_antes** deve lidar com os casos: lista vazia, o 'VIP' ser o primeiro da lista, e o 'VIP' não ser encontrado.
  - Se o 'VIP' não for encontrado, o programa deve informar o usuário e não realizar a inserção.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/1f02b5550f8073414118afca9a2d0cfbab511bb2/tarefas/tarefa86/tarefa86.c)
