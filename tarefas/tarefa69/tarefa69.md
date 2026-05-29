<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 69 </h2>
      <p>Você deve criar um programa em C que leia os dados de duas ondas de inimigos (Portal Alfa e Portal Beta). Para cada onda, o programa primeiro lerá o número de inimigos e, em seguida, o nível de ameaça de cada um. Assuma que os níveis de ameaça em cada onda de entrada já estão ordenados de forma crescente.

O programa deve então criar uma terceira lista que intercala as duas ondas, resultando em uma única lista com todos os inimigos, também ordenada de forma crescente pelo nível de ameaça. Finalmente, o programa deve imprimir esta lista final e ordenada.</p>
    </td>
  </tr>
</table>

## ❗Problema: Intercalando Ondas de Inimigos 🌊🪖

  - **Contexto:** *Em um jogo de defesa de torre (Tower Defense), os inimigos avançam em direção à sua base a partir de dois portais de invocação distintos, o Portal Alfa e o Portal Beta. Para otimizar o posicionamento das torres, o sistema de defesa precisa de uma lista unificada e ordenada de todas as unidades inimigas que se aproximam, classificadas por seu 'nível de ameaça'.

Cada portal gera sua própria onda de inimigos, e a lista de inimigos de cada portal já está ordenada de forma crescente pelo nível de ameaça. Sua missão é criar um programa que leia as duas listas de inimigos e as intercale em uma única lista, mantendo a ordem crescente de ameaça.*

## 📋 Requisitos

  - Leia um inteiro n representando o número de inimigos do Portal Alfa.
  - Leia n inteiros (níveis de ameaça) e armazene-os em um primeiro vetor.
  - Leia um inteiro m representando o número de inimigos do Portal Beta.
  - Leia m inteiros (níveis de ameaça) e armazene-os em um segundo vetor.
  - Crie um terceiro vetor com tamanho n + m.
  - Implemente a lógica de intercalação (merge) para combinar os dois vetores ordenados no terceiro vetor, mantendo a ordem.
  - Imprima os elementos do terceiro vetor, separados por um espaço.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/da39a62e642994395ef002f5a469b2c9c58bab07/tarefas/tarefa69/tarefa69.c)
