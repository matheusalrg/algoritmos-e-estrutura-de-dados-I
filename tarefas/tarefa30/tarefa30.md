<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 30 </h2>
      <p>Escreva um programa em C que crie uma estrutura para um jogador, defina seus atributos iniciais, leia o nome digitado pelo usuário e o armazene corretamente na estrutura.</p>
    </td>
  </tr>
</table>

## ❗Problema: Criando o Personagem do Jogo 👨‍🎤🎮

  - **Contexto:** *Você está desenvolvendo um novo jogo de plataforma! O primeiro passo é criar a tela de "Criação de Personagem". Neste jogo, cada personagem é definido por um nome, uma quantidade inicial de vidas e uma pontuação que começa em zero. Para organizar esses dados, você usará uma struct. O programa deve pedir ao jogador que digite o nome desejado e, em seguida, usar esse nome para configurar a estrutura de dados do personagem.*

## 📋 Requisitos

  - **Bibliotecas:** Inclua as bibliotecas stdio.h e string.h.

  - **Estrutura do Jogador:** Defina uma struct chamada Jogador que contenha os seguintes membros: <br>
  -Um array de char chamado nome com capacidade para 50 caracteres. <br>
  -Um int chamado vidas. <br>
  -Um int chamado pontuacao.

  - **Função Principal (main):**
  - Declare uma variável do tipo struct Jogador chamada player1.
  
  - **Inicialize os Atributos:** Defina o valor de player1.vidas como 3 e player1.pontuacao como 0.
  
  - **Variável Temporária:** Crie um array de char local chamado nome_digitado com 50 posições para armazenar temporariamente o nome que o usuário digitará.

  - **Peça o Nome:** Mostre uma mensagem na tela pedindo para o usuário digitar o nome do personagem. Ex: "Digite o nome do seu personagem: "
  
  - **Leia o Nome:** Use scanf para ler a string digitada pelo usuário e armazená-la na variável nome_digitado.
  
  - **Copie para a Estrutura:** Utilize a função strcpy para copiar o nome de nome_digitado para o membro player1.nome.

  - **Confirmação:** Imprima uma mensagem de boas-vindas que mostre todos os dados armazenados na struct, para confirmar que a operação foi bem-sucedida. A saída deve ser parecida com: "Personagem criado! Bem-vindo, [NomeDoJogador]! Vidas: 3, Pontuação: 0"

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/8c65ba25f4f812e742af924ccf04fa5ee13b496b/tarefas/tarefa30/tarefa30.c)
