#include "vecteur.h"
#include <iostream> 




Vecteur::Vecteur(){

        this->nb = 3;
        this->T = new float[3];
        for(int i = 0;i<3;i++){
            this->T[i] = 0 ;
        }
      
};


int Vecteur::appartient(int n){

    for(int i = 0;i<this->nb;i++){
        if(this->T[i] == n) {return 1;}

    }
    
        return 0;
    
};

int Vecteur::cardinal(){
    return this->nb;
};

float Vecteur::norme() const {
    float sum = 0;
    for (int i = 0; i < nb; ++i)
        sum += T[i] * T[i];
    return sqrt(sum);
}

Vecteur& Vecteur::operator=(Vecteur& v){
    

    delete[] T;
    this->nb = v.nb;
    T = new float[nb];
    for(int i = 0;i<v.nb;i++){
        this->T[i] = v.T[i];
    }
     return *this;

};



bool Vecteur::operator==(const Vecteur v){
   
    if(nb == v.nb){
    
        for(int i = 0;i<nb;i++){
            if(T[i] != v.T[i]){return 0;}
        }
         return 1;

    }

    else{
        return 0;
    }
};


bool Vecteur::operator!=(const Vecteur v){
   
    if(*this == v){return 0;}
    return 1;

};

bool Vecteur::operator>(const Vecteur v){

    if(this->norme() > v.norme()){return true; }

    return false;

};



bool Vecteur::operator>=(const Vecteur v){
    if(this->norme() >= v.norme()){ return true;}
    
    return false;
};


bool Vecteur::operator<(const Vecteur v){
    if(this->norme() < v.norme()){ return true;}


    return false;
};

bool Vecteur::operator<=(const Vecteur v){
    if(this->norme() <= v.norme()){ return true;}

    return false;
};

Vecteur Vecteur::operator+ (const Vecteur& v){

    if(this->nb != v.nb){
        return -1;
    }

    else{
       Vecteur add(nb);
        for(int i = 0;i<nb;i++){
            add[i] = this->T[i] + v.T[i];
        }
        return add;

    }

}


Vecteur Vecteur::operator- (const Vecteur& v){

    if(this->nb != v.nb){
        return -1;
    }

    else{
       Vecteur min(nb);
        for(int i = 0;i<nb;i++){
            min[i] = this->T[i] + v.T[i];
        }
        return min;

    }

};



float Vecteur::operator*(const Vecteur v){

    if(this->nb !=v.nb){ 
        exit(-1);
    }

    else {

        float mult = 1;

        for(int i =0 ;i<nb;i++){
            mult += this->T[i] * v.T[i];
        }

        return mult;


    }

};


float& Vecteur::operator[](int i){

    if(i>nb){
        exit(-1);
    }
    else{
        return this->T[i];
    }
};


