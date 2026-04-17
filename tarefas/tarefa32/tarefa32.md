<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 32 </h2>
      <p>Escreva um programa em C que utilize uma estrutura para representar o personagem e uma função para atualizar seu estado. Você pode escolher uma das duas abordagens abaixo para resolver o problema.</p>
    </td>
  </tr>
</table>

### **CORREÇÃO:** A versão anterior desta atividade pedia o uso de ponteiros para resolver o problema, um conteúdo que será abordado em detalhes na próxima aula (Aula 33). Agradeço pelo feedback que apontou essa inconsistência. A atividade foi atualizada para permitir duas abordagens de solução: a primeira é baseada exatamente no conteúdo desta aula, e a segunda serve como um desafio opcional para quem quiser se adiantar no tema. Ambas as soluções são consideradas corretas.

## ❗Problema: Movimentação do Personagem e Coleta de Moedas 🪙🎮

  - **Contexto:** *Em um jogo de plataforma 2D, o personagem principal precisa se mover pelo cenário para coletar moedas. Cada vez que o personagem se move, sua posição (coordenadas X e Y) é atualizada. Além disso, precisamos manter um registro de quantas moedas ele já coletou. Para organizar esses dados, usaremos uma estrutura que armazena todas as informações do personagem.
Vamos criar um programa simples que simula a movimentação do personagem e a coleta de uma moeda. Para isso, criaremos uma função que recebe o estado atual do personagem, atualiza sua posição e incrementa seu contador de moedas.*

## 📋 Requisitos

  - **Requisitos principais:**
**Estrutura do Personagem:** Crie uma struct chamada Personagem que contenha os seguintes membros: <br>
int posX; (para a coordenada X) <br>
int posY; (para a coordenada Y) <br>
int moedas; (para o contador de moedas)

  - **Função Principal (main):**
    -Declare uma variável do tipo struct Personagem chamada jogador. <br>
    -Inicialize os valores de jogador: posX = 0, posY = 0 e moedas = 0. <br>
    -Imprima na tela o estado inicial do jogador. A saída deve ser: "Posicao inicial: (0, 0) - Moedas: 0" <br>
    -Chame a função de atualização (conforme a opção escolhida). <br>
    -Após a chamada da função, imprima o estado final do jogador. A saída deve ser: "Posicao atualizada: (10, 5) - Moedas: 1"

**Opção 1: Solução com Passagem por Valor** (Baseada nesta Aula 32)
Neste método, a função recebe uma cópia da estrutura, modifica e retorna a estrutura atualizada.

- **Função de Atualização:** Crie uma função chamada atualizarPersonagem.
-Ela deve retornar uma struct Personagem.
-Ela deve receber como parâmetro uma struct Personagem (uma cópia). (Dica: struct Personagem atualizarPersonagem(struct Personagem p))
-Dentro da função, modifique os dados da cópia recebida:
  -Altere p.posX para 10 e p.posY para 5.
  -Incremente p.moedas em 1.
-Ao final, retorne a estrutura modificada com o comando return p;.

- **Chamada na main:** Na função main, você deve atualizar a variável jogador com o retorno da função: jogador = atualizarPersonagem(jogador);

**Opção 2: Solução com Ponteiros** (Desafio Opcional / Conteúdo da Aula 33) <br>
Neste método, a função recebe o endereço de memória da estrutura e a modifica diretamente, sem precisar de um retorno.
Função de Atualização: Crie uma função chamada atualizarPersonagemComPonteiro. <br>
-Ela não deve retornar nenhum valor (void). <br>
-Ela deve receber como parâmetro um ponteiro para uma struct Personagem. (Dica: void atualizarPersonagemComPonteiro(struct Personagem *p)) <br>
-Dentro da função, modifique os dados do personagem original usando o operador -> (seta): <br>
    p->posX = 10; <br>
    p->posY = 5; <br>
    p->moedas++; (ou p->moedas = p->moedas + 1;) 

- **Chamada na main:** Na função main, você deve passar o endereço de memória da variável jogador usando o operador &: atualizarPersonagemComPonteiro(&jogador);

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/c552d04df61878278af93ed7a8f635d72a1cfd3f/tarefas/tarefa32/tarefa32.c)
