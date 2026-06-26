<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 92 </h2>
      <p>Você deve criar um programa em C que simule o gerenciamento dessa companhia. O programa deve ter um menu com as seguintes opções: <br>
      1. Contratar mercenário (inserir no fim da lista). <br>
      2. Exibir companhia (mostrar a lista de mercenários). <br>
      3. Declarar falência (deletar a lista inteira). <br>
      4. Sair.</p>
    </td>
  </tr>
</table>

## ❗Problema: Implementar a função demitir_todos_mercenarios que libera toda a memória alocada para uma lista de mercenários em um jogo.

  - **Contexto:** *Em um jogo de estratégia e aventura, o jogador gerencia uma companhia de mercenários. Cada mercenário contratado é adicionado a uma lista dinâmica (uma lista encadeada). No entanto, se o jogador ficar sem ouro para pagar os salários, a companhia inteira se dissolve. Nesse momento, o sistema do jogo precisa limpar eficientemente o registro, liberando a memória de todos os mercenários contratados para evitar vazamentos de memória (memory leaks) que poderiam travar o jogo.*

## 📋 Requisitos

  - Use uma **struct** para representar um mercenário, que deve conter um **id** (inteiro) e um **nome** (string).
  - A lista de mercenários deve ser uma lista encadeada simples.
  - A função **demitir_todos_mercenarios** deve percorrer a lista, liberando a memória de cada nó com **free()** até que a lista esteja completamente vazia.
  - O programa deve confirmar que a lista está vazia após a função de demissão ser chamada.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/03150685758118f80c19fb812962344839c22d22/tarefas/tarefa92/tarefa92.c)
