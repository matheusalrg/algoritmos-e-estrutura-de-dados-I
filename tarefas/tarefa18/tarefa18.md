<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 18 </h2>
      <p>Escreva um programa em C que simule a invocação de um inimigo. O programa deve alocar dinamicamente um espaço na memória para guardar a vida do inimigo, definir sua vida inicial, simular um ataque do jogador que reduz essa vida e, por fim, mostrar a vida restante.</p>
    </td>
  </tr>
</table>

## ❗Problema: Invocando um Inimigo: Alocação Dinâmica de Vida ❤️‍🔥

  - **Contexto:** *Em um jogo de plataforma, os inimigos podem aparecer em qualquer lugar e a qualquer momento. Em vez de reservar memória para todos os inimigos possíveis desde o início (o que seria um desperdício), um bom motor de jogo aloca memória para um inimigo apenas quando ele é "invocado" na tela. A função malloc é perfeita para isso, pois nos permite pedir ao sistema um pedaço de memória "na hora" para guardar informações importantes, como a vida do inimigo.*

## 📋 Requisitos

  - **Inclua as Bibliotecas Necessárias:** Não se esqueça de incluir <stdio.h> para as funções de entrada/saída e <stdlib.h> para a função malloc.

  - **Crie o Ponteiro:** Declare um ponteiro para um inteiro chamado vida_inimigo. Este ponteiro irá guardar o endereço do espaço de memória que você alocará.

  - **Aloque Memória:** Use a função malloc para alocar espaço suficiente para armazenar um único valor inteiro. Atribua o endereço de memória retornado por malloc ao seu ponteiro vida_inimigo. (Dica: Use sizeof(int)   para garantir que você está alocando o número correto de bytes para um inteiro).

  - **Verificação (Boa Prática): **Verifique se o ponteiro vida_inimigo não é NULL. Se for NULL, significa que a alocação de memória falhou. Nesse caso, imprima uma mensagem de erro e encerre o programa.

  - **Defina a Vida Inicial:** Usando o operador de indireção (*), acesse o local de memória apontado por vida_inimigo e defina a vida inicial do inimigo como 80.

  - **Imprima a Invocação:** Mostre na tela uma mensagem indicando que o inimigo apareceu e sua vida inicial. A saída deve ser: "Um novo inimigo apareceu com 80 de vida!"

  - **Simule o Dano:** Simule um ataque do jogador. Usando novamente o operador de indireção, subtraia 35 da vida do inimigo.

  - **Imprima o Resultado:** Mostre na tela a vida restante do inimigo após o ataque. A saída deve ser: "O jogador atacou! Vida restante do inimigo: 45"
  
📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/0885757cc8aafed382ab643a15dbb048dd2b44b4/tarefas/tarefa18/tarefa18.c)
