#include "Admin.h"

Admin::Admin()
{

}

Admin::~Admin()
{

}

// GETTERS

const string Admin::getNumeMagazin(){
    return this->numeMagazin;
}

vector<AparatFoto> Admin::getAparateFoto(){
    return this->aparate;
}

vector<Drona> Admin::getDrone(){
    return this->drone;
}

// SETTERS

void Admin::setAparatFoto(){
    AparatFoto ap;
    cin >> ap;
    this->aparate.push_back(ap);
}

void Admin::setDrona(){
    Drona d;
    cin >> d;
    this->drone.push_back(d);
}

// METODE

void Admin::deleteAparatFoto(int pozitie){
    this->aparate.erase(this->aparate.begin() + pozitie);
}

void Admin::addAparatFoto(AparatFoto ap){
    this->aparate.push_back(ap);
}

void Admin::deleteDrona(int pozitie){
    this->drone.erase(this->drone.begin()+pozitie);
}

void Admin::addDrona(Drona d){
    this->drone.push_back(d);
}

void Admin::showProduseMagazin(){
    for (int i = 0; i < this->aparate.size(); i++)
        cout << this->aparate[i] << endl;
    for (int  i =0; i< this->drone.size(); i++)
        cout << this->drone[i] << endl;
}
