<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 114 </h2>
      <p>Modifique o programa para que ele tente carregar automaticamente os dados da fila a partir do arquivo binário "matchmaking_queue.bin" no momento em que é iniciado.</p>
    </td>
  </tr>
</table>

## ❗Problema: Estrutura de Dados em C: Recarregando uma Fila a partir de um Arquivo Binário.

  - **Contexto:** *Após a implementação bem-sucedida de salvar a fila, o passo final para tornar nosso sistema de matchmaking resiliente a falhas é carregar essa fila salva quando o servidor é iniciado. Ao executar o programa, ele deve verificar se existe um arquivo de salvamento e, se houver, reconstruir a fila exatamente como estava antes do encerramento, garantindo que nenhum jogador perca seu lugar.*

## 📋 Requisitos

  - Crie uma nova função void carregarFila(Fila *f, const char *nomeArquivo).
  - Dentro desta função, abra o arquivo especificado em modo de leitura binária ("rb").
  - A função deve ser robusta: se o arquivo não existir (o que acontecerá na primeira vez que o programa for executado), ela deve simplesmente informar ao usuário e retornar, permitindo que o programa continue com uma fila vazia.
  - Se o arquivo for aberto com sucesso, use um laço while e a função fread() para ler cada struct Jogador do arquivo, uma por vez.
  - Para cada jogador lido do arquivo, utilize a função inserir() já existente para adicioná-lo à fila, reconstruindo-a na ordem correta.
  - Após o laço terminar (quando fread() não conseguir ler mais nenhum registro), feche o arquivo.
  - Na função main, chame a nova função carregarFila uma vez, logo após a inicialização da fila e antes do início do loop do menu.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/3e3bc20e855d7a57bb0e81caafb2d516b8325011/tarefas/tarefa114/tarefa114.c)
