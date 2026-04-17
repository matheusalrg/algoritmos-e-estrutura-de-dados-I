<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 38 </h2>
      <p>Escreva um programa em C que defina os possíveis estados de um personagem de jogo e, com base em uma entrada numérica do usuário, identifique e imprima o estado atual do personagem.</p>
    </td>
  </tr>
</table>

## ❗Problema: O Estado do Personagem no Jogo de Plataforma 🩸🫅

  - **Contexto:** *Em um jogo de plataforma, o personagem principal pode estar em vários estados diferentes: parado, correndo, pulando, etc. O motor do jogo precisa saber o estado atual do personagem para aplicar a física correta (como a gravidade quando está pulando) e exibir a animação certa. Usar números "mágicos" (como 0 para parado, 1 para correndo) pode tornar o código confuso e difícil de dar manutenção. Uma enum é a ferramenta perfeita para representar esses estados de forma clara e organizada.*

## 📋 Requisitos

  - **Enum para Estados:** Crie uma enum chamada EstadoPersonagem que contenha os seguintes estados: PARADO, CORRENDO e PULANDO.

  - **Variável de Estado:** Dentro da função main, crie uma variável chamada estado_atual do tipo enum EstadoPersonagem.

  - **Entrada do Usuário:** Peça ao usuário para digitar um número para definir o estado do personagem (0 para PARADO, 1 para CORRENDO, ou 2 para PULANDO).

  - **Leitura e Atribuição:** Leia o número inteiro digitado pelo usuário e atribua-o à sua variável estado_atual.

  - **Lógica de Decisão:** Utilize uma estrutura if-else if-else para verificar o valor da variável estado_atual.

  - **Saída na Tela:** Se o estado for PARADO, imprima a mensagem: "O personagem está parado."
  Se o estado for CORRENDO, imprima a mensagem: "O personagem está correndo!" <br>
  Se o estado for PULANDO, imprima a mensagem: "O personagem está pulando no ar!" <br>
  Se o usuário digitar qualquer outro número, imprima: "Estado inválido!"

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/ce4ffa0b08b5a694ec824eb7ce57c6dfd6624eab/tarefas/tarefa38/tarefa38.c)
