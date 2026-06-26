<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 78 </h2>
      <p>Sua tarefa final nesta saga é implementar a funcionalidade de salvar a pilha de comandos do Arcanista em um arquivo binário. Isso garantirá que a sequência de feitiços possa ser armazenada permanentemente no disco.</p>
    </td>
  </tr>
</table>

## ❗Problema: Arquivando a Sabedoria no Grimório (Salvar Pilha em Arquivo)

  - **Contexto:** *O Arcanista dedicou tempo planejando uma sequência complexa e poderosa de feitiços. Seria uma grande perda de tempo e esforço se ele tivesse que refazer tudo cada vez que precisasse descansar (ou seja, fechar o programa). Para evitar isso, ele precisa de uma forma de registrar seus planos em seu grimório mágico. Isso permitirá que ele salve seu estado atual e, em uma futura aventura (ou aula), recupere exatamente de onde parou.*

## 📋 Requisitos

  - Utilize o código da atividade anterior como base.
  - Implemente uma função void salvar_pilha_em_arquivo(Pilha *p, const char* nome_arquivo).
  - Dentro desta função, você deve:
  -Abrir um arquivo no modo de escrita binária ("wb"). Lembre-se de verificar se o arquivo foi aberto com sucesso.
  -Percorrer toda a pilha, do topo à base, usando um ponteiro auxiliar.
  -Para cada nó na pilha, use a função fwrite() para escrever apenas a estrutura Feitico (aux->dado) no arquivo. Não salve os ponteiros!
  -Após percorrer toda a pilha, feche o arquivo com fclose().
  - Adicione uma nova opção ao menu, como 5: Salvar Sequência no Grimório. Reenumere a opção de sair.
  - Ao selecionar a nova opção, o programa deve chamar a função salvar_pilha_em_arquivo, usando um nome de arquivo fixo, como "grimorio.bin".
  - Exiba uma mensagem de sucesso ao usuário após salvar, ou uma mensagem de erro caso não seja possível abrir o arquivo.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/2aa143d61fde7a9cac29fd36976f2e600a8748d7/tarefas/tarefa106/tarefa106.c)
