<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 103 </h2>
      <p>Sua tarefa é aprimorar o programa do Arcanista implementando uma função dedicada para verificar se a pilha está vazia. Essa função tornará o código mais limpo, legível e seguro, pois poderá ser usada para proteger as operações de pop e mostrar contra erros de execução em uma pilha vazia.</p>
    </td>
  </tr>
</table>

## ❗Problema: Verificando o Status da Pilha de Comandos (isEmpty)

  - **Contexto:** *Nosso Arcanista está se tornando cada vez mais eficiente. Ele já pode adicionar, lançar e visualizar seus feitiços. No entanto, em um combate acirrado, ele não tem tempo para listar todos os comandos pendentes apenas para saber se há algum comando na pilha. Ele precisa de uma forma instantânea de verificar o status da sua pilha de comandos: ela está vazia ou pronta para a ação?*

## 📋 Requisitos

  - Utilize o código da atividade anterior como base.
  - Implemente uma função int vazia(Pilha *p) que retorna 1 (verdadeiro) se a pilha estiver vazia e 0 (falso) caso contrário.
  - Modifique o menu para incluir uma nova opção: 4: Verificar Status da Pilha. A opção de sair deve se tornar a 5.
  - Ao escolher a nova opção 4, o programa deve chamar a função vazia() e exibir uma mensagem clara para o usuário, como "A pilha de comandos está vazia." ou "A pilha de comandos possui feitiços pendentes.".
  - Refatoração: Modifique as funções pop() e mostrar_pilha() para que elas utilizem a nova função vazia() em suas verificações internas, em vez de checar p->topo == NULL diretamente. Isso centraliza a lógica e melhora a manutenção do código.
  - O programa deve continuar executando até que o usuário escolha a nova opção de sair.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/e8fdda7310a41b7bf36feb33cb6ef6c87dec58c4/tarefas/tarefa103/tarefa103.c)
