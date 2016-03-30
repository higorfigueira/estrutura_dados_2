class Moto:public Veiculo{

private:
  int cilindradas;

public:
  Moto(){
    marca = "";
    modelo = "";
    preco = 0.0;
    cilindradas = 0;
  };

  Moto (string mc, string md, float pr, int cl){
      marca = mc;
      modelo = md;
      preco = pr;
      cilindradas = cl;
  };

  int getCilindradas(){
    return cilindradas;
  };

  void  setCilindradas(int cl){
    cilindradas = cl;
  };

};
