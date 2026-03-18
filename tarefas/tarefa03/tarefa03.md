<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 03 </h2>
      <p>Escreva um programa em C que armazene a coordenada X de um portal, manipule-a usando um ponteiro e, ao final, imprima tanto o valor da coordenada quanto seu endereço de memória.</p>
    </td>
  </tr>
</table>

## ❗Problema: O Portal de Teletransporte e as Coordenadas do Jogador 🪙

  - **Contexto:** *Em um jogo de plataforma, o personagem pode encontrar portais mágicos. Quando o personagem entra em um portal, ele é instantaneamente teletransportado para a localização de outro portal correspondente no mapa. Para que o motor do jogo saiba para onde mover o jogador, ele precisa do endereço exato (as coordenadas X e Y) do portal de destino. Em vez de simplesmente copiar as coordenadas, o jogo trabalha diretamente com o "endereço" da localização do portal de destino para garantir que o teletransporte seja preciso.*

## 📋 Requisitos

  - **Variável de Coordenada:** Crie uma variável do tipo float chamada coordenada_x para armazenar a posição do portal no eixo X.  

  - **Ponteiro para Coordenada:** Crie uma variável do tipo "ponteiro para float" chamada ponteiro_x.

  - **Conecte o Ponteiro:** Faça com que ponteiro_x aponte para o endereço de memória da variável coordenada_x.  

  - **Leia a Coordenada:** Peça ao usuário para digitar a coordenada X do portal e armazene o valor na variável coordenada_x. 

  - **Imprima a Coordenada:** Mostre na tela a coordenada X do portal que foi digitada. A saída deve ser: "Posicao do portal no eixo X: [valor]" (use o especificador de formato %f).
    
  - **Imprima o Endereço de Memória:** Mostre na tela o endereço de memória onde a coordenada está armazenada, simulando como o sistema de teletransporte "encontraria" o portal. A saída deve ser: "Endereco do portal para teletransporte: [endereco]" (use o especificador de formato %p).


📌 **Resposta:** [💻 Ver solução em C]([https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/8f53dcbccc44a41b5d445b04b7bbeb104177bdfe/tarefas/tarefa02/tarefa02.c](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/5a5c63372120e2ad77bc82e75b10039bc77d3c35/tarefas/tarefa03/tarefa03.c))
