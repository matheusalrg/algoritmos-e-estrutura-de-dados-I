<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 28 </h2>
      <p>Escreva um programa em C que defina o estado de um personagem de jogo. O programa deve simular o personagem começando o nível, coletando uma moeda e, em seguida, pegando um item de "power-up" que lhe concede um pulo duplo.</p>
    </td>
  </tr>
</table>

## ❗Problema: O Estado do Personagem em um Jogo de Plataforma 🙎‍♂️🎮

  - **Contexto:** *Em jogos de plataforma, o personagem principal possui vários atributos que mudam constantemente. Por exemplo, sua posição no cenário, sua pontuação e se ele possui algum poder especial. Em C, uma struct é a ferramenta perfeita para agrupar todos esses dados em uma única variável que representa o nosso herói.*

## 📋 Requisitos

  - **Definição da Estrutura:** Crie uma struct chamada Jogador que contenha os seguintes membros: <br>
  float pos_x; (para a posição horizontal) <br>
  int pontuacao; <br>
  int tem_pulo_duplo; (use 0 para não e 1 para sim) 

  - **Criação do Personagem:** No main, crie uma variável do tipo struct Jogador chamada heroi.

  - **Estado Inicial:** Inicialize os membros da variável heroi com os seguintes valores, simulando o início da fase: <br>
  pos_x deve ser 50.0. <br>
  pontuacao deve ser 0. <br>
  tem_pulo_duplo deve ser 0.

  - **Imprimir Estado Inicial:** Mostre na tela o estado inicial do jogador. A saída deve ser: <br>
  Inicio da fase! Posicao X: 50.0, Pontos: 0, Pulo Duplo: Nao 

  - **Simular Ações:**
  -Coletar Moeda: Altere o membro pontuacao do heroi, adicionando 10 pontos.
  -Coletar Power-up: Altere o membro tem_pulo_duplo do heroi para 1.

**Imprimir Estado Final:** Mostre na tela o novo estado do jogador após as ações. A saída deve ser: <br>
  Itens coletados! Posicao X: 50.0, Pontos: 10, Pulo Duplo: Sim
  
📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/f3d2900192ea727fab5e623e4a462865c401acf3/tarefas/tarefa28/tarefa28.c)
