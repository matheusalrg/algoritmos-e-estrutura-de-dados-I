<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 90 </h2>
      <p>Crie um programa em C que simule esse sistema. O programa deve apresentar um menu com as seguintes opções:
      - 1. Adicionar Ward (sempre no final da lista)
      - 2. Lançar 'Ward Shatter' (deletar após um ID específico)
      - 3. Mostrar Wards Ativos
      - 4. Sair</p>
    </td>
  </tr>
</table>

## ❗Problema: Sistema de gerenciamento de efeitos mágicos para um RPG. ⚙️

  - **Contexto:** *Em um RPG, um personagem pode ter uma sequência de 'wards' (barreiras mágicas) ativas para proteção. Cada ward possui um ID numérico único e um nome. Esses wards são gerenciados por uma lista encadeada. O Mago Arcano possui um feitiço chamado 'Ward Shatter', que, ao ser lançado em um ward alvo (identificado por seu ID), destrói o ward que foi conjurado imediatamente depois dele na sequência, enfraquecendo as defesas em cadeia do inimigo.*

## 📋 Requisitos

  - Defina uma **struct** para representar um Ward, contendo um **int id** e um **char nome[100]**.
  - Use uma lista simplesmente encadeada para armazenar a sequência de wards ativos.
  - A função para 'Ward Shatter' (**deletar_apos**) deve receber o ID do ward de referência. Ela deve primeiro encontrar o nó com esse ID e, em seguida, deletar o nó seguinte.
  - O programa deve tratar os casos especiais:
  -Se a lista estiver vazia.
  -Se o ward de referência não for encontrado na lista.
  -Se o ward de referência for o último da lista (não há um ward 'após' ele para ser deletado). Em ambos os casos de falha, uma mensagem informativa deve ser exibida.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/0af1f3b9318bd8714bc45b2cfed1d805f0d7c5b8/tarefas/tarefa90/tarefa90.c)
