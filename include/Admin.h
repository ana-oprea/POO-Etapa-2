#ifndef ADMIN_H
#define ADMIN_H
#include "AparatFoto.h"
#include "Drona.h"
#include <string>
#include <vector>
#include <iostream>

class Admin
{
    private:
       vector <AparatFoto> aparate; // toate aparatele din magazin
       vector <Drona> drone;    // toate dronele din magazin

       const string numeMagazin = "Echipamente Foto";
    public:
        // CONSTRUCTORS SI DESTRUCTOR
        Admin();
        ~Admin();

        // SETTERS
        void setAparatFoto();
        void setDrona();

        // GETTERS
        vector<AparatFoto> getAparateFoto();
        vector<Drona> getDrone();
        const string getNumeMagazin();

        // METODE
        void addAparatFoto(AparatFoto);
        void deleteAparatFoto(int);
        void addDrona(Drona);
        void deleteDrona(int);
        void showProduseMagazin();

        // NU AM SUPRAINCARCARI
};

#endif // ADMIN_H
