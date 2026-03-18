<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 02 </h2>
      <p>Escreva um programa em C que simule o personagem pisando na plataforma secreta e fazendo o tesouro aparecer.</p>
    </td>
  </tr>
</table>

## ❗Problema: A Plataforma Secreta e o Tesouro

  - **Contexto:** *Imagine que você está desenvolvendo um jogo de plataforma 2D. O seu personagem, um aventureiro, precisa pular entre plataformas para coletar tesouros. Existe uma "plataforma secreta" no jogo. Quando o personagem pisa nela, um tesouro especial aparece em outro lugar do mapa.
Para que o jogo saiba onde criar o tesouro, a "plataforma secreta" não guarda o valor do tesouro, mas sim o endereço de memória exato de onde o tesouro deve aparecer. Desta forma, o jogo pode modificar diretamente a variável que representa o local do tesouro, tornando a operação muito rápida.*

## 📋 Requisitos

  - **Variável do Tesouro:** Crie uma variável inteira chamada tesouro_local e inicialize-a com o valor 0 (indicando que o tesouro ainda não apareceu).  

  - **Ponteiro da Plataforma:** Crie uma variável do tipo "ponteiro para inteiro" chamada plataforma_secreta. Conectando a Plataforma ao Local: Faça com que o ponteiro plataforma_secreta armazene o endereço de memória da variável tesouro_local.  

  - **Verificação Inicial:** Antes de qualquer ação, imprima o valor de tesouro_local para mostrar que o tesouro ainda não está ativo. A saída deve ser: "O tesouro ainda nao apareceu. Valor: 0"  

  - **Ativando o Tesouro:** Utilizando apenas o ponteiro plataforma_secreta e o operador de indireção (*), modifique o valor no endereço de memória para 1 (simulando que o tesouro apareceu). Você não deve usar a variável tesouro_local diretamente nesta etapa.  

  - **Verificação Final:** Após a ativação, imprima novamente o valor da variável tesouro_local para confirmar que ela foi alterada através do ponteiro. A saída deve ser: "O personagem pisou na plataforma secreta! O tesouro apareceu! Valor: 1"  

📌 **Resposta:** [💻 Ver solução em C]()
