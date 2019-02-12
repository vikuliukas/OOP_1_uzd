#include <iostream>
#include <string>

void PirmaIrPaskutine(int ilgis);
void Tuscios(int ilgis);
void Vidurine(int dydis, std::string vardas);

int main(){
    int ilgis, dydis;
    std::string vardas;
    std::cout << "Iveskite varda: ";
    std::cin>>vardas;
    std::cout << "Iveskite remelio dydi: ";
    std::cin >> dydis;

    if(vardas[vardas.size()-1]=='s'){
        ilgis = 2 * dydis + 2 + 10 + vardas.size();
    }
    else{
        ilgis = 2 * dydis + 2 + 9 + vardas.size();
    }
//Spausdinimas:
    PirmaIrPaskutine(ilgis);
    for(int i=0; i<dydis; i++){
        Tuscios(ilgis);
    }
    Vidurine(dydis,vardas);
    for(int i=0; i<dydis; i++){
        Tuscios(ilgis);
    }
    PirmaIrPaskutine(ilgis);

    return 0;
}

void PirmaIrPaskutine(int ilgis){
    for(int i=0; i<ilgis; i++){
        std::cout<<"*";
    }
    std::cout<<"\n";
}

void Tuscios(int ilgis){
    std::cout<<"*";
    for(int i=1; i<ilgis-1; i++){
        std::cout<<" ";
    }
    std::cout<<"*\n";
}

void Vidurine(int dydis, std::string vardas){
    std::cout<<"*";
    for(int i=0; i<dydis; i++){
        std::cout<<" ";
    }
    if(vardas[vardas.size()-1]=='s'){
        std::cout<<"Sveikas, "<<vardas<<"!";
    }
    else{
        std::cout<<"Sveika, "<<vardas<<"!";
    }
    for(int i=0; i<dydis; i++){
        std::cout<<" ";
    }
    std::cout<<"*\n";

}