<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 98 </h2>
      <p>Sua missão é implementar a funcionalidade que carrega o registro de membros de uma guilda a partir de um arquivo binário guild_roster.b, armazena esses dados em uma lista encadeada e, em seguida, exibe a lista de membros na tela. Este processo simula o carregamento de um 'save game' do estado da guilda.</p>
    </td>
  </tr>
</table>

## ❗Problema: Carregar o Roster de uma Guilda de um Arquivo de Save

  - **Contexto:** *Em um RPG online, quando um servidor de jogo é reiniciado para manutenção, ele precisa recarregar os dados de todas as guildas salvas para que os jogadores encontrem seus grupos intactos ao voltarem a jogar. As informações dos membros de cada guilda (ID, nome e nível) são salvas em um arquivo binário para garantir um carregamento rápido e eficiente.*

## 📋 Requisitos

  - Defina uma struct para representar um Membro da guilda, contendo um id (int), nome (char[100]) e nivel (int).
  - Utilize a implementação padrão de lista encadeada com struct No e struct Lista que você já conhece.
  - Crie uma função Lista carregar_guilda(). Esta função deve: <br>
  a. Abrir o arquivo guild_roster.b em modo de leitura binária ("rb"). <br>
  b. Criar uma nova lista encadeada vazia. <br>
  c. Usar um laço com a função fread() para ler cada Membro do arquivo, um de cada vez. <br>
  d. Para cada membro lido, inseri-lo no final da nova lista encadeada. <br>
  e. Fechar o arquivo e retornar a lista completamente preenchida.
  - Na função main, chame a função carregar_guilda() para obter a lista de membros e, em seguida, chame uma função mostrar_guilda() para imprimir os dados de todos os membros carregados, verificando se o processo foi bem-sucedido.
  - Para testar, você precisará de um arquivo guild_roster.b. Você pode criar uma função auxiliar salvar_guilda_teste() que cria uma lista com 3 membros fixos e a salva no arquivo usando fwrite(), similar ao que foi visto na aula anterior. Chame essa função de salvamento antes da de carregamento para garantir que o arquivo de teste exista.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/9b9533cdb1e93adc35c5fb9bb80171bbeea15170/tarefas/tarefa98/tarefa98.c)
