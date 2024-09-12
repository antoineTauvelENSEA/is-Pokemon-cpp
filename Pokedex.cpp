//
// Created by antotauv on 09/09/2024.
//

#include <fstream>
#include <iostream>
#include <sstream>
#include "Pokedex.h"

Pokedex* Pokedex::instance = nullptr;

Pokedex::Pokedex(string fileName):SetOfPokemon() {

    std::cout << "*** Constructeur du Pokedex ***" << std::endl;

    std::ifstream file(fileName);
    if(!file.is_open()){
        std::cerr<<"File "<<fileName<<" not found "<<std::endl;
        return;
    }

    std::string line;
    std::getline(file, line);
    while (std::getline(file, line)) {
    //    std::cout << line << std::endl;
        std::stringstream inputstringstream(line);
        std::string cell;
        std::vector<std::string> lineData;

        while(std::getline(inputstringstream,cell,',')){
            lineData.push_back(cell);
        }
        int id = std::stoi(lineData.at(0));
        double attackValue = std::stod(lineData.at(6));
        double hitPoint = std::stod(lineData.at(5));
        double defenseValue = std::stod(lineData.at(7));
        int generation = std::stoi(lineData.at(11));

        arrayOfPokemon.push_back(new Pokemon(lineData.at(1),id,hitPoint,attackValue,
                                             defenseValue,generation));
    }
}

Pokemon* Pokedex::getOnePokemonByName(string name) {
    int indexInList=this->findPostionInArrayByName(name);
    if (indexInList!=-1){
        return new Pokemon(*(this->arrayOfPokemon.at(indexInList)));
    }
    return nullptr;
}
Pokemon* Pokedex::getOnePokemonById(int id) {
    int indexInList=this->findPositionInArrayById(id);
    if (indexInList!=-1){
        return new Pokemon(*(this->arrayOfPokemon.at(indexInList)));
    }
    return nullptr;
}

Pokedex::~Pokedex(){

}

Pokedex* Pokedex::getInstance() {
    if (instance== nullptr){
        instance = new Pokedex("../ressources/pokedex.csv");
    }
    return instance;
}

int Pokedex::getSize(){
    return arrayOfPokemon.size();
}

int Pokedex::getMaximumIndex(){
    int max=0;
    for (Pokemon * pokemon : arrayOfPokemon){
        if (pokemon->getId()>max) max=pokemon->getId();
    }
    return max;
}
