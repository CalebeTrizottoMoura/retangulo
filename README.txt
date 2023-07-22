DOCUMENTAÇÃO DO PROGRAMA DE CÁLCULO DE MEDIDAS DE UM RETÂNGULO

Este programa foi desenvolvido em linguagem C e tem como objetivo calcular diversas 
medidas de um retângulo com base e altura fornecidas pelo usuário. O programa possui 
um menu principal com duas opções: calcular as medidas do retângulo ou sair do programa. 
Ao selecionar a opção de cálculo, o usuário deve inserir os valores da base e altura do 
retângulo, e o programa realizará os cálculos da área, perímetro e diagonal do retângulo.

TECNOLOGIAS UTILIZADAS:
Linguagem de programação C.
Foram utilizadas as bibliotecas <stdio.h>, <stdlib.h> e <math.h>, além de <locale.h> 
para configurar o uso de caracteres específicos da língua portuguesa.

FUNÇÕES UTILIZADAS:
void limparBuffer(): limpa o buffer do teclado para evitar problemas com caracteres 
indesejados após a entrada de dados pelo usuário.

MAIN FUNCTION:
int main(): função principal que executa o programa. Ela utiliza um loop "do-while" para 
exibir o menu principal e processar as opções selecionadas pelo usuário. O programa realiza 
cálculos da área, perímetro e diagonal do retângulo e exibe os resultados na tela.

COMO UTILIZAR O PROGRAMA:
Ao executar o programa, você verá o "MENU PRINCIPAL" com duas opções numeradas. Digite o 
número "1" para calcular as medidas do retângulo ou "2" para sair do programa. Ao escolher 
a opção "1", o programa solicitará que você insira os valores da base e altura do retângulo. 
Insira esses valores e pressione Enter após cada um deles. O programa calculará automaticamente 
a área, perímetro e diagonal do retângulo e mostrará os resultados na tela.

OBSERVAÇÕES IMPORTANTES:
O programa utiliza a função "limparBuffer()" para garantir que não haja lixo de memória na 
entrada do teclado. Isso evita problemas caso o usuário digite caracteres indesejados após 
inserir os valores da base e altura do retângulo.

Ao realizar os cálculos da área, perímetro e diagonal, o programa utiliza a biblioteca <math.h> 
para calcular a raiz quadrada através da função "sqrt()".

O programa exibe os resultados com precisão de quatro casas decimais (%.4lf) para a área, 
perímetro e diagonal.

Para sair do programa, basta selecionar a opção "2" no menu principal. O programa então exibirá 
a mensagem "SAINDO" e encerrará a execução.

Caso as acentuações, ou outros carecteres especiais, não aparecerem corretamente em seu VS Code, 
você precisará alterar a codificação padrão para "windows 1252" na opção Encoding. 
(File > Preferences > Settings > Search Settings > Encoding)