<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 105 </h2>
      <p>Sua tarefa é implementar esta poderosa habilidade. Você criará uma função que inverte a ordem de todos os feitiços na pilha de comandos. Para fazer isso, você usará de uma pilha auxiliar temporária.</p>
    </td>
  </tr>
</table>

## ❗Problema: Revertendo a Estratégia (Inverter Pilha)

  - **Contexto:** *O Arcanista, em meio a uma batalha, percebe que sua estratégia inicial foi equivocada. Os feitiços que ele preparou primeiro (e que agora estão no fundo da pilha) são exatamente os que ele precisa lançar agora. Os comandos mais recentes, no topo da pilha, são menos importantes no momento. Ele precisa de um meta-feitiço, um "Encantamento de Reversão Temporal", que inverta toda a sua sequência de comandos planejada, fazendo com que o primeiro feitiço pensado se torne o próximo a ser lançado.*

## 📋 Requisitos

  - Utilize o código da atividade anterior como base.
  - Implemente uma função void inverter_pilha(Pilha *p).
  - Dentro desta função, você deve:
  -Criar e inicializar uma nova pilha, local, que servirá como auxiliar.
  -Usar um laço de repetição que, enquanto a pilha original não estiver vazia, remove (pop) um feitiço da pilha original e o insere (push) na pilha auxiliar.
  -Ao final do laço, a pilha original estará vazia e a auxiliar conterá todos os feitiços na ordem inversa.
  -Finalmente, faça com que o topo da pilha original aponte para o topo da pilha auxiliar, efetivamente substituindo a pilha antiga pela nova, invertida.
  - Adicione uma nova opção ao menu para "Inverter Ordem dos Feitiços".
  - Ao chamar a função, se a pilha não estiver vazia, exiba uma mensagem de sucesso, como "Ordem dos feitiços invertida!". Se estiver vazia, informe que não há nada para inverter.
  - Após a inversão, o usuário deve ser capaz de usar a opção "Mostrar Pilha" para verificar que a ordem foi, de fato, alterada.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/26fe63f80984a67b06425fdf05f4cc60466421e4/tarefas/tarefa105/tarefa105.c)
