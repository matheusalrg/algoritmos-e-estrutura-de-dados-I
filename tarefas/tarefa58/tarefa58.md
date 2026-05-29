<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 58 </h2>
      <p>Você precisa implementar a lógica que calcula o dano bônus para qualquer golpe na sequência. Para isso, você criará uma função recursiva que modela perfeitamente essa regra de dano crescente. O uso de recursão com múltiplas chamadas é essencial para refletir a dependência de um golpe nos seus antecessores.</p>
    </td>
  </tr>
</table>

## ❗Problema: Recursão Múltipla e a Sequência de Fibonacci ✖️

  - **Contexto:** *Supondo um jogo de ação e RPG, existe uma habilidade especial chamada "Golpe Ecoante". Esta habilidade permite ao jogador executar uma sequência de golpes, onde o dano bônus de cada golpe na sequência segue um padrão místico. O dano bônus não é fixo; ele aumenta com base nos dois golpes anteriores, criando um efeito de cascata devastador.

- A regra do "Golpe Ecoante" é a seguinte:
- O 1º golpe na sequência não tem dano bônus (0 pontos).
- O 2º golpe na sequência tem um pequeno bônus de 1 ponto de dano.
- A partir do 3º golpe, o dano bônus de um golpe é a soma do dano bônus dos dois golpes imediatamente anteriores.*

## 📋 Requisitos

  - Crie um programa que leia um número inteiro N do usuário, representando o número do golpe na sequência do "Golpe Ecoante".
  - Implemente uma função recursiva chamada **calcularDanoEco(int n).**
  - A função deve ter os seguintes casos base:
  - Se n for 1, a função deve retornar 0.
  - Se n for 2, a função deve retornar 1.
  - Para qualquer n maior que 2, a função deve retornar a soma de **calcularDanoEco(n - 1) e calcularDanoEco(n - 2).**
  - Na função **main,** chame a função recursiva com o número N lido e imprima o valor do dano bônus resultante.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/92ad914056eb33c67e028a6d446dbed36162c453/tarefas/tarefa58/tarefa58.c)
