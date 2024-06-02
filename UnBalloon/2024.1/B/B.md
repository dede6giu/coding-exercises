# B. Bora de café?

```
time limit per test: 1 second
memory limit per test: 256 megabytes
input: standard input
output: standard output
```

Café!

Você é um barista dedicado em uma movimentada cafeteria que oferece três intensidades de café, cada uma com suas próprias especificações de preparo. Sua habilidade em atender rapidamente os pedidos dos clientes é crucial para garantir a satisfação de todos que frequentam o estabelecimento. Hoje, você precisa calcular a quantidade total de pó de café necessário para atender todos os pedidos recebidos.

Os três tipos de café são caracterizados da seguinte forma:
- Café fraco, denotado por F, necessita de $400$ gramas de pó de café a cada $100$ ml.
- Café médio, denotado por M, necessita de $600$ gramas de pó de café a cada $100$ ml.
- Café encorpado, denotado por E, utiliza $900$ gramas de pó de café a cada $100$ ml.

A cafeteria conta com $n$ pedidos para o dia de hoje. Calcule a quantidade, em gramas, de pó de café você precisa para conseguir atender a todos os pedidos.

## Input

A primeira linha de entrada contém um único inteiro $n$ ($1 \le n \le 104$) — a quantidade de pedidos recebidos.

Cada uma das seguintes $n$ linhas contém um inteiro $c_i$ e uma letra $t_i$ cada ($100 \le c_i \le 5000$, $t_i \in \{\text{F, M, E} \}$) — a quantidade da bebida pedida, em mililitros, e a intensidade do café do $i$-ésimo pedido. É garantido que cada quantidade será **múltipla de $100$**.

## Output

Imprima um único inteiro — a quantidade, em gramas, de pó de café necessária para atender a todos os pedidos.

## Scoring

Informações sobre a pontuação:
- Para um conjunto de casos de testes valendo $34$ pontos, $n=1$.
- Para um conjunto de casos de testes valendo $66$ pontos, nenhuma restrição adicional.