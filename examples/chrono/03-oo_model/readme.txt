=== Aluno =============== RA ==
Cynthia Baran           135371
Guilherme Fontebasso    135973

Para adaptar o sistema gravitacional para um oscilatório amortecido, 
foi necessário adicionar a aceleração como um novo atributo da classe Corpo.
Diferente do caso da queda livre, a aceleração não é constante pois existe um 
desbalanço entre a força elástica da mola e a força exercida pelo amortecedor.

A cada iteração calculamos essas duas forças que são exercidas no corpo, e
assim conseguimos calcular a aceleração resultante do desbalanço entre elas.
A partir dessa aceleração, conseguimos calcular a velocidade e a posição
do corpo.