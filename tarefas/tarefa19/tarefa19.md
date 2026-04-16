<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 19 </h2>
      <p>Escreva um programa em C que simule a invocação de um inimigo. O programa deve alocar dinamicamente um espaço na memória para guardar a vida do inimigo, definir sua vida inicial, simular um ataque do jogador que reduz essa vida e, por fim, mostrar a vida restante.</p>
    </td>
  </tr>
</table>

## ❗Problema: Power-up de Salto Duplo 💯

  - **Contexto:** *Em um jogo de plataforma, nosso personagem começa com um salto normal. Em uma fase específica, ele pode coletar um item especial, a "Pena Dourada", que lhe concede a habilidade de Salto Duplo. A altura extra que o Salto Duplo proporciona só precisa ser armazenada na memória do jogo depois que o jogador coleta a pena. Antes disso, não há necessidade de gastar memória com essa informação.
Para otimizar o uso da memória, vamos alocar o espaço para guardar o valor da altura_salto_duplo apenas quando for necessário.*

## 📋 Requisitos

  - **Bibliotecas:** Inclua as bibliotecas <stdio.h> e <stdlib.h>.

  - **Ponteiro para Habilidade:** Crie uma variável do tipo "ponteiro para float" chamada ponteiro_altura_salto_duplo. Inicialize este ponteiro com o valor NULL para indicar que, no início, o jogador não tem a habilidade.

  - **Status Inicial:** Imprima na tela uma mensagem indicando que o jogador ainda não possui a habilidade. A saída deve ser: Jogador ainda nao possui o Salto Duplo.

  - **Coletar o Power-up (Alocação):** Simule a coleta do item. Use a função malloc() junto com sizeof(float) para alocar dinamicamente um espaço na memória para armazenar a altura do salto duplo. O endereço retornado por malloc() deve ser atribuído ao ponteiro_altura_salto_duplo.

  - **Verificação:** Verifique se a alocação de memória foi bem-sucedida (ou seja, se ponteiro_altura_salto_duplo não é mais NULL).

  - **Atribuir Valor:** Se a alocação funcionou, use o ponteiro e o operador de indireção (*) para definir o valor da altura do salto duplo como 15.5.

  - **Status Final:** Mostre na tela que o jogador adquiriu a habilidade e qual a sua nova altura de salto. A saída deve ser: Pena Dourada coletada! Altura do Salto Duplo: 15.50

  - **Liberar Memória (Boa Prática):** Ao final do bloco if, adicione a linha free(ponteiro_altura_salto_duplo); e um comentário explicando que, em um jogo real, essa linha seria usada para liberar a memória quando o power-up não fosse mais necessário.
  
📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/7dfe32d9484c47249dec0a2b6677699dc7044e5f/tarefas/tarefa19/tarefa19.c)
