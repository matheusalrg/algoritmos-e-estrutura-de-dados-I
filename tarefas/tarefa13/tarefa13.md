<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 13 </h2>
      <p>Crie um programa em C que simule essa situação. O programa deve ter uma palavra secreta pré-definida e deve pedir ao jogador para digitar a palavra que ele acha que é a correta. Em seguida, o programa deve informar se a porta se abriu ou se a palavra está incorreta.</p>
    </td>
  </tr>
</table>

## ❗Problema: A Palavra Secreta da Porta Mágica 🚪🪄

  - **Contexto:** *Em um jogo de plataforma, o herói encontra uma porta mágica que só pode ser aberta se ele digitar a palavra secreta correta. A palavra está escrita em um pergaminho antigo que ele encontrou em uma fase anterior. O sistema do jogo precisa comparar a palavra que o jogador digita com a palavra secreta para decidir se a porta deve ou não se abrir.*

## 📋 Requisitos

  - **Bibliotecas:** Inclua as bibliotecas stdio.h para entrada/saída e string.h para usar a função de comparação de strings.

  - **Palavra Secreta:** Crie uma variável do tipo string (vetor de char) chamada palavra_secreta e inicialize-a com a palavra "LUX".

  - **Entrada do Jogador:** Crie outra string chamada tentativa_jogador com espaço suficiente para armazenar a palavra que o jogador irá digitar (ex: 50 caracteres).

  - **Pedir a Palavra:** Mostre uma mensagem na tela para o jogador, como: Uma voz ancestral ecoa... 'Diga a palavra e passe':

  - **Ler a Palavra:** Use a função scanf() para ler a palavra digitada pelo jogador e armazená-la na variável tentativa_jogador.

  - **Comparar as Palavras:** Use a função strcmp() dentro de uma estrutura if-else para comparar a palavra_secreta com a tentativa_jogador.

  - **Imprimir o Resultado:**
  Se as palavras forem iguais, imprima: A porta magica se abre!
  Se as palavras forem diferentes, imprima: Nada acontece... Parece que a palavra esta incorreta.
  
📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/3e61198de0eb3bd31f505014a777cc380bae5b33/tarefas/tarefa13/tarefa13.c)
