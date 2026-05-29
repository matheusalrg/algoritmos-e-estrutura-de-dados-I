<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 40 </h2>
      <p>Crie um programa em C que leia o nome e a pontuação de um número 'n' de jogadores. O programa deve identificar qual jogador obteve a maior pontuação e, em seguida, escrever o nome e a pontuação apenas deste jogador em um arquivo chamado highscore.txt.</p>
    </td>
  </tr>
</table>

## ❗Salvando o Recorde do Jogo 🕹️

  - **Contexto:** *Suponhamos que você esta desenvolvendo um jogo de corrida arcade, 'Nitro Dash', ao final de cada sessão com múltiplos jogadores, o sistema deve registrar permanentemente o recorde da partida. Em vez de apenas mostrar o vencedor na tela, essa informação precisa ser salva em um arquivo de texto para que possa ser lida posteriormente pelo menu principal do jogo, exibindo o 'High Score' atual.*

## 📋 Requisitos

  - O programa deve primeiro ler um número inteiro n, que representa a quantidade de jogadores na partida.
  - Utilize uma struct para armazenar os dados de cada jogador (nome e pontuação).
  - Leia os dados dos n jogadores do console e armazene-os em um vetor de structs.
  - Implemente uma lógica para encontrar o jogador com a maior pontuação.
  - Abra um arquivo chamado highscore.txt em modo de escrita ("w").
  - Utilize a função fprintf() para escrever o nome e a pontuação do jogador recordista no arquivo, no formato "Nome: [nome], Pontuacao: [pontuacao]".
  - Feche o arquivo corretamente ao final da operação.

📌 **Resposta:** [💻 Ver solução em C]()
