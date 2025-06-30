# Calculadora simples em C

Este repositório contém um programa desenvolvido em linguagem C com o objetivo de praticar estruturas de controle e lógica de programação por meio de um menu de operações matemáticas.

## 📌 Objetivo do Projeto

Criar um menu interativo que permita ao usuário escolher entre diferentes operações matemáticas e visualizar as respectivas tabuadas, utilizando estruturas de repetição e decisão. O programa foi desenvolvido como parte de um trabalho da faculdade.

## ⚙️ Como Funciona

Ao executar o programa, o usuário verá um menu com cinco opções:

1. Adição  
2. Subtração  
3. Multiplicação  
4. Divisão  
5. Sair

Após selecionar a operação desejada, o usuário informa um número, e o programa exibe a tabuada correspondente.

Cada operação é tratada com `switch-case`, e o menu permanece em execução até que a opção 5 seja escolhida.

### Exemplo de uso:

```text
* Menu de Operações: *
|1. Adição           |
|2. Subtração        |
|3. Multiplicação    |
|4. Divisão          |
|5. Sair             |

Escolha uma opção (1-5): 3
Escolha um número para gerar a tabuada de multiplicação: 5

Tabuada de multiplicação de 5:
0 * 5 = 0
1 * 5 = 5
...
10 * 5 = 50
