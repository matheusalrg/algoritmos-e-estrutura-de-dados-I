<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 26 </h2>
      <p>Escreva um programa em C que simule o herói coletando itens, expandindo sua mochila usando realloc(), e depois coletando mais itens.</p>
    </td>
  </tr>
</table>

## ❗Problema: A Mochila Expansível do Aventureiro 🎒

  - **Contexto:** *Em um jogo de plataforma, nosso herói começa sua jornada com uma pequena mochila para guardar os itens que encontra. Inicialmente, a mochila tem espaço para apenas 3 itens. No entanto, ao encontrar um item especial de "expansão de mochila", o espaço dela dobra, permitindo que ele carregue mais tesouros. Para que o jogo seja eficiente, não queremos criar uma mochila nova e copiar os itens um por um; queremos "esticar" a mochila existente.*

## 📋 Requisitos

  - **Mochila Inicial:** Crie um ponteiro para inteiro chamado mochila. Use malloc() para alocar espaço para 3 itens (inteiros).

  - **Primeira Coleta:** Peça ao usuário para digitar os valores dos 3 primeiros itens encontrados e armazene-os na mochila.

  - **Mostrar Itens:** Imprima na tela os itens que estão atualmente na mochila.

  - **Expandir a Mochila:** Simule que o herói encontrou o item de expansão. Use realloc() para dobrar o tamanho da mochila, que agora deverá ter espaço para 6 itens.

  - **Segunda Coleta:** Peça ao usuário para digitar os valores dos 3 novos itens e armazene-os no novo espaço disponível na mochila. (Dica: os novos itens começarão na posição 3).

  - **Mostrar Mochila Completa:** Imprima na tela todos os 6 itens para provar que os itens antigos foram mantidos e os novos foram adicionados com sucesso.

  - **Limpar Memória:** Ao final do programa, não se esqueça de usar free() para liberar a memória alocada para a mochila.
  
📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/9586e469a445fe1150e0f19f46d1d931baa233de/tarefas/tarefa26/tarefa26.c)
