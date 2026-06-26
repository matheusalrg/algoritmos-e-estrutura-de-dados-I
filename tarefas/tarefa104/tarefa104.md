<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 104 </h2>
      <p>Sua missão é implementar a operação top (também conhecida como peek). Você criará uma função que permite ao Arcanista ver qual feitiço está no topo da pilha de comandos, mas sem removê-lo.</p>
    </td>
  </tr>
</table>

## ❗Problema: Consultando o Próximo Feitiço (Top/Peek)

  - **Contexto:** *O Arcanista agora domina a adição, execução e visualização de sua pilha de comandos. No entanto, ser um bom mago não é apenas sobre poder, mas também sobre estratégia. Antes de comprometer-se a lançar um feitiço (removendo-o da pilha com pop), ele gostaria de espiar qual é o próximo comando. Isso permite que ele verifique se tem mana suficiente ou se a situação tática mudou, tornando outro feitiço mais apropriado, tudo isso sem alterar a sequência de comandos já planejada.*

## 📋 Requisitos

  - Utilize o código da atividade anterior como base.
  - Implemente uma função Feitico top(Pilha *p) que:
  -Verifica se a pilha está vazia usando a função vazia().
  -Se não estiver vazia, retorna a struct Feitico que está no topo, mas não modifica a pilha (não usa free() e não altera o ponteiro topo).
  -Se a pilha estiver vazia, exibe uma mensagem de erro e retorna uma struct Feitico indicando falha (ex: custo_mana = -1).
  - Modifique o menu para incluir a nova opção: 4: Consultar Próximo Feitiço (Top). As opções subsequentes devem ser reenumeradas.
  - No main, ao escolher a nova opção 4, chame a função top e, se a operação for bem-sucedida, exiba os detalhes do feitiço consultado (nome e custo de mana).
  - O programa deve continuar executando até que o usuário escolha a nova opção de sair.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/fd9d1f904c7464312c73912559e5ba3cb8cdf90d/tarefas/tarefa104/tarefa104.c)
