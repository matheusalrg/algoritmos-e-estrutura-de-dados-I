<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 43 </h2>
      <p>Crie um programa em C que leia os dados de um número indeterminado de inimigos de um arquivo chamado wave_data.txt. Cada linha do arquivo contém o nome de um inimigo (uma única palavra), seus pontos de vida (inteiro) e seu poder de ataque (inteiro). O programa deve ler todos os inimigos, encontrar aquele com o maior poder de ataque e imprimir seu nome, vida e ataque na tela.</p>
    </td>
  </tr>
</table>

## ❗Problema: Identificando a Maior Ameaça em uma Horda de Inimigos 🦹🏽

  - **Contexto:** *Suponhamos que em um jogo de Tower Defense, cada onda de ataque é definida em um arquivo de texto (wave_data.txt). Este arquivo lista todos os inimigos que aparecerão, mas o número de inimigos pode variar de onda para onda. Para a IA do jogo priorizar os alvos mais perigosos, o sistema precisa ler todos os inimigos da onda e identificar qual deles possui o maior poder de ataque.*

## 📋 Requisitos

  - Defina uma struct chamada Inimigo para armazenar o nome (string com até 50 caracteres), vida (int) e ataque (int).
  - Use typedef para criar um alias Inimigo para a estrutura.
  - Abra e leia o arquivo wave_data.txt. Se o arquivo não puder ser aberto, exiba uma mensagem de erro e encerre o programa.
  - Use um laço while com fscanf() e a verificação != EOF para ler todos os inimigos do arquivo.
  - Armazene os dados do inimigo mais forte encontrado até o momento em uma variável do tipo Inimigo.
  - Após ler todo o arquivo, imprima os dados do inimigo com o maior ataque, no formato: "Maior Ameaça: [nome], Vida: [vida], Ataque: [ataque]\n".
  - O arquivo wave_data.txt deve ser criado por você e ter o seguinte formato (o número de linhas é variável):
  Goblin 50 10
  Orc 120 25
  Esqueleto 75 15
  Lich 200 50
  Gargula 90 22
  - A saída esperada para o exemplo acima seria: Maior Ameaça: Lich, Vida: 200, Ataque: 50
    
📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/9704af7f9e2e91986db6d4933609752158b7f266/tarefas/tarefa43/tarefa43.c)
