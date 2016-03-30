class Carro:public Veiculo{

private:
   int tipoCambio;
   int numeroAssentos;

public:
   Carro(){
     tipoCambio = 0;
     numeroAssentos = 0;
   };

   Carro(string mc, string md, float pr, int tc, int na){
     marca = mc;
     modelo = md;
     preco = pr;

     tipoCambio = tc;
     numeroAssentos = na;
     //teste = "teste";
     //setTeste(10);

   };

   ~Carro(){

   };

   int  getTipoCambio(){
     return tipoCambio;
   };

   void  setTipoCambio(int tc){
     tipoCambio = tc;
   };

   int getNumeroAssentos(){
     return numeroAssentos;
   };

   void  setNumeroAssentos(int na){
     numeroAssentos = na;
   };

};
