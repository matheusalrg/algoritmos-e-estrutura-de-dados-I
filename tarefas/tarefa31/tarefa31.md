<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 31 </h2>
      <p>Escreva um programa em C que defina um tipo para um item coletável e depois crie uma instância desse item com os dados fornecidos pelo usuário.</p>
    </td>
  </tr>
</table>

## ❗Problema: Coletável de Pontuação no Jogo 🪙🎮

  - **Contexto:** *Em um jogo de plataforma, o cenário está repleto de itens coletáveis, como moedas ou gemas. Cada tipo de coletável pode ter características diferentes. Por exemplo, uma "gema azul" pode valer mais pontos que uma "moeda de bronze", e cada uma tem uma posição única (X, Y) no mapa do jogo. Para organizar esses dados de forma eficiente, usamos uma estrutura para representar cada item.*

## 📋 Requisitos

  - **Definição do Tipo:** Usando typedef struct, crie um novo tipo chamado Coletavel.

  - **Membros da Estrutura:** A estrutura Coletavel deve conter os seguintes membros: <br>
  pontos (um int para o valor do item). <br>
  pos_x (um float para a coordenada X). <br>
  pos_y (um float para a coordenada Y). <br>
  
  - **Declaração da Variável:** Na sua função main, declare uma variável do tipo Coletavel chamada gema_rara.

  - **Entrada de Dados:** Peça ao usuário que digite o valor em pontos, a posição X e a posição Y da gema_rara.

  - **Armazenamento:** Utilize a função scanf para ler os dados e armazená-los nos membros correspondentes da variável gema_rara.

  - **Saída de Dados:** Ao final, exiba uma mensagem formatada com os dados do item criado. A saída deve ser: "Coletável criado! Valor: [pontos] pontos. Posição: (X=[x], Y=[y])".

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/15a3d0d514e320bf1d4f588aca587b0e902a5a89/tarefas/tarefa31/tarefa31.c)
