<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 91 </h2>
      <p>Sua tarefa é expandir um programa de gerenciamento de missões em C que utiliza uma lista encadeada. Você deve implementar a funcionalidade crucial: deletar a etapa que vem ANTES de uma etapa específica, identificada por seu ID.</p>
    </td>
  </tr>
</table>

## ❗Problema: Gerenciador de Etapas de Missão 🎯

  - **Contexto:** *Em um RPG, missões (quests) são compostas por uma série de etapas que devem ser completadas em sequência. O sistema de missões é implementado como uma lista encadeada, onde cada nó representa uma etapa da missão (com um ID único e uma descrição). Às vezes, o jogador pode encontrar um atalho ou usar uma habilidade especial que completa uma etapa e, como consequência, a etapa anterior se torna irrelevante e precisa ser removida do diário de missões para evitar confusão. Por exemplo, se a missão é 'Coletar Chave' -> 'Abrir Portão', e o jogador usa uma habilidade de arrombamento para abrir o portão, a etapa 'Coletar Chave' não é mais necessária.*

## 📋 Requisitos

  - O programa deve usar uma struct para representar uma Etapa de missão, contendo um int id e um char descricao[100].
  - A lista encadeada deve ser gerenciada através de struct No e struct Lista.
  - O programa deve apresentar um menu com as seguintes opções: <br>
  -Inserir etapa no fim da lista. <br>
  -Mostrar todas as etapas da missão. <br>
  -Deletar etapa ANTES de um ID específico (o foco do problema). <br>
  -Sair.
  - A função deletar_antes deve tratar corretamente todos os casos especiais discutidos na aula: <br>
  -A lista está vazia. <br>
  -A etapa de referência é a primeira da lista (não há etapa anterior para deletar). <br>
  -A etapa a ser deletada é a primeira da lista (a etapa de referência é a segunda). <br>
  -A etapa a ser deletada está no meio da lista (caso geral). <br>
  -A etapa de referência informada não existe na lista.

📌 **Resposta:** [💻 Ver solução em C]()
