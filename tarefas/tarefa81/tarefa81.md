<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 81 </h2>
      <p>Você deve criar um sistema que registre os movimentos do jogador. Cada movimento possui um ID numérico único e um nome (ex: 'Soco Rápido', 'Chute Giratório', 'Defesa'). À medida que o jogador executa novos movimentos, eles devem ser adicionados ao início de uma lista que representa o 'histórico do combo'.</p>
    </td>
  </tr>
</table>

## ❗Problema: Log de Combo em Jogo de Luta 🥊

  - **Contexto:** *Em um jogo de luta de ritmo acelerado, os jogadores executam sequências de movimentos chamadas combos. O sistema do jogo precisa rastrear os últimos movimentos realizados para determinar se um ataque especial pode ser ativado. O movimento mais recente é sempre o mais importante e deve ser acessado rapidamente.*

## 📋 Requisitos

  - Crie uma **struct**, usando **typedef**, chamada **Movimento** para armazenar o **ID** (int) e o **nome** (char nome[50]) de um golpe.
  - Crie as **structs** necessárias para implementar uma lista encadeada (**No** e **Lista**).
  - Implemente um programa principal (**main**) que exiba um menu com as seguintes opções:
  1: Inserir novo movimento no início do combo.
  2: Sair.
  - O programa deve continuar executando até que o usuário escolha a opção '2'.
  - Ao escolher a opção '1', o programa deve ler o ID e o nome de um novo movimento e inseri-lo no início da lista encadeada.
  - O foco do exercício é a inserção. Não é necessário implementar uma função para imprimir a lista.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/941cadc1d769366117ae0a4938b6eb10d70ba0d4/tarefas/tarefa81/tarefa81.c)
