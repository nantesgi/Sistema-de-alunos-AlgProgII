Trabalho proposto pela professora Graziela Araújo na disciplina de Algoritmos e Programação II, e consiste na implementação de um sistema para gerenciamento de alunos.

Desenvolvido pelas estudantes Giovanna Carolina Nantes de Oliveira Coelho e Isabela Resende da Cunha

DESCRIÇÃO:
No sistema, cada aluno da disciplina possui as seguintes informações armazenadas:
• Nome (cujos caracteres não incluem acentos e cedilhas);
• RA (inteiro);
• Nota da primeira prova obrigatória (P1);
• Nota da segunda prova obrigatória (P2);
• Nota do trabalho prático (T);
• Nota da prova optativa (PO).

Todas as notas devem ser representadas usando números em ponto flutuante (utilize tipo double). A média final MF é calculada de acordo com a seguinte fórmula:

MF = 0,35 * P1 + 0,35 * P2 + 0,3 * T,

lembrando que a nota da prova optativa (PO) pode substituir a menor das notas de prova (P1 ou P2), caso seja maior que tal nota. O aluno cuja média final for maior ou igual a 6,0 será considerado aprovado, caso contrário, estará reprovado.

Durante a execução do programa, deve ser utilizado um vetor de registros ordenado de alunos (a ordem deve ser a lexicográfica considerando os nomes dos alunos, caso existam dois ou mais alunos com o mesmo nome, resolva o "empate" colocando aquele que tem menor RA na frente). Sua aplicação deve fornecer um menu com as seguintes opções:

1. Cadastrar um novo aluno: insere um novo aluno na lista contendo os dados fornecidos como entrada pelo usuário. O usuário deve fornecer dados para todos os campos do aluno (se a PO não tiver sido realizada, a nota zero deve ser informada);
2. Buscar aluno: solicita ao usuário uma cadeia de caracteres e lista os nomes completos, a média final e a situação (aprovado ou reprovado) de todos os alunos cujos nomes casam (total ou parcialmente com a cadeia fornecida). A listagem deve mostrar ao final uma contagem do número de resultados encontrados;
3. Ler arquivo com listagem de alunos: solicita ao usuário o nome de um arquivo de texto contendo os dados de alunos. Esse arquivo conterá os dados de, no máximo, um aluno por linha e, em cada linha, todos os dados do aluno deverão ser informados na mesma ordem descrita na descrição da estrutura que define um aluno. Se o aluno não fez PO, o arquivo deve conter a nota zero no local adequado. Ao final do cadastramento, deve-se mostrar na tela uma contagem de quantos alunos foram cadastrados.

4. Gerar arquivo com dados dos alunos aprovados, ordenados em ordem alfabética: escreve um arquivo texto contendo os nomes, RAs e as médias finais dos alunos aprovados na disciplina, um aluno por linha. Os alunos constantes no arquivo resultante devem estar em ordem alfabética de nome. (OBS: caso existam dois ou mais alunos com o mesmo nome, resolva o "empate" colocando aquele que tem menor RA na frente). Ao final do arquivo, deve aparecer a contagem de alunos aprovados. O nome do arquivo de saída deve ser aprovados.txt. 

5. Gerar arquivo com dados dos alunos reprovados, ordenados em ordem
alfabética: escreve um arquivo texto contendo os nomes, RAs e as médias finais dos alunos reprovados na disciplina, um aluno por linha. Os alunos constantes no arquivo resultante devem estar em ordem alfabética de nome. Ao final do arquivo, deve aparecer a contagem de alunos reprovados. O nome do arquivo de saída deve ser reprovados.txt.

6. Fechar programa: encerra a execução do programa. Antes do encerramento, salva todos os dados dos alunos armazenados no vetor em um arquivo de saída chamado "atual.txt", colocando um aluno por linha, com os campos separados por espaço.