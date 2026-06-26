<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 97 </h2>
      <p>Sua missão é implementar a funcionalidade de 'salvar' para o registro de uma guilda, que é gerenciado como uma lista encadeada. Você irá estender um programa existente que já manipula a lista de membros, adicionando uma nova opção no menu para escrever toda a lista de membros em um arquivo binário chamado guild_roster.bin.</p>
    </td>
  </tr>
</table>

## ❗Problema: Implementar a funcionalidade de salvar o estado de uma guilda de jogadores em um arquivo binário.

  - **Contexto:** *Em um jogo de RPG online (MMORPG), a capacidade de salvar o estado de uma 'guilda' (um grupo de jogadores) é crucial. Quando o servidor precisa ser reiniciado para manutenção, ele deve salvar todos os registros de guildas para que possam ser recarregados quando o servidor voltar a funcionar. Armazenar esses dados em um formato binário compacto e eficiente é a prática padrão da indústria para garantir rapidez e segurança.*

## 📋 Requisitos

  - O programa deve gerenciar uma lista encadeada de Membro structs, onde cada membro possui um ID (inteiro) e um nome (string).
  - Crie uma nova função, salvar_guild_arquivo(Lista lista), que recebe a lista de membros como parâmetro.
  - Dentro desta função, abra um arquivo chamado guild_roster.bin em modo de escrita binária ("wb").
  - A função deve percorrer a lista encadeada do início ao fim.
  - Para cada nó da lista, utilize a função fwrite() para escrever a struct Membro (os dados do jogador) no arquivo.
  - É fundamental que apenas os dados do membro sejam salvos. Os ponteiros prox que formam a estrutura da lista não devem ser escritos no arquivo.
  - Após escrever todos os membros, o arquivo deve ser devidamente fechado com fclose().
  - Integre a chamada a esta nova função no menu principal do programa.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/eed34ba18e6c713abe9eb24eb014a25e896605ff/tarefas/tarefa97/tarefa.c)
