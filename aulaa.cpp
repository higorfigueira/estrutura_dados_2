#include "veiculo.hpp"
#include "carro.hpp"
#include "moto.hpp"


int main (){

  string marca, modelo;
  float preco;
  int numeroAssentos, cilindradas, tipoCambio;

  /*cout << "insira a Marca:" << endl;
  cin >> marca;
  carro.setMarca(marca);
  cout << "insira a Modelo:" << endl;
  cin >> modelo;
  carro.setModelo(modelo);
  cout << "insira a Preco:" << endl;
  cin >> preco;
  carro.setPreco(preco);

  cout << endl;

  cout << "Dados do Carro: " << endl;
  cout << carro.getMarca() << endl;
  cout << carro.getModelo() << endl;
  cout << carro.getPreco() << endl;
  cout << endl;
  */


    //----------------------------------------



  /*Carro *carro;
  carro = new Carro();

  cout << "Qual a Marca: " << endl;
  cin >> marca;
  carro->setMarca(marca);

  cout << "Qual o Modelo: " << endl;
  cin >> modelo;
  carro->setModelo(modelo);

  cout << "Qual o Preco: " << endl;
  cin >> preco;
  carro->setPreco(preco);

  cout << "Qual o Tipo do Cabio: " << endl;
  cin >> tipoCambio;
  carro->setTipoCambio(tipoCambio);

  cout << "Qual o Numero de Assentos: " << endl;
  cin >> numeroAssentos;
  carro->setNumeroAssentos(numeroAssentos);

  cout << endl;

  cout << "Dados do Carro: " << endl;
  cout << carro->getMarca() << endl;
  cout << carro->getModelo() << endl;
  cout << carro->getPreco() << endl;
  cout << carro->getTipoCambio() << endl;
  cout << carro->getNumeroAssentos() << endl;

  cout << endl;

  */

  //----------------------------------------


/*
  Moto *moto;
  moto = new Moto("Marca Teste", "Modelo Teste", 30000, 600);

  cout << "Dados do Carro: " << endl;
  cout << moto->getMarca() << endl;
  cout << moto->getModelo() << endl;
  cout << moto->getPreco() << endl;
  cout << moto->getCilindradas()<< endl;
  cout << endl;

*/

  //----------------------------------------


  Moto *vetor_moto;
  int i=0, quantidade=0;

  cout << "digite a quantidade de motos que deseja cadastrar: " << endl;
  cin >> quantidade;

  vetor_moto = new Moto [quantidade];

  while (i<quantidade) {
    cout << "Qual a Marca: " << endl;
    cin >> marca;
    vetor_moto[i].setMarca(marca);

    cout << "Qual a Modelo: " << endl;
    cin >> modelo;
    vetor_moto[i].setModelo(modelo);

    cout << "Qual a Preco: " << endl;
    cin >> preco;
    vetor_moto[i].setPreco(preco);

    cout << "Qual a cilindradas: " << endl;
    cin >> cilindradas;
    vetor_moto[i].setCilindradas(cilindradas);

    i++;

  }

 //mostrar_veiculo (vetor_moto, quantidade);

    i=0;
     while (i<quantidade) {
       cout << "Dados do Carro: " << endl;
       cout << vetor_moto[i].getMarca() << endl;
       cout << vetor_moto[i].getModelo() << endl;
       cout << vetor_moto[i].getPreco() << endl;
       cout << vetor_moto[i].getCilindradas() << endl;
       cout << endl;
       i++;
     }








  return 0;

};
