<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 78 </h2>
      <p>Você deve criar um programa modular que simule cálculos de combate básicos. O programa será dividido em três arquivos: combate.h, combate.c e main.c.</p>
    </td>
  </tr>
</table>

## ❗Problema: Módulo de Cálculos de Combate em RPG 🧙🏻

  - **Contexto:** *Em um jogo de RPG, a lógica para calcular danos, bônus de ataque, penalidades de defesa, etc., pode se tornar complexa. Para manter o código do jogo organizado e reutilizável, é uma prática comum criar um 'módulo de utilidades de combate' que centraliza todas essas fórmulas. Desta forma, qualquer parte do jogo (seja uma habilidade de personagem, um efeito de item ou uma armadilha de ambiente) pode usar essas mesmas funções de cálculo, garantindo consistência.*

## 📋 Requisitos

  **-Arquivo "combate.h" (Interface do Módulo):**
  - Este arquivo deve conter apenas as declarações (protótipos) de duas funções:
    Uma função calcular_ataque_total que recebe o ataque base de um personagem (inteiro) e um bônus de arma (inteiro), e retorna o ataque final.
    Uma função aplicar_dano que recebe a vida atual de um alvo (inteiro) e o dano sofrido (inteiro), e retorna a vida restante.
  **-Arquivo "combate.c" (Implementação do Módulo):**
  - Deve incluir o arquivo combate.h.
  - Deve conter a implementação (o corpo) das duas funções declaradas em combate.h.
    calcular_ataque_total simplesmente soma o ataque base e o bônus.
    aplicar_dano subtrai o dano da vida atual. Se a vida ficar negativa, deve retornar 0.
  **-Arquivo "main.c" (Programa Principal):**
  - Deve incluir as bibliotecas padrão **(stdio.h)** e o seu módulo **(combate.h)**.
  - Na função **main**, leia do usuário os seguintes dados: ataque base do herói, bônus da sua espada, vida inicial do inimigo.
  - Chame a função **calcular_ataque_total** para descobrir o dano que o herói irá causar.
  - Chame a função **aplicar_dano** para calcular a vida restante do inimigo após o ataque.
  - Exiba o poder de ataque total do herói e a vida restante do inimigo.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/tree/048b98ad6bb5504dba54a2900ad24734d368397d/tarefas/tarefa78)
