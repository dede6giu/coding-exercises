# C. Comendo no RU

```
time limit per test: 2 seconds
memory limit per test: 256 megabytes
input: standard input
output: standard output
```

Você e seus amigos estão almoçando no RU após a disputadíssima Olimpíada UnBalloon. Observando o restaurante, vocês percebem certos padrões no comportamento das pessoas que almoçam lá. Isso os inspira para criar um programa que simula o movimento em um restaurante.

No programa, as pessoas seguem as seguintes regras:

- O restaurante possui $n$ fileiras, cada uma com m assentos. As fileiras são identificadas com inteiros de $1$ até $n$, e os assentos são identificados com inteiros de $1$ até $m$.
- Chegam $q$ grupos de pessoas no RU, um após o outro. É considerado que um grupo chega somente após o grupo anterior ter ocupado seus assentos ou ter saído.
- Cada grupo possui três parâmetros $i$, $j$ e $k$. Ao chegar na porta do RU, o grupo tem a intenção de sentar todos na fileira de índice $i$, nos assentos $j$, $j+1$, ..., $j+k−1$.
- Caso todos estes assentos estejam livres, o grupo senta. Caso contrário, todos vão embora (e compram uma marmita, provavelmente).

Agora chegou a sua vez! Escreva o programa que simula essa versão do RU. Para cada grupo, diga se ele conseguirá assentos para almoçar ou se vão de marmita.

## Input

A primeira linha de entrada contém dois inteiros $n$, $m$ ($1 \le n,m \le 109$) — a quantidade de mesas e a quantidade de assentos em cada mesa, respectivamente.

A segunda linha de entrada contém um único inteiro $q$ ($1 \le q \le 105$) — o número de grupos de pessoas que entraram no RU.

Cada uma das próximas $q$ linhas contém três inteiros $i$, $j$ e $k$ ($1 \le i \le n$, $1 \le j$, $k \le m$) — o índice da mesa, o menor índice de assento ocupado pelo grupo, e a quantidade de pessoas no grupo, respectivamente.

## Output

Imprima $q$ linhas.

A $i$-ésima linha da saída deve conter "`aomossar`" caso todos do grupo consigam sentar na posição desejada, ou "`:(`" caso contrário.

## Scoring

Informações sobre a pontuação:
- Para um conjunto de casos de teste valendo $33$ pontos, $n=1$ e $m \le103$.
- Para um conjunto de casos de teste valendo $27$ pontos, $n,m \le 103$.
- Para um conjunto de casos de teste valendo $40$ pontos, nenhuma restrição adicional.