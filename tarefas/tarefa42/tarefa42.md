<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 42 </h2>
      <p>Você deve criar um programa em C que simule o carregamento de um arquivo de configuração. O programa tentará abrir um arquivo chamado config.txt para leitura.</p>
    </td>
  </tr>
</table>

## ❗Problema: Verificação de Arquivo de Configuração do Jogo ⚙️

  - **Contexto:** *Todo jogo precisa de um arquivo de configuração para carregar definições essenciais, como resolução de tela, volume do som e dificuldade inicial. Se este arquivo (config.txt) não for encontrado no diretório do jogo, o programa não deve simplesmente travar, mas sim informar ao usuário sobre o erro e encerrar de forma controlada. Essa é uma prática fundamental para criar software robusto e amigável.*

## 📋 Requisitos

  - Crie uma struct chamada Configuracao para armazenar três membros: resolucao_x (int), resolucao_y (int) e volume_som (float).
  - Tente abrir o arquivo config.txt no modo de leitura ("r").
  - **Verificação de Erro:** Implemente uma verificação para saber se o arquivo foi aberto com sucesso. Se a função fopen() falhar (retornar NULL), o programa deve imprimir a mensagem "Erro: Arquivo config.txt nao encontrado!\n" e terminar a execução imediatamente.
  - **Leitura dos Dados:** Se o arquivo for aberto com sucesso, leia os três valores do arquivo para uma variável do tipo Configuracao.
  - **Exibição dos Dados:** Imprima na tela as configurações que foram carregadas, no formato: "Configuracoes carregadas:\nResolucao: [X]x[Y]\nVolume: %.1f\n".
  - Feche o arquivo corretamente ao final da operação.

📌 **Resposta:** [💻 Ver solução em C]()
