<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 71 </h2>
      <p>Você deve implementar o módulo de priorização de alvos da IA. Seu programa lerá os dados de 'N' naves inimigas (ID e nível de ameaça) e, em seguida, usará o algoritmo Merge Sort para ordenar a lista de inimigos com base no nível de ameaça, em ordem crescente. Ao final, o programa deve imprimir a sequência de IDs das naves inimigas já ordenadas por prioridade.</p>
    </td>
  </tr>
</table>

## ❗Problema: Ordenação de Alvos por Prioridade com Merge Sort 🔢🎯

  - **Contexto:** *Em um jogo de estratégia espacial, sua frota de naves de combate é controlada por uma IA (Inteligência Artificial) avançada. Em uma batalha, o sistema de radar detecta múltiplos alvos inimigos, cada um com um 'nível de ameaça' calculado com base em seu poder de fogo, velocidade e blindagem. Para maximizar a eficácia em combate, a IA precisa ordenar a lista de alvos de forma que as naves foquem fogo nos inimigos de menor ameaça primeiro, eliminando-os rapidamente antes de passar para os alvos mais perigosos.*

## 📋 Requisitos

  - Utilize uma struct para representar cada nave inimiga, contendo um campo para o id (inteiro) e outro para o nivel_ameaca (inteiro).
  - O programa deve primeiro ler um número inteiro N, que representa a quantidade de naves inimigas.
  - Em seguida, leia os dados (id e nivel_ameaca) para cada uma das N naves e armazene-os em um vetor de structs.
  - Implemente o algoritmo de ordenação **Merge Sort** para ordenar o vetor de naves com base no campo nivel_ameaca.
  - Após a ordenação, imprima na tela apenas os ids das naves, separados por um espaço, na nova ordem de prioridade (do menor para o maior nível de ameaça).

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/e77678ac5b906a17a5652b7454898c4b0b7f277c/tarefas/tarefa71/tarefa71.c)
