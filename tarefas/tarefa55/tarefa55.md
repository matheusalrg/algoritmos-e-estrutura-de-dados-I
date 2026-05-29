<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 55 </h2>
      <p>Sua tarefa é criar um programa que simule essa ferramenta de GM. O programa irá ler uma lista de jogadores (ID, nickname e 'pontos de reputação'). Em seguida, o GM poderá pesquisar por um ID, e se o jogador for encontrado, o programa adicionará 100 pontos à sua reputação e exibirá o novo total.</p>
    </td>
  </tr>
</table>

## ❗Problema: Ferramenta de Gerenciamento de Jogadores com Busca Binária 📂

  - **Contexto:** *Em um grande RPG Online (MMORPG), o servidor precisa gerenciar milhares de contas de jogadores. Cada jogador possui um ID numérico único. Quando um administrador de jogo (GM) precisa aplicar uma penalidade ou dar uma recompensa a um jogador específico, ele precisa encontrar a conta do jogador rapidamente usando seu ID. Como os IDs são armazenados em ordem numérica, a busca binária é o método ideal para localizar qualquer jogador em uma fração de segundo, mesmo em um banco de dados com milhões de entradas.*

## 📋 Requisitos

  - Crie uma struct chamada Jogador para armazenar um ID (int), um nickname (char[50]) e os pontos de reputação (int).
  - O programa deve primeiro ler um número N de jogadores a serem cadastrados.
  - Em seguida, leia os dados dos N jogadores. **Importante:** Assuma que os jogadores serão inseridos com IDs em ordem crescente (ex: 1001, 1002, 1005, 1010...).
  - Após o cadastro, o programa deve entrar em um loop com um menu de opções:
  1 - Adicionar Reputação
  2 - Sair
  - Ao escolher a opção 1, o programa deve solicitar o ID do jogador a ser modificado.
  - Implemente uma função de **busca binária** que receba o ID, o vetor de jogadores e o número de jogadores, e retorne o índice do jogador no vetor. Se não encontrar, deve retornar -1.
  - Se o jogador for encontrado, adicione 100 à sua reputação e imprima uma mensagem no formato: **Nickname: [nickname], Nova Reputacao: [reputacao_atualizada]\n.**
  - Se o jogador não for encontrado, imprima: **Jogador com ID [id_pesquisado] nao encontrado.\n.**
  - O programa deve continuar exibindo o menu até que a opção 2 (Sair) seja escolhida.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/5873bcba7151acfffed5ab53bcaf2ee9fe8159f9/tarefas/tarefa55/tarefa55.c)
