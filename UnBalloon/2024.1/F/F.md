# F. Frenesi dos crachás

```
time limit per test: 1 second
memory limit per test: 256 megabytes
input: standard input
output: standard output
```


Na Summer School da Unicamp, sabe-se que os participantes precisam utilizar crachás para ter acesso ao evento e ao restaurante. Porém, em certa noite, o mágico maligno Enzo Yoshio realizou uma mágica que trocou o crachá de todos!

Formalmente, n estudantes participam da Summer School. Cada pessoa $i$ de $1$ até $n$ está com o crachá da pessoa $p_i$. Cada pessoa originalmente possui exatamente um crachá, que após a mágica está em posse de alguma pessoa. Após a mágica, cada pessoa estará com exatamente um crachá.

Você, estudante incansável, descobre com quem está cada crachá, mas as pessoas não parecem muito entusiasmadas para destrocá-los! Você, então, se faz $q$ perguntas. Para cada pergunta, você considera que apenas a pessoa $q_j$ tentará destrocar crachás até recuperar o seu, da seguinte forma: se a pessoa está com seu próprio crachá, nada mais é feito. Caso contrário, a pessoa trocará de crachá com o dono do crachá que está em posse.

Para cada pergunta, diga o número de trocas que seriam realizadas. Como são acontecimentos apenas hipotéticos, as trocas não serão realizadas de fato.


## Input

A primeira linha de entrada contém dois inteiros $n$ e $q$ ($1 \le n,q \le 105$) — a quantidade de pessoas na Summer School e o número de consultas, respectivamente.

A segunda linha de entrada contém $n$ inteiros $p_1$, ..., $p_n$ ($1 \le p_i \le n$) — cada $p_i$ representando que a pessoa de índice $i$ está com o crachá da pessoa $p_i$. É garantido que $p$ é uma permutação.

A terceira linha de entradas contém $q$ inteiros $q_1$, ..., $q_n$ ($1 \le q_i \le n$) — a pessoa $q_j$ da pergunta $j$, que hipoteticamente iria atrás de seu próprio crachá.


## Output

Imprima $q$ inteiros $r_1$, ..., $r_q$ — a quantidade $r_j$ de trocas realizadas até que a pessoa $q_j$ recupere seu crachá.


## Scoring

Informações sobre a pontuação:
- Para um conjunto de casos de testes valendo $50$
pontos, $q=1$.
- Para um conjunto de casos de testes valendo $50$
pontos, nenhuma restrição adicional.