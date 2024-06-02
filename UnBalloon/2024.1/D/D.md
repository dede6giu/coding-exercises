# D. Decifrando botões e sorvetes

```
time limit per test: 1 second
memory limit per test: 256 megabytes
input: standard input
output: standard output
```

  
Você tem uma máquina de sorvete capaz de produzir três sabores de sorvete: Amarena, Banana e Cereja, denotados por A, B e C, respectivamente. Em cada momento a máquina estará selecionada em um dos três tipos, que pode ser mudado ao longo do dia através de uma alavanca. Com a máquina com algum sabor selecionado, um botão produzirá um sorvete deste sabor. Já outro botão fará a limpeza automática da máquina, deixando o último sabor selecionado automaticamente. Mais formalmente, a máquina tem as seguintes funcionalidades:

- Mudar o sabor selecionado atualmente através da alavanca, que leva $1$ segundo, para qualquer outro sabor.
- Apertar o primeiro botão, levando $1$ segundo, que produzirá um sorvete do sabor selecionado atualmente.
- Apertar o segundo botão, que limpará a máquina em $1$ segundo mas não alterará o sabor selecionado (isso que é velocidade!).

Como todo funcionário da \_\_\_ deve saber, você receberá $n$ pedidos. Você deverá produzir os sorvetes na ordem dos pedidos, para que os clientes sejam servidos na ordem de chegada. Além disso, a cada $5$ sorvetes produzidos você deverá limpar a máquina. Note que após $5$ produções, a máquina deve ser limpada imediatamente, antes de usar a alavanca novamente.

Ao fim de todos os pedidos, se a máquina tiver produzido algum sorvete após a última lavagem, você deverá limpá-la de novo, mesmo que não tenha concluído $5$ produções.

Calcule o menor tempo possível para produzir todos os sorvetes na ordem dada, e a ordem das ações na máquina. Considere que inicialmente a máquina estará selecionada no sabor Amarena.


## Input

A primeira linha de entrada contém um único inteiro n ($5 \le n \le 104$) — a quantidade de pedidos do dia.

A segunda linha de entrada contém uma cadeia de caracteres $s$ ($| \, s \, | = n$, $s[i] \in \{\text{A, B, C}\}$) — os sabores dos pedidos, em ordem.


## Output

Imprima duas linhas.

A primeira linha deve conter um único inteiro $t$ — a menor quantidade de tempo para produzir todos os sorvetes.

A segunda linha deve conter uma cadeia de $t$ caracteres — os comandos dados à máquina; um '`.`' representa o botão de produzir um sorvete, um '`L`' representa o botão de limpar a máquina, e uma letra '`A`', '`B`' ou '`C`' representa uma mudança de sabor.


## Scoring

Informações sobre a pontuação:

- Para um conjunto de casos de testes valendo 50 pontos, $n=5$.
- Para um conjunto de casos de testes valendo 50 pontos, nenhuma restrição adicional.