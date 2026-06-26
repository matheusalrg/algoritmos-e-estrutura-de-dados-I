<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 79 </h2>
      <p>Você deve criar um programa que permita ao jogador montar sua equipe de heróis para uma nova missão. O programa primeiro pergunta quantos heróis farão parte da equipe, depois lê os dados de cada um (nome, pontos de vida - HP, e poder de ataque) e, finalmente, exibe o 'roster' (lista da equipe) completo.</p>
    </td>
  </tr>
</table>

## ❗Problema: Modularização do Roster de Heróis 🦸​

  - **Contexto:** *Suponha que você esta desenvolvendo um RPG tático, o sistema de gerenciamento da equipe (party) precisa ser robusto e reutilizável. Atualmente, toda a lógica para criar, ler e exibir os heróis está misturada no arquivo main.c, tornando o código confuso e difícil de expandir. Para preparar o jogo para futuras funcionalidades (como sistemas de inventário, habilidades, etc.), você precisa refatorar o código, isolando toda a lógica relacionada aos heróis em seu próprio módulo.*

## 📋 Requisitos

  - Crie um módulo chamado 'heroi'. Dentro de um diretório com este nome, você deve criar dois arquivos: heroi.h e heroi.c.
No arquivo heroi.h (a interface), você deve:
-Definir um tipo Heroi usando typedef e uma declaração de struct incompleta (opaque type), para esconder os detalhes da implementação.
-Declarar os protótipos de três funções que operarão sobre os heróis: uma para alocar dinamicamente um vetor de heróis, uma para ler os dados dos heróis, e uma para imprimir os dados.
  - No arquivo heroi.c (a implementação), você deve:
-Incluir o seu próprio cabeçalho heroi.h.
-Definir a struct heroi completa com os campos: nome (string), hp (inteiro) e ataque (inteiro).
-Implementar as três funções cujos protótipos foram declarados no arquivo .h.
  - No arquivo main.c, você deve:
-Incluir o cabeçalho heroi/heroi.h.
-Conter apenas a lógica principal: ler a quantidade de heróis, chamar as funções do módulo heroi para criar o vetor, preenchê-lo com dados e imprimi-lo na tela.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/tree/a7af8c0b1258a3e6ff9374629eb6cf957bf5ebd4/tarefas/tarefa79)
