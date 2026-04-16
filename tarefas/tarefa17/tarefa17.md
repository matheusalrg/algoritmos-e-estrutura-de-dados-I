<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 17 </h2>
      <p>Escreva um programa em C que crie uma pequena representação de um mapa de jogo usando uma matriz. Após preencher o mapa com valores, o programa deve pesquisar e informar as coordenadas de todos os espinhos (valor 2) encontrados no mapa.".</p>
    </td>
  </tr>
</table>

## ❗Problema: Criando e Verificando o Mapa do Jogo 🗺️🎮

  - **Contexto:** *Em jogos de plataforma, os níveis ou mapas são frequentemente construídos como uma grade bidimensional, que em programação pode ser representada por uma matriz. Cada célula da matriz pode conter um número que identifica o que existe naquela posição: 0 para um espaço vazio, 1 para uma plataforma sólida, 2 para um espinho perigoso, e assim por diante. Antes de o jogador começar a fase, o jogo precisa carregar o mapa e saber onde estão os elementos.*

## 📋 Requisitos

  - **Definir o Mapa:** Crie uma matriz de inteiros 5x8 (5 linhas e 8 colunas) chamada mapa_fase1.

  - **Inicializar o Mapa:** Preencha a matriz com os seguintes valores, que representam o design da fase: <br>
  { <br>
    {0, 0, 0, 0, 0, 0, 0, 0}, <br>
    {0, 0, 0, 0, 0, 0, 0, 0}, <br>
    {1, 1, 0, 0, 2, 0, 1, 1}, <br>
    {0, 0, 1, 1, 0, 1, 0, 0}, <br>
    {1, 1, 1, 1, 2, 2, 1, 1} <br>
  }

  - **Encontrar os Espinhos:** Percorra toda a matriz mapa_fase1 usando laços for aninhados.

  - **Imprimir Coordenadas:** Para cada célula da matriz que contiver o valor 2 (representando um espinho), imprima uma mensagem na tela indicando sua localização (linha e coluna). A saída deve seguir o formato: "Espinho encontrado na linha X, coluna Y".
  
📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/c28eb92519f2aae32b584d3197c8b212ae021834/tarefas/tarefa17/tarefa17.c)
