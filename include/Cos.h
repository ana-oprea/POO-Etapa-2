#ifndef COS_H
#define COS_H
#include <string>
#include <vector>
#include <algorithm>
#include "Produs.h"
using namespace std;

/// ACEASTA CLASA VA FI IMPLEMETATA IN ETAPA 2 (AM NEVOIE DE CLASA PRODUS)

class Cos
{
    private:
    vector<int> cos;
    float total;

    public:
        Cos();
        ~Cos();
        // SETTERS
        void setTotal(float);
        // GETTERS
        float getTotal();
        // METODE
        //void addInCos(const Produs&);
        //void removeFromCos(int);
        // SUPRAINCARCARI
};

#endif // COS_H
