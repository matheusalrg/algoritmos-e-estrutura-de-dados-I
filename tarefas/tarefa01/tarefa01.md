<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 01 </h2>
      <p>Escreva um programa em C que simule o personagem perdendo um pouco de vida e depois coletando um item de "power-up" que a restaura.</p>
    </td>
  </tr>
</table>

## ❗Problema: O Power-up e a Vida do Jogador 🩸

 - **Contexto:** *Em alguns jogos de plataforma. O personagem tem uma barra de vida que normalmente tem 100 pontos. Ao percorrer o cenário, existem itens de "power-up" que, quando coletados, restauraram completamente a vida do jogador, voltando-a para o valor máximo de 100. As função que implementam a lógica do "power-up" no motor dos jogos devem ser projetadas para ser muito eficiente. Para fazer isto em C, em vez de receber uma cópia da variável de vida, ela recebe a onde a vida do jogador está armazenada e a altera diretamente nesse local.*

## 📋 Requisitos

  - **Variável de Vida:** Crie uma variável inteira chamada vida_jogador e inicialize-a com o valor 100.  

  - **Ponteiro de Vida:** Crie uma variável do tipo "ponteiro para inteiro" chamada ponteiro_vida.  

  - **Simulando Dano:** Para simular que o jogador sofreu dano, altere o valor da variável vida_jogador para 50.  

  - **Imprima o Dano:** Mostre na tela a vida do jogador após o dano. A saída deve ser: "O jogador sofreu dano! Vida atual: 50"  

  - **Conecte o Ponteiro:** Faça com que o ponteiro_vida aponte para o endereço de memória da variável vida_jogador.  

  - **Use o Power-up:** Simule a coleta do item. (ponteiro_vida), restaure a vida do jogador para 100. (Dica: você precisará do operador de indireção *).  

  - **Imprima a Restauração:** Mostre na tela a vida do jogador após usar o "power-up". A saída deve ser: "Power-up coletado! Vida restaurada: 100"

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/1ed276be141d9aa76ac3139d3401cae8ae80c5aa/tarefas/tarefa01/tarefa01.c)
