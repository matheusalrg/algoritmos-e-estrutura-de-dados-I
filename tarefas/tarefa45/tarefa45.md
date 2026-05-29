<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 45 </h2>
      <p>Você deve criar um programa em C que funcione como um sistema de criação de personagens para um RPG. O programa deve apresentar um menu com as opções para 'Criar Novo Personagem' ou 'Sair'. Toda vez que um novo personagem for criado, suas informações (nome, nível, vida e mana) devem ser salvas em um arquivo binário chamado savegame.sav.
</p>
    </td>
  </tr>
</table>

## ❗Problema: O Estado do Personagem no Jogo de Plataforma 🩸🫅

  - **Contexto:** *Em qualquer jogo de RPG, a capacidade de salvar o progresso do jogador é essencial. Em vez de usar um arquivo de texto, que pode ser facilmente lido e modificado por jogadores, muitos jogos usam um formato binário para armazenar os 'save games'. Isso torna os arquivos mais compactos, mais rápidos de carregar e um pouco mais difíceis de adulterar.*

## 📋 Requisitos

  - Defina uma **struct** chamada **Personagem** para armazenar o nome (string de até 50 caracteres), nível (inteiro), vida (float) e mana (float).
  - Crie um menu interativo que continue em execução até que o usuário escolha a opção 'Sair'.
  - Ao escolher 'Criar Novo Personagem', o programa deve solicitar ao usuário que insira as informações do personagem.
  - As informações de cada personagem criado devem ser escritas em um arquivo binário chamado **savegame.sav.**
  - Utilize a função **fopen()** com o modo correto para escrita binária (**"wb"**).
  - Utilize a função **fwrite()** para escrever a estrutura do personagem no arquivo.
  - O programa deve fechar o arquivo corretamente antes de terminar.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/1324125e11f0a90d328794fe1e1a3b09f8f61671/tarefas/tarefa45/tarefa45.c)
