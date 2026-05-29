<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 39 </h2>
      <p>Escreva um programa em C que leia os dados de três tipos de inimigos de um arquivo de texto chamado inimigos.txt. Cada linha do arquivo conterá o nome do inimigo (uma única palavra), seus pontos de vida (HP) e seu poder de ataque (ATK).</p>
    </td>
  </tr>
</table>

## ❗Problema: Carregando Atributos de Inimigos de um Arquivo 📁

  - **Contexto:** *Imagine que você é um desenvolvedor para um novo RPG de fantasia, "Dragon's Grimoire". Para balancear o jogo, a equipe de design criou um arquivo de texto contendo os atributos base de diferentes tipos de inimigos. Seu trabalho é criar um programa que leia este arquivo, analise os dados e identifique quais inimigos são considerados "elite" com base em seus atributos combinados.*

## 📋 Requisitos

- Defina uma struct para armazenar os dados de um inimigo (nome, HP, ATK).
- Crie um arquivo chamado inimigos.txt no mesmo diretório do seu código-fonte com o seguinte conteúdo:
  Goblin 80.0 30.5
  Orc 150.0 55.0
  Dragao 500.0 95.5
- Seu programa deve abrir e ler os dados deste arquivo para um vetor de estruturas.
- Para cada inimigo, calcule um "Nível de Ameaça" somando seu HP e seu ATK.
- Imprima na tela o nome e o Nível de Ameaça apenas dos inimigos considerados "elite", ou seja, aqueles cujo Nível de Ameaça seja maior ou igual a 200.
- Feche o arquivo corretamente ao final do programa.

📌 **Resposta:** [💻 Ver solução em C]()
