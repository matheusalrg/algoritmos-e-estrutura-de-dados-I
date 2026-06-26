<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 113 </h2>
      <p>Adicione ao programa a capacidade de salvar todos os jogadores da fila em um arquivo binário. Esta operação garantirá que, mesmo que o programa seja encerrado, a ordem e os dados dos jogadores possam ser recuperados posteriormente.</p>
    </td>
  </tr>
</table>

## ❗Problema: Estrutura de Dados Fila: Salvando a Fila em um Arquivo Binário

  - **Contexto:** *O nosso sistema de matchmaking está se tornando robusto. No entanto, existe um grande risco: se o servidor do jogo reiniciar ou sofrer uma falha de energia, toda a fila de jogadores é perdida. Isso é frustrante para os jogadores que esperaram por muito tempo. Para resolver isso, precisamos implementar um mecanismo de persistência que salve o estado atual da fila em um arquivo.*

## 📋 Requisitos

  - Crie uma nova função void salvarFila(Fila *f, const char *nomeArquivo).
  - Dentro desta função, abra o arquivo especificado em modo de escrita binária ("wb"). É crucial verificar se o arquivo foi aberto com sucesso. Se não, exiba uma mensagem de erro.
  - Percorra a fila do inicio ao fim usando um ponteiro auxiliar.
  - Para cada nó da fila, use a função fwrite() para escrever apenas a estrutura Jogador (dado) no arquivo. Não escreva o nó inteiro, pois o ponteiro prox não tem sentido fora da memória do programa.
  - Após percorrer toda a fila, feche o arquivo com fclose().
  - Atualize o menu principal (main) para incluir uma nova opção, como "Salvar Fila em Arquivo".
  - Quando o usuário selecionar essa opção, o programa deve chamar a função salvarFila com um nome de arquivo fixo, por exemplo, "matchmaking_queue.bin".

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/ca8674502126e4e7d412cbeccd3133d03642aa29/tarefas/tarefa113/tarefa113.c)
