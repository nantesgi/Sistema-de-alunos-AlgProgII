#include "include/programa.h"

int main() {
  lista alunos[MAX];  //declarando a lista de alunos e seus
  int acao;
  int quantAlunos = 0;
  
  while(true) {
  printf("\n");
  printf("[1] Cadastrar novo aluno\n");
  printf("[2] Buscar aluno\n");
  printf("[3] Ler arquivo com listagem de alunos\n");
  printf("[4] Gerar arquivo com dados dos alunos aprovados, ordenados em ordem alfabética\n");
  printf("[5] Gerar arquivo com dados dos alunos reprovados, ordenados em ordem alfabética\n");
  printf("[6] Fechar programa\n");

//entrada do usuário, informando a ação escolhida
  scanf("%d", &acao);

//condicionais do menu de ações
if(acao==1){  //chamar função cadastro
    int quantCadastro;

    printf("\nQuantidade de alunos a cadastrar: ");
    scanf("%d", &quantCadastro);
    
    for(int i = 0;i<quantCadastro;i++){
        printf("\n");  
        cadastro(alunos,quantAlunos);
      }
  }
  else if(acao == 2){ //chamar função busca
    char pesquisa[MAX];
    
      printf("\nNome do aluno: ");
      scanf(" %[^\n]",pesquisa);

      int resultado = busca(alunos,quantAlunos,pesquisa);

      if(resultado>0)
        printf("\n");
  }
  else if(acao == 3){ //chamar função de listagem de alunos
    printf("Foram cadastrados %d alunos\n", listaDeAlunos(alunos, quantAlunos));
  }
  else if(acao == 4){  //chamar função de gerar arquivo com aprovados
    char resultado[] = "aprovados";
    ordenar(alunos,quantAlunos,resultado);
  } 
  else if(acao == 5){ //chamar função de gerar arquivo com reprovados
    char resultado[] = "reprovados";
    ordenar(alunos,quantAlunos,resultado);
  } 
  else if(acao == 6){ //chamar função de fechar programa e gerar um arquivo com todos os cadastros
    char resultado[] = "atual";
    ordenar(alunos, quantAlunos, resultado);
    break;
  }
  else if(acao < 1 && acao > 6){
  printf("\nOpa, comando inválido. Tente novamente :)\n");
  }
}
}