# C. Caça Palavras

```
time limit per test: 1 second
memory limit per test: 256 megabytes
input: standard input
output: standard output
```


Henrique tem um caça palavras onde, dada uma lista de palavras, elas podem estar na horizontal, na vertical ou nas diagonais, e inclusive podem estar invertidas. Como Henrique está ocupado preparando as aulas, ajude o dizendo se cada palavra foi encontrada ou não.


## Input


A primeira linha contém dois inteiros $n$ e $m$ ($1 \le n,m \le 100$), a altura e a largura do tabuleiro.


As próximas n linhas contém m letras maiúsculas, as letras do tabuleiro.


A próxima linha contém um inteiro $q$ ($1 \le q \le 100$), o número de palavras a serem procuradas.


As próximas $q$ linhas contém uma palavra $s_i$ ($1 \le | \, s_i \, | \le 100$) cada.


## Output


Imprima $q$ linhas, cada uma com a mensagens "SIM" (sem aspas) ou "NAO" (sem aspas), indicando se a $i$-ésima palavra foi encontrada ou não, respectivamente.