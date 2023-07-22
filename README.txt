DOCUMENTA��O DO PROGRAMA DE C�LCULO DE MEDIDAS DE UM RET�NGULO

Este programa foi desenvolvido em linguagem C e tem como objetivo calcular diversas 
medidas de um ret�ngulo com base e altura fornecidas pelo usu�rio. O programa possui 
um menu principal com duas op��es: calcular as medidas do ret�ngulo ou sair do programa. 
Ao selecionar a op��o de c�lculo, o usu�rio deve inserir os valores da base e altura do 
ret�ngulo, e o programa realizar� os c�lculos da �rea, per�metro e diagonal do ret�ngulo.

TECNOLOGIAS UTILIZADAS:
Linguagem de programa��o C.
Foram utilizadas as bibliotecas <stdio.h>, <stdlib.h> e <math.h>, al�m de <locale.h> 
para configurar o uso de caracteres espec�ficos da l�ngua portuguesa.

FUN��ES UTILIZADAS:
void limparBuffer(): limpa o buffer do teclado para evitar problemas com caracteres 
indesejados ap�s a entrada de dados pelo usu�rio.

MAIN FUNCTION:
int main(): fun��o principal que executa o programa. Ela utiliza um loop "do-while" para 
exibir o menu principal e processar as op��es selecionadas pelo usu�rio. O programa realiza 
c�lculos da �rea, per�metro e diagonal do ret�ngulo e exibe os resultados na tela.

COMO UTILIZAR O PROGRAMA:
Ao executar o programa, voc� ver� o "MENU PRINCIPAL" com duas op��es numeradas. Digite o 
n�mero "1" para calcular as medidas do ret�ngulo ou "2" para sair do programa. Ao escolher 
a op��o "1", o programa solicitar� que voc� insira os valores da base e altura do ret�ngulo. 
Insira esses valores e pressione Enter ap�s cada um deles. O programa calcular� automaticamente 
a �rea, per�metro e diagonal do ret�ngulo e mostrar� os resultados na tela.

OBSERVA��ES IMPORTANTES:
O programa utiliza a fun��o "limparBuffer()" para garantir que n�o haja lixo de mem�ria na 
entrada do teclado. Isso evita problemas caso o usu�rio digite caracteres indesejados ap�s 
inserir os valores da base e altura do ret�ngulo.

Ao realizar os c�lculos da �rea, per�metro e diagonal, o programa utiliza a biblioteca <math.h> 
para calcular a raiz quadrada atrav�s da fun��o "sqrt()".

O programa exibe os resultados com precis�o de quatro casas decimais (%.4lf) para a �rea, 
per�metro e diagonal.

Para sair do programa, basta selecionar a op��o "2" no menu principal. O programa ent�o exibir� 
a mensagem "SAINDO" e encerrar� a execu��o.

Caso as acentua��es, ou outros carecteres especiais, n�o aparecerem corretamente em seu VS Code, 
voc� precisar� alterar a codifica��o padr�o para "windows 1252" na op��o Encoding. 
(File > Preferences > Settings > Search Settings > Encoding)