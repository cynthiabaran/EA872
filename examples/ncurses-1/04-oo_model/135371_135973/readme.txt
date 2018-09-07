=== Aluno =============== RA ==
Cynthia Baran           135371
Guilherme Fontebasso    135973

Para se evitar que se escreva fora da tela do terminal disponível, foi-se
utilizada uma função do ncurses chamada getmaxyx. Com isso, verifica-se antes
de desenhar algo, se o cursor está dentro dos limites da tela.

Por ter arquitetura MVC, não foi necessário mudar nada no View, para se 
trocar o sistema de gravitacional para oscilatório amortecido. Algumas
modificações foram feitas porém no Corpo, adicionando a elasticidade
e o amortecimento como parâmetros variáveis. A posição na hora de se criar
o corpo, refere-se à posição central da mola, sendo o zero normalizado dele.
