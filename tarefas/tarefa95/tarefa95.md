<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 95 </h2>
      <p>Implemente a funcionalidade 'Iniciar Nova Onda' no menu do sistema de gerenciamento de inimigos. Esta opção deve: <br>
      1. Perguntar ao usuário quantos inimigos a nova onda terá. <br>
      2. Ler os dados (ID e tipo) de cada um desses inimigos. <br>
      3. Criar uma lista encadeada completamente nova contendo apenas os inimigos da onda recém-criada. <br>
      4. Fazer com que a lista principal do jogo seja substituída por esta nova lista, efetivamente limpando os inimigos da onda anterior.</p>
    </td>
  </tr>
</table>

## ❗Problema: Gerenciando Ondas de Inimigos em um Jogo de Defesa de Torre

  - **Contexto:** *Em um jogo de defesa de torre (Tower Defense), a cada nova onda (wave), um número variável de inimigos é invocado e adicionado à lista de alvos ativos que suas torres precisam destruir. Atualmente, seu sistema permite adicionar inimigos um por um, o que é ineficiente para criar ondas completas. Quando uma nova onda começa, a lista de inimigos da onda anterior deve ser completamente descartada e substituída pela nova.*

## 📋 Requisitos

  - Crie uma função **criar_lista** que recebe como parâmetro um inteiro **n** (o número de inimigos) e retorna uma **Lista** preenchida.
  - Dentro da função **criar_lista**, utilize um laço (**for** ou **while**) para ler os dados de n inimigos.
  - Reutilize a função **inserir_fim** (já implementada anteriormente) para adicionar cada novo inimigo à lista que está sendo criada.
  - Na função **main**, ao selecionar a opção correta, chame criar_lista e atribua seu retorno à variável de lista principal, substituindo a lista anterior.
  - O tipo do inimigo pode ser representado por uma string.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/9e0fd7de7072d87e2814e3b77f184ad9e0f3e94e/tarefas/tarefa95/tarefa95.c)
