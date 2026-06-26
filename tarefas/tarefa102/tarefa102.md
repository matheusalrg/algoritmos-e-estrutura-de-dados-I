<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 102 </h2>
      <p>Sua tarefa é finalizar o ciclo de comando do Arcanista, implementando a funcionalidade de "lançar" o próximo feitiço. Isso corresponde à operação pop de uma pilha, onde o elemento do topo é removido e processado.</p>
    </td>
  </tr>
</table>

## ❗Problema: Executando o Próximo Comando (Pop)

  - **Contexto:** *O nosso Arcanista já sabe como adicionar feitiços à sua pilha de comandos (push) e como visualizar a sequência de ações pendentes (mostrar_pilha). Agora é o momento da ação! O Arcanista precisa executar o comando que está no topo da pilha. Lembre-se do princípio LIFO (Last-In, First-Out): o último feitiço adicionado é o primeiro a ser lançado.*

## 📋 Requisitos

  - Utilize o código da atividade anterior como base.
  - Modifique o menu para incluir a nova opção: 2: Lançar Próximo Feitiço. As opções "Mostrar Pilha" e "Sair" devem ser ajustadas para 3 e 4, respectivamente.
  - Implemente uma função Feitico pop(Pilha *p) que:
  -Verifica se a pilha não está vazia.
  -Se não estiver vazia, remove o nó do topo.
  -Libera a memória do nó removido usando free().
  -Retorna a struct Feitico que estava no nó removido.
  - Se a pilha estiver vazia quando a função pop for chamada, ela deve exibir uma mensagem de erro ("A pilha de comandos esta vazia!") e retornar uma struct Feitico indicando a falha (por exemplo, com custo_mana = -1).
  - No main, ao escolher a opção 2, chame a função pop e, se a operação for bem-sucedida, exiba uma mensagem confirmando qual feitiço foi "lançado" (ex: "Feitiço 'BolaDeFogo' lançado com sucesso!").
  - Antes de o programa encerrar, crie uma função void liberar_pilha(Pilha *p) que utiliza laços de repetição e a função pop para esvaziar completamente a pilha, garantindo que toda a memória alocada seja liberada.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/3d00b57734745b2d7e0fd49453afed53175c1213/tarefas/tarefa102/tarefa102.c)
