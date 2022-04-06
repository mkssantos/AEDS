<h1>Contando Instruções</h1>
Aluno: Marcus Vinicius Nogueira Santos

<h1>Problema Prostos</h1>
1) - Preenche a matriz N x N com números inteiros aleatórios de 0 a 99;

2) - Considere a posição Linha 0 e Coluna 0 (0,0) como início;

3) - Considere a posição (N, N) como posição final;

4) - Percorra a matriz a partir do início, somando a cada passo, o próximo maior valor encontrado;

5) - O próximo valor pode ser o que está na mesma linha e imediatamente à direita, imediatamente à esquerda, bem como, o que está na coluna abaixo do numero corrente;

5.1) - Há apenas uma exceção de percurso. Ao chegar na última linha deve-se percorre-la até o fim sem realizar mais migrações para colunas acima. 

6) - Andando na matriz conforme as regras acima, qual o maior caminho do início até o final, sabendo-se que a soma das posições representa o tamanho do caminho.

<h1>Resolução do Problema</h1>

1) - Primeiramente para a resolução do Problema o é solicitado ao Usuario que digite um valor para N;

1.1) - Onde o valor de N digitado pelo Usuario cria uma Matriz de NxN;

2) - Logo em seguida o programa percorre e trata essa Matriz com uma sequencia de if's e else's, onde analiza qual melhor caminho o programa deve seguir;

3) - Após percorrer toda a Matriz passando pelo maior valor e substitundo os valores ja passados por "-1" ele soma todos os valores que o caminho do programa percorreu;

4) - Após isso ele imprime o resultado na tela para ao Usuario;

<h1>Perguntas</h1>

1) - Há mais de uma maneira de resolver esse problema ?
    Sim,exemplos diferentes dos que foram utilizados é com ponteiros;

2) - Há algoritmos em literatura que resolvam esse problema ?
    Os algoritmos Quicksort e Bubblesort que são algoritimos de ordenação são exemplos;

3) - Pode existir mais de um caminho cujo valor total é o maximo?
    Sim, porém alguns numeros podem impedir que esse seja o menor caminho;    