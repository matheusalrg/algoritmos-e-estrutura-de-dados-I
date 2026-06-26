<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 107 </h2>
      <p>Sua tarefa é implementar a funcionalidade que permite ao programa carregar a pilha de comandos a partir do arquivo "grimorio.bin" no momento em que o programa é iniciado.</p>
    </td>
  </tr>
</table>

## ❗Problema: Recuperando a Sabedoria do Grimório (Carregar Pilha de Arquivo)

  - **Contexto:** *O Arcanista retorna de seu descanso, pronto para continuar sua jornada. Ele abre seu grimório mágico, esperando encontrar a sequência de feitiços que ele tão cuidadosamente planejou e salvou. Agora é a hora de trazer esse conhecimento de volta à sua mente (a memória do programa), reconstruindo a pilha de comandos exatamente como estava antes. Esta é a etapa final para alcançar a persistência de dados.*

## 📋 Requisitos

  - Utilize o código da atividade anterior como base. Você precisará da função inverter_pilha de uma aula passada.
  - Implemente uma nova função void carregar_pilha_de_arquivo(Pilha *p, const char* nome_arquivo).
  - Dentro desta função, você deve:
  -Abrir o arquivo especificado no modo de leitura binária ("rb").
  -Importante: Se o arquivo não existir (fopen retornar NULL), a função deve simplesmente retornar sem erro, exibindo uma mensagem como "Nenhum grimório encontrado, iniciando com uma pilha vazia.". Isso é esperado na primeira vez que o programa roda.
  -Use um laço de repetição com fread para ler uma struct Feitico de cada vez do arquivo.
  -Para cada feitiço lido, adicione-o à pilha usando a função push.
  -Após o laço terminar, feche o arquivo.
  - Ponto Crítico: Ao ler do arquivo e empilhar, a ordem dos feitiços será invertida (o primeiro feitiço no arquivo, que era o topo, será o primeiro a ser empilhado, tornando-se a base). Após carregar todos os feitiços, você deve chamar a função inverter_pilha() para restaurar a ordem original correta.
  - No main, chame a nova função carregar_pilha_de_arquivo() logo após a inicialização da pilha e antes de o menu principal ser exibido. Isso garante que o estado anterior seja restaurado no início de cada sessão.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/c28b34b78aebe011435531bec4bdb15460d8f243/tarefas/tarefa107/tarefa107.c)
