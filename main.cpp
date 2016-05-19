#include <iostream>
#include <string>
#include <fstream>
#include "pessoa.hpp"

using namespace std;

int main(){
  int idade, quantidade, id, ano, x = 0;
  string nome;
  Pessoa *pessoa, *pessoaAux, *raiz = NULL;

  cout << "Quantos deseja inserir" << endl;
  cin >> quantidade;

  while(x < quantidade){
    cout << "insira a idade da pessoa:" << endl;
    cin >> ano;
    // cout << "insira o nome da pessoa" << endl;
    // cin >> nome;
    Pessoa *pessoa = new Pessoa(ano/*, nome*/);
    if(raiz == NULL){
      raiz = pessoa;
    }
    else
      raiz->inserir(pessoa);
  x++;
  };
  cout << endl;

  int alt = 0;

  raiz->mostra();

  int altesq = 0, altdir = 0;

  alt = raiz->altura(altesq, altdir);

  // cout << endl << endl << alt+1 << endl;

  return 0;

};





























// string idades[5][2];
// int i=0;
// while(i<5){
//   cout << "informe um valor a ser removido: " << endl;
//   cin >> idade;
//   if(raiz->busca(idade) != NULL){
//     pessoaAux = raiz->busca(idade);
//     idades[i][0] = idade;
//     idades[i][1] = pessoaAux->getNome();
//     raiz->deletar(idade);
//     i++;
//   }
// }
//
// cout << endl;
//
// raiz->mostra();
//
// cout << endl;
//
// int j=0;
// while(j<5){
//   cout << idades[j][0];
//   cout << idades[j][1] << endl;
//   j++;
// }
//
