<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 46 </h2>
      <p>Escreva um programa em C que leia continuamente os perfis de jogadores do arquivo binário profiles.dat até que não haja mais perfis para ler. Para cada perfil lido, o programa deve determinar e imprimir o 'Rank' do jogador com base em sua pontuação máxima (high score).</p>
    </td>
  </tr>
</table>

## ❗Problema: O Estado do Personagem no Jogo de Plataforma 🧑

  - **Contexto:** *Em jogos de RPG, é fundamental poder salvar e carregar o progresso dos jogadores. Em vez de arquivos de texto, que são fáceis de editar, muitos jogos usam arquivos binários para armazenar os 'save games'. Isso torna os arquivos mais compactos, rápidos e seguros. Crie a funcionalidade que carrega os dados de múltiplos perfis de jogadores a partir de um arquivo binário chamado profiles.dat.*

## 📋 Requisitos

  - Defina uma **struct** chamada **PlayerProfile** que contenha:
  char nome[50]
  int nivel
  int highScore
  - O programa deve abrir o arquivo **profiles.dat** no modo de leitura binária (**"rb"**).
  - Utilize um laço **while** com a função **fread()** para ler cada **PlayerProfile** do arquivo, um por um, até o final do arquivo.
  - Dentro do laço, para cada perfil lido, imprima o nome do jogador e seu respectivo Rank, de acordo com as seguintes regras:
  Se **highScore > 10000**, o Rank é: **Mestre do Jogo**
  Se **highScore > 5000** (mas não > 10000), o Rank é: **Veterano**
  Se **highScore <= 5000**, o Rank é: **Aspirante**
  - O programa deve fechar o arquivo corretamente antes de terminar.
  - **Importante:** Para testar seu programa, você precisará de um arquivo profiles.dat. O código de resposta fornecido inclui um programa auxiliar (comentado) que você pode usar para criar este arquivo de teste antes de executar sua solução de leitura.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/74bd452a3f16b4b72d9ca6de8801d532bc383fca/tarefas/tarefa46/tarefa46.c)
