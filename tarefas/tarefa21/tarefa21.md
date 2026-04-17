<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 21 </h2>
      <p>Escreva um programa em C que simule a criação e o desaparecimento de uma nuvem de fumaça. O tempo de duração da fumaça será representado por um número inteiro.</p>
    </td>
  </tr>
</table>

## ❗Problema: A Bomba de Fumaça do Ninja 💣🥷

  - **Contexto:** *Em um jogo de plataforma, nosso personagem ninja pode usar uma "Bomba de Fumaça" como item especial. Quando a bomba é usada, uma nuvem de fumaça aparece na tela por um tempo determinado, permitindo que o ninja se esconda. Após o tempo acabar, a nuvem de fumaça deve desaparecer completamente do jogo.
Para otimizar o uso de memória, a "nuvem de fumaça" não é um objeto permanente no jogo. Ela é criada dinamicamente na memória apenas quando o jogador usa a bomba e, após sua duração terminar, a memória utilizada por ela é liberada.*

## 📋 Requisitos

  - **Inclua as Bibliotecas:** Não se esqueça de incluir <stdio.h> e <stdlib.h>.

  - **Crie o Ponteiro:** Crie uma variável do tipo "ponteiro para inteiro" chamada duracao_fumaca.

  - **Alocação de Memória (A Bomba Explode!):** Use a função malloc() para alocar dinamicamente um espaço de memória suficiente para armazenar um único inteiro. Faça o ponteiro duracao_fumaca apontar para este novo espaço.

  - **Verificação:** Verifique se a alocação de memória foi bem-sucedida (ou seja, se malloc() não retornou NULL). Se falhou, exiba uma mensagem de erro.

  - **Defina a Duração:** Se a alocação foi bem-sucedida, use o operador de indireção (*) para armazenar o valor 5 no espaço de memória recém-alocado. Este valor representa que a fumaça durará 5 segundos.

  - **Imprima a Ativação:** Mostre na tela uma mensagem indicando que a bomba foi ativada e qual sua duração. A saída deve ser: "Bomba de fumaca ativada! Duracao: 5 segundos."

  - **Liberação de Memória (A Fumaça Dissipa):** Após "usar" a fumaça, utilize a função free() para liberar o espaço de memória que foi alocado para a duração.

  - **Boa Prática:** Após liberar a memória, atribua NULL ao ponteiro duracao_fumaca para evitar que ele se torne um "ponteiro pendurado" (dangling pointer).

  - **Imprima a Finalização:** Mostre na tela uma mensagem final. A saída deve ser: "A fumaca se dissipou."
  
📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/c7e7b3315c02da8a192f373a927b7a2446758345/tarefas/tarefa21/tarefa21.c)
