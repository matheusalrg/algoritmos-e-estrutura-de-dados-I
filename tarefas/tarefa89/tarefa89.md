<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 89 </h2>
      <p>Você deve estender um programa de gerenciamento de guilda existente. Sua principal tarefa é implementar a função dispensar_heroi(), que recebe a lista de heróis e o ID do herói a ser removido. A função deve encontrar o herói com o ID correspondente na lista e removê-lo, liberando a memória alocada para ele e garantindo que a lista permaneça conectada corretamente.</p>
    </td>
  </tr>
</table>

## ❗Problema: Despedindo um Herói da Guilda 💔

  - **Contexto:** *Supondo que em um jogo de RPG e gerenciamento, você é o líder de uma guilda de heróis. O salão da guilda tem uma capacidade limitada, e às vezes, para dar lugar a novos talentos ou porque um herói decide se aposentar, você precisa remover um membro do seu registro ativo. O registro da guilda é implementado como uma lista encadeada, onde cada herói é identificado por um ID numérico único.*

## 📋 Requisitos

  - Defina uma **struct Heroi** com os campos: **id** (inteiro) e **nome** (string).
  - Use uma lista encadeada para armazenar os heróis da guilda.
  - Implemente a função void **dispensar_heroi(Lista *lista, int id);**.
  - Sua função deve tratar todos os casos possíveis:
  Tentar remover de uma lista vazia.
  Remover o primeiro herói da lista.
  Remover um herói que está no meio ou no final da lista.
  Tentar remover um herói com um ID que não existe na lista.
  - O programa principal deve ter um menu simples para permitir ao usuário: (1) Adicionar um herói, (2) Mostrar todos os heróis, (3) Dispensar um herói por ID, e (4) Sair. Após cada operação de dispensa, a lista atualizada deve ser exibida.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/tree/2c827fcd7c6099af2860c2a493364de1b2c07701/tarefas/tarefa89)
