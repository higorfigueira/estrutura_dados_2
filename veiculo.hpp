#include <string>
#include <iostream>

using namespace std;

class Veiculo{

  protected:
    string marca;
    string modelo;
    float preco;

  private:
    int teste;

  public:
    Veiculo(){
      marca = "";
      modelo = "";
      preco = 0.0;
    };

    Veiculo(string mc, string md, float pr){
      marca = mc;
      modelo = md;
      preco = pr;
    };

    ~Veiculo(){

    };

    string  getMarca(){
      return marca;
    };

    void  setMarca(string mc){
      marca = mc;
    };


    string  getModelo(){
      return modelo;
    };

    void  setModelo(string md){
      modelo = md;
    };

    float  getPreco(){
      return preco;
    };

    void  setPreco(float pr){
      preco = pr;
    };


};
