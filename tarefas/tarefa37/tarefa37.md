<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 37 </h2>
      <p>Escreva um programa em C que modele um personagem e seus atributos usando estruturas aninhadas. O programa deve inicializar os atributos, simular o personagem coletando um item e sofrendo dano, e depois exibir o status final.</p>
    </td>
  </tr>
</table>

## ❗Problema: Personagem e Seus Atributos 🙎‍♂️💪

  - **Contexto:** *Em um jogo de plataforma, o personagem principal possui um conjunto de atributos que definem seu estado atual no jogo, como sua vida e pontuação. Para organizar melhor o código, é comum agrupar esses atributos em uma estrutura própria. A estrutura principal do personagem, então, conteria essa estrutura de atributos.*

## 📋 Requisitos

  - **Estrutura de Atributos:** Crie uma estrutura chamada Atributos que contenha: <br>
int vida; <br>
int pontuacao; 

  - **Estrutura do Personagem:** Crie uma estrutura chamada Personagem que contenha:
  char nome[50]; <br>
  Uma variável do tipo Atributos chamada stats; <br>
  
  **No programa principal (main):** <br>
-Crie uma variável do tipo Personagem chamada jogador. <br>
-Peça ao usuário para digitar o nome do personagem e armazene-o em jogador.nome. <br>
-Inicialize a vida do jogador em 100 e a pontuação em 0 (acessando através de jogador.stats). <br>
-Imprima o status inicial do jogador. Exemplo de saída: <br>
    Status Inicial -> Nome: Mario | Vida: 100 | Pontuacao: 0 <br>
-Simule que o jogador coletou uma moeda: adicione 10 pontos à sua pontuação. <br>
-Simule que o jogador sofreu dano: subtraia 25 da sua vida. <br>
-Imprima o status final do jogador com os valores atualizados. Exemplo de saída: <br>
    Status Final -> Nome: Mario | Vida: 75 | Pontuacao: 10

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/5069fcf975d8a04e145b67a74cc5a0f096302b05/tarefas/tarefa37/tarefa37.c)
