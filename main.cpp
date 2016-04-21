#include <iostream>
#include <string>
#include "pessoa.hpp"

using namespace std;

int main(){
  int idade;
  Pessoa *pessoa, *pessoa2, *pessoa3, *pessoa4, *pessoa5, *pessoa6, *pessoa7, *raiz = NULL;
  pessoa = new Pessoa(20);
  pessoa2 = new Pessoa (22);
  pessoa3 = new Pessoa (24);
  pessoa4 = new Pessoa (21);
  pessoa5 = new Pessoa (28);
  pessoa6 = new Pessoa (30);
  pessoa7 = new Pessoa (32);

  raiz = pessoa;
  raiz->inserir(pessoa2);
  raiz->inserir(pessoa3);
  raiz->inserir(pessoa4);
  raiz->inserir(pessoa5);
  raiz->inserir(pessoa6);
  raiz->inserir(pessoa7);


  //cout << raiz->getDireita()->getId() << endl;

  raiz->mostra();

  //cout << "informe a idade que deseja buscar: " << endl;
  //cin >> idade;

  //raiz->busca(idade);

  cout << endl;

  cout << "informe a idade que deseja apagar: " << endl;
  cin >> idade;

  raiz->deletar(idade);

  cout << endl;

  raiz->mostra();


  // delete pessoa;
  // delete pessoa2;
  // delete pessoa3;
  // delete pessoa4;
  // delete pessoa5;

  return 0;
};
