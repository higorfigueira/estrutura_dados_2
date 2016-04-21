using namespace std;
// int inserir(Pessoa *novo);
//bool busca (int idade);
// void mostra ();

class Pessoa{



  protected:
    int id;
    Pessoa *direita, *esquerda, *pai;

  public:

    //Pessoa* busca (int idade);

    Pessoa(){
      id = 0;
      direita = esquerda = NULL;
    };

    Pessoa(int id){
      this->id = id;
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
                 cout << "passou1" <<endl;
                return 1;

              }
          else
          this->direita->inserir(novo);
      }
      else{
          if(this->esquerda == NULL){
            novo->pai = this;
            this->esquerda = novo;
            cout << "passou2" <<endl;
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

      if(this->esquerda == NULL && this->direita == NULL)
        return 0;

      else{
      if(this->esquerda != NULL){
        this->esquerda->mostra();
      }
      if(this->direita != NULL){
        this->direita->mostra();
      }
      }
    };



    //**************função DELETAR PESSOA*************//
    bool deletar (int idade){
      Pessoa *apagar = this->busca(idade);

      if(apagar->getPai() == NULL && apagar->getDireita() == NULL && apagar->getEsquerda() == NULL){
        delete apagar;
        cout << "o no foi apagado" << endl;
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
          cout << "o no foi apagado" << endl;
          return true;
      }

      if((apagar->direita == NULL) && (apagar->esquerda != NULL)){
          apagar->pai->setEsquerda(apagar->getEsquerda());
          apagar->esquerda->setPai(apagar->getPai());
          delete apagar;
          cout << "o no foi apagado" << endl;
          return true;
        }






















      // if((apagar->getDireita() != NULL) && (apagar->getEsquerda() == NULL) && (apagar->getPai() != NULL)){
      //
      //     apagar->getPai()->setDireita(apagar->getDireita());
      //     apagar->getDireita()->setPai(apagar->getPai());
      //     delete apagar;
      //     cout << "o no foi apagado" << endl;
      //     return true;
      // }
      //
      // if((apagar->getEsquerda() != NULL) && (apagar->getDireita() == NULL) && (apagar->getPai() != NULL){
      //   apagar->getPai()->setEsquerda(apagar->getEsquerda());
      //   apagar->getEsquerda()->setPai(apagar->getPai());
      //   delete apagar;
      //   cout << "o no foi apagado" << endl;
      //   return true;
      // }

      // if(apagar->getDireita() != NULL && apagar->getEsquerda != NULL ){
      //   Pessoa *aux = apagar;
      //   Pessoa *aux2 = apagar;
      //
      //   int a=0; int b=0;
      //   a = aux->getEsquerda(getId()) - apagar->getId();
      //   b = aux2->getDireita(getId()) - apagar->getId();
      //
      //   if(a < b){
      //     aux = apagar->getDireita();
      //     aux2 = apagar->getDireita();
      //
      //     apagar->getPai()->setDireita(aux);
      //     apagar->getEsquerda()->setPai(aux);
      //     aux->setDireita(aux2);
      //     aux->getPai()->setPai(apagar->getPai());
      //
      //   }
      //}

    };









    //   if(this->id == idade){
    //     if (this->pai == NULL && this->direita==NULL && this->esquerda==NULL)
    //       delete this;
    //
    //     if (this->id < idade){
    //       if(this->direita->id == idade){
    //         this->direita->direita->pai = this;
    //         this->direita = this->direita->direita;
    //         delete this;
    //       }
    //       else
    //         return this->deletar(idade);
    //     }
    //     if(this->id > idade){
    //       if(this->esquerda->id == idade){
    //         this->esquerda->esquerda->pai = this;
    //         this->esquerda = this->esquerda->esquerda;
    //         delete this;
    //       }
    //       else
    //         return this->deletar(idade)
    //     }
    //
    //   }

};
