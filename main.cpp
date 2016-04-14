#include <iostream>
#include <string>
#include "pessoa.hpp"

using namespace std;

int main(){
  int idade;
  Pessoa *pessoa, *pessoa2, *pessoa3, *pessoa4, *pessoa5, *raiz = NULL;
  pessoa = new Pessoa(20);
  pessoa2 = new Pessoa (22);
  pessoa3 = new Pessoa (18);
  pessoa4 = new Pessoa (16);
  pessoa5 = new Pessoa (24);

  raiz = pessoa;
  raiz->inserir(pessoa2);
  raiz->inserir(pessoa3);
  raiz->inserir(pessoa4);
  raiz->inserir(pessoa5);

  //cout << raiz->getDireita()->getId() << endl;


  cout << "informe a idade que deseja buscar: " << endl;
  cin >> idade;

  //raiz->busca(idade);

  raiz->mostra();

  // delete pessoa;
  // delete pessoa2;
  // delete pessoa3;
  // delete pessoa4;
  // delete pessoa5;

  return 0;
};
