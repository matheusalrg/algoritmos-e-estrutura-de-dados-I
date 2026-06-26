<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 85 </h2>
      <p>Você deve criar um programa em C que gerencie o inventário de itens de missão do jogador. O programa deve apresentar um menu com opções para adicionar itens, sendo a principal delas a capacidade de inserir um 'Catalisador Rúnico' após um 'Fragmento de Poder' já existente, identificado por seu ID.</p>
    </td>
  </tr>
</table>

## ❗Problema: Registro de Itens de Missão em um RPG 🧙🏻

  - **Contexto:** *Supondo um RPG, o jogador está em uma missão para reforjar uma arma lendária. Para isso, ele coleta diversos 'Fragmentos de Poder', que são armazenados em uma lista de inventário. Ocasionalmente, o jogador encontra um 'Catalisador Rúnico', um item especial que precisa ser combinado com um fragmento específico para amplificar seu poder. Para a mecânica do jogo funcionar, o sistema de inventário deve registrar o catalisador imediatamente após o fragmento com o qual ele se relaciona.*

## 📋 Requisitos

  - Defina uma **struct** para representar um **Item**, contendo um **id** (inteiro) e um **nome** (string).
  - Utilize uma lista encadeada para armazenar os itens do inventário.
  - Implemente um menu com as seguintes opções: <br>
  1 - Inserir item no início (para itens comuns). <br>
  2 - Inserir item no fim (para itens comuns). <br>
  3 - Inserir catalisador após um fragmento (o foco da tarefa). <br>
  4 - Mostrar inventário. <br>
  5 - Sair.
  - Para a opção 3, o programa deve primeiro solicitar os dados do novo item (catalisador) e, em seguida, pedir o id do fragmento após o qual o catalisador deve ser inserido.
  - Se o id do fragmento não for encontrado na lista, o programa deve informar ao usuário que a inserção não foi possível e não deve adicionar o catalisador ao inventário.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/8eada67376e9c04cf050282306f50dd6285230cd/tarefas/tarefa85/tarefa85.c)
