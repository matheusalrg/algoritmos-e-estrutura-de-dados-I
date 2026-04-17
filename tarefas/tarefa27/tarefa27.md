<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 27 </h2>
      <p>Escreva um programa em C que defina um modelo para um inimigo usando uma struct e, em seguida, crie e exiba as informações de dois inimigos diferentes.</p>
    </td>
  </tr>
</table>

## ❗Problema: Modelando Inimigos do Jogo 🧱🦹‍♂️

  - **Contexto:** *Você está desenvolvendo um jogo de plataforma e precisa criar diferentes tipos de inimigos. Cada inimigo no jogo terá um conjunto de atributos: uma quantidade de vida, um valor de ataque e uma velocidade de movimento. Por exemplo, um inimigo básico como um "Cogumelo zumbi" pode ter pouca vida e ser lento, enquanto um "Cavaleiro esqueleto" pode ter mais vida, um ataque mais forte e se mover mais rápido.
Usar uma struct é a maneira perfeita de organizar esses atributos para cada tipo de inimigo, mantendo o código limpo e lógico.*

## 📋 Requisitos

  - **Definição da Estrutura:** Crie uma struct chamada Inimigo. Ela deve conter os seguintes membros: <br>
  Um int chamado vida. <br>
  Um int chamado ataque. <br>
  Um float chamado velocidade. <br>

  - **Criação dos Inimigos:** Na sua função main, declare duas variáveis do tipo struct Inimigo: uma chamada cogumelo_zumbi e outra chamada cavaleiro_esqueleto.

  - **Atribuição de Atributos:**
  Para a variável cogumelo_zumbi, atribua os seguintes valores: vida = 20, ataque = 5, velocidade = 0.8. <br>
  Para a variável cavaleiro_esqueleto, atribua os seguintes valores: vida = 80, ataque = 15, velocidade = 1.2. <br>
  Exibição dos Dados: Imprima na tela os atributos de cada um dos inimigos de forma organizada. A saída esperada é: <br>

--- Atributos do Inimigo: Cogumelo Zumbi --- <br>
Vida: 20 <br>
Ataque: 5 <br>
Velocidade: 0.8 <br>

--- Atributos do Inimigo: Cavaleiro Esqueleto --- <br>
Vida: 80 <br>
Ataque: 15 <br>
Velocidade: 1.2
  
📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/142980b8d3e9ecc392a6d3d09058a667c87c4ff1/tarefas/tarefa27/tarefa27.c)
