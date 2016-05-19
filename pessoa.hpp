using namespace std;
// int inserir(Pessoa *novo);
//bool busca (int idade);
// void mostra ();

class Pessoa{



  protected:
    int id;
    //string nome;
    Pessoa *direita, *esquerda, *pai;

  public:

    //Pessoa* busca (int idade);

    Pessoa(){
      id = 0;
      //nome = "";
      direita = esquerda = NULL;
    };

    Pessoa(int id/*, string nome*/){
      this->id = id;
      //this->nome = nome;
      direita = NULL;
      esquerda = NULL;
      pai = NULL;
    };

    ~Pessoa(){

    };

    //Gets e Sets
    int getId (){
      return id;
    };

    void setId(int id){
      this->id=id;
    };

    // string getNome (){
    //   return nome;
    // };
    //
    // void setNome(string nome){
    //   this->nome=nome;
    // };

    Pessoa *getDireita (){
      return direita;
    };

    void setDireita(Pessoa *direita){
      this->direita=direita;
    };

    Pessoa *getEsquerda (){
      return esquerda;
    };

    void setEsquerda(Pessoa *esquerda){
      this->esquerda=esquerda;
    };

    Pessoa *getPai (){
      return pai;
    };

    void setPai(Pessoa *pai){
      this->pai=pai;
    };
    //FIM GET e SET


    int inserir(Pessoa *novo){

      if(novo->id >= this->id){
              if(this->direita == NULL){
                novo->pai = this;
                this->direita = novo;
                return 1;

              }
          else
          this->direita->inserir(novo);
      }
      else{
          if(this->esquerda == NULL){
            novo->pai = this;
            this->esquerda = novo;
            return 1;
          }
          else
          this->esquerda->inserir(novo);
        }

    }


    //****************função BUSCAR PESSOA**************//
    Pessoa* busca (int idade){
      if(idade == this->id) {
        cout << "encontrado" << endl;
        return this;
      }
      else {
        if(this->id < idade && this->direita!=NULL){
          return this->direita->busca(idade);
        }
        else
          if(this->esquerda != NULL)
            return this->esquerda->busca(idade);
      }

      cout << "Não encontrado " << this->id << endl;
      return NULL;
    };

    //*********Função mostra********//
    int mostra (){
      cout << this->getId() << endl;
      //cout << this->getNome() << endl;

      if(this->esquerda == NULL && this->direita == NULL)
        return 0;

      else{
      if(this->esquerda != NULL)
        this->esquerda->mostra();

      if(this->direita != NULL)
        this->direita->mostra();
      }
    };



    //**************função DELETAR PESSOA*************//
    bool deletar (int idade){
      Pessoa *apagar = this->busca(idade);

      if(apagar->getPai() == NULL && apagar->getDireita() == NULL && apagar->getEsquerda() == NULL){
        delete apagar;
        return true;
      }

      // cout << apagar->getId() << endl << endl;

      if((apagar->esquerda == NULL) && (apagar->direita == NULL)){
        if (apagar->pai->direita->getId() == apagar->getId()) {
          apagar->pai->setDireita(NULL);
          delete apagar;
          return true;
        }else if(apagar->pai->esquerda->getId() == apagar->getId()){
          apagar->pai->setEsquerda(NULL);
          delete apagar;
          return true;
        }
      }

      if((apagar->direita != NULL) && (apagar->esquerda == NULL)){
          apagar->pai->setDireita(apagar->getDireita());
          apagar->direita->setPai(apagar->getPai());
          delete apagar;
          return true;
      }

      if((apagar->direita == NULL) && (apagar->esquerda != NULL)){
          apagar->pai->setEsquerda(apagar->getEsquerda());
          apagar->esquerda->setPai(apagar->getPai());
          delete apagar;
          return true;
        }

    };

    int altura(int altesq, int altdir){
      int a;
      std::cout << "iniciou" << std::endl;
      if(this->esquerda == NULL && this->direita == NULL){
        std::cout << "retornou" << std::endl;
        return 0;
      }
      else{
        if(this->esquerda != NULL){
          altesq++;
          this->esquerda->altura(altesq, altdir);
        }
        if(this->direita != NULL){
          altdir++;
          this->direita->altura(altesq, altdir);
        }
        cout << a << endl;
        std::cout << "saiu do else" << std::endl;
    }
      a = ((altdir > altesq)?altdir:altesq);
      std::cout << a+1 << std::endl;
      return a;

    };




};
