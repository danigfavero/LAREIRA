# Aventura de Texto <br/>
## Projeto semestral da disciplina MAC0216 - Técnicas de Programação I
**Professor:** Marco Dimas Gubitoso <br/>
**Grupo:**  Bento Pereira, Daniela Favero e Pedro Gigeck. <br/>
<br/>

## Instruções para usar o *teste.c* <br/>
A entrada para testar esse módulo é: <br/>
- Tamanho da hash table <br/>
- Tamanho da lista ligada (quantos elementos serão inseridos) <br/>
- O nome de cada elemento a ser inserido <br/>
- Quantos elementos se deseja buscar <br/>
- O nome de cada elemento a ser buscando <br/>
- O nome de um elemento a ser retirado <br/>
- O nome do elemento que foi retirado, para fazer uma busca <br/>
<br/>
O módulo retorna:<br/>
- O hash de cada elemento inserido <br/>
- O nome do(s) elemento(s) buscado(s), seu hash e se foi encontrado ou não <br/>
- O nome do elemento a ser retirado <br/>
- Resultado da busca pel elemento retirado <br/>
- Vários prints confirmando os "free" da lista <br/>
<br/>
Há um módulo *entrada.txt* com uma entrada que testa bem os módulos.<br/>
<br/>
## Detalhes da implementação <br/>
###Elemento <br/>
Por enquanto a struct só contém o nome, mas já temos uma prévia comentada de
como será. <br/>
###Lista <br/>
Listas ligadas implementadas com structs de elos que apontam para o próximo elo
 e guardam o ponteiro para um elemento. A estrutura lista em si é só um
 ponteiro para um elo chamado cabec (topo), que inicia nulo e representa o
 primeiro elemento da lista. As demais funções foram implementadas e estão
comentadas no código mais detalhadamente, mas em sua maioria giram em torno
 do fato da lista ligada ter o último ponteiro que aponta para elos sendo
 sempre nulo. <br/>
###Hash <br/>
A tabela de hash funciona transformando a palavra em um número na base 257 e
tirando o seu módulo pelo tamanho da tabela e o colocando numa lista ligada
correspondente ao valor encontrado.
Exemplo: A N O retornará (O * 257⁰ + N * 257¹ + A * 257²) mod(mod)
Para as outras funções, utilizamos as funções de *lista.h*, executando elas
baseando-se no hash do elemento de interessa.
