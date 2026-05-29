<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 52 </h2>
      <p>Escreva um programa em C que primeiro leia o número de unidades inimigas n no campo de batalha. Em seguida, para cada uma das n unidades, o programa deve ler suas coordenadas (x, y). Por fim, o programa deve ler um valor de ponto flutuante para o 'raio de explosão'. Sua tarefa é calcular e informar quantas duplas distintas de inimigos estão dentro desse raio de explosão uma da outra. A análise de todas as duplas resultará em um algoritmo de complexidade quadrática.</p>
    </td>
  </tr>
</table>

## ❗Problema: Análise de Proximidade de Inimigos para Ataques em Área ⚔️

  - **Contexto:** *Em um jogo de estratégia como 'Warfront Tactics', uma unidade de artilharia pode lançar um poderoso ataque de área de efeito (AoE - Area of Effect). Para que este ataque seja eficiente, a IA (Inteligência Artificial) do jogo precisa identificar grupos de inimigos que estão agrupados. Um agrupamento é definido como qualquer par de unidades inimigas que estejam a uma distância menor ou igual a um determinado 'raio de explosão' uma da outra.

## 📋 Requisitos

  - Crie uma **struct** chamada **Unidade** para armazenar as coordenadas **x** e **y** (ambas inteiras) de cada inimigo.
  - Use **malloc()** para alocar dinamicamente um vetor de **structs** para armazenar os dados de todas as **n** unidades.
  - Utilize laços aninhados para comparar cada unidade com todas as outras unidades. Evite comparar uma unidade com ela mesma e evite contar o mesmo par duas vezes (por exemplo, se já comparou a unidade A com a B, não precisa comparar a B com a A).
  - Para calcular a distância entre dois pontos (x1, y1) e (x2, y2), utilize a fórmula: **distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)).** Para isso, você precisará incluir a biblioteca **<math.h>** e compilar com a flag **-lm** se estiver no Linux/GCC.
  - Conte quantas duplas de unidades têm uma distância entre si menor ou igual ao raio fornecido.
  - Ao final, imprima a contagem total de duplas próximas.
  - Lembre-se de liberar a memória alocada dinamicamente com **free()** antes de encerrar o programa.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/15a75773cb40b8329fef77160654fbf5ce3cbc78/tarefas/tarefa52/tarefa52.c)
