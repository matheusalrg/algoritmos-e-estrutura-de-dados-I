<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 84 </h2>
      <p>Crie um programa em C que simule a gestão de um diário de missões. O programa deve apresentar um menu com as seguintes opções: <br>
  - Adicionar Missão: Adiciona uma nova missão ao final do diário (lista). <br>
  - Mostrar Missões: Exibe todas as missões presentes no diário. <br>
  - Buscar Missão por ID: Pede ao usuário um ID e procura a missão correspondente na lista. <br>
  - Sair: Encerra o programa.</p>
    </td>
  </tr>
</table>

## ❗Problema: Desenvolver um sistema de gerenciamento para um diário de missões (Quest Log) de um jogo de RPG, utilizando uma lista encadeada. O sistema deve permitir adicionar novas missões, exibir todas as missões ativas e, o mais importante, buscar uma missão específica pelo seu ID para que o jogador possa ver seus detalhes.

  - **Contexto:** *Suponha um RPG onde o jogador mantém um diário de missões. Cada missão tem um ID numérico único, um título e um status (ex: 'Ativa', 'Concluída'). Quando o jogador interage com um NPC para entregar uma missão, o sistema precisa primeiro encontrar essa missão no diário usando o ID dela para então poder atualizar seu status.*

## 📋 Requisitos

  - Defina uma **struct** para representar uma **Missao**, contendo um **id** (inteiro), um **titulo** (string) e um **status** (string).
  - Utilize uma **lista encadeada** para armazenar as missões.
  - Implemente uma função **pesquisar_missao** que receba a lista e um **id** como parâmetros. A função deve retornar um ponteiro para o nó que contém a missão, se encontrada, ou **NULL**, caso contrário.
  - Na opção de busca, se a missão for encontrada, o programa deve exibir todos os seus dados (ID, título e status). Se não for encontrada, deve exibir a mensagem 'Missao nao encontrada!'.
  - O programa deve continuar executando e mostrando o menu até que o usuário escolha a opção de sair.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/d7c34100f6d88d5438d0d99997437cbc362eef5b/tarefas/tarefa84/tarefa84.c)
