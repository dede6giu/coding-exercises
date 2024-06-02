# E. Entrelaçamento Quântico

```
time limit per test: 1 second
memory limit per test: 256 megabytes
input: standard input
output: standard output
```

Pedro Gallo, especialista em física quântica, está estudando o comportamento de um conjunto de $n$ partículas, onde $n$ é um inteiro par. Após uma longa tarde de estudos, Pedro Gallo deve escrever um programa para o ajudar a planejar seus próximos experimentos.

As partículas são indexadas de $1$ até $n$, cada uma com valor Gallo ai. Além disso, cada partícula está entrelaçada com exatamente uma outra partícula do conjunto. Essa propriedade de entrelaçamento é simétrica, ou seja, se $a$ está entrelaçado com $b$ então $b$ está entrelaçado com $a$. Pedro percebe que, ao aumentar o valor de uma $i$ partícula por $x$, a partícula entrelaçada com $i$ tem seu valor diminuído por $x$.

O engenheiro gostaria que o conjunto de partículas atingisse equilíbrio, que é quando toda partícula $i$ tem exatamente o mesmo valor Gallo que a partícula com quem está entrelaçada. Pedro Gallo possui uma máquina WLW de última geração, que em uma operação o permite escolher uma partícula $i$ e um valor $x$, e somar $x$ no valor Gallo ai da partícula (lembrando que seu par também será alterado, mas com sinal oposto). Como é muito trabalhoso utilizar a máquina muitas vezes, Pedro gostaria de utilizar a máquina a menor possível quantidade de vezes.

Ajude-o, e escreva um programa que diga se é possível que o conjunto atinja o equilíbrio. Se for, calcule a menor quantidade de operações necessárias e quais operações devem ser feitas na máquina WLW.


## Input

A primeira linha contém um inteiro $n$ par ($2 \le n \le 105$) — a quantidade de partículas que Pedro estuda.

A segunda linha de entrada contém $n$ inteiros $a_i$, ..., $a_n$ ($−109 \le a_i \le 109$) — os valores Gallo das partículas.

Cada uma das próximas $n/2$ linhas de entrada contém dois inteiros $a$, $b$ ($1 \le a$, $b \le n$) — os pares entrelaçados. É garantido que cada inteiro de $1$ até $n$ aparece exatamente uma vez.


## Output

Se for impossível tornar os elementos iguais, imprima $−1$.

Caso contrário, imprima um linha contendo um inteiro $m$ — a menor quantidade possível de operações.

Imprima $m$ linhas, cada um contendo dois inteiros $i$ e $x$, representando uma operação feita no índice $i$ com valor $x$.


## Scoring

Informações sobre a pontuação:
- Há apenas um conjunto de casos de testes valendo $100$ pontos, com nenhuma restrição adicional.