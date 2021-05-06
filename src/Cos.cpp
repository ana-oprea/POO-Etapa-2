#include "Cos.h"

Cos::Cos()
{
    this->total = 0;
}

Cos::~Cos()
{

}

// SETTERS
void Cos::setTotal(float total){
    this->total = total;
}

// GETTERS

float Cos::getTotal(){
    return this->total;
}


// void Cos::addInCos(const Produs& produs){
//     if (produs.idProdus == 1){
//         this->cos.push_back(produs.aparat.idAparat);
//         this->setTotal(this->total+produs.aparat.pret);
//     }
//     else{
//         this->cos.push_back(produs.drona.idDrona);
//         this->setTotal(this->total+produs.drona.pret);
//     }
// }

// void Cos::removeFromCos(int id){
//     for (int i : this->cos){
//         vector<int>::iterator it = find(this->cos.begin(), this->cos.end(), id);
//             if(it != this->cos.end()){
//                 this->cos.erase(it);
//                 // trebuie sa scada din total pretul
//                 }

//     }
// }
