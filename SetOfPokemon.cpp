//
// Created by antotauv on 09/09/2024.
//

#include "SetOfPokemon.h"

#include <iostream>

void SetOfPokemon::displayList() {
    std::cout << "*********************************"<< std::endl;
    for(Pokemon * pokemon : arrayOfPokemon){
        pokemon->displayInfo();
    }
}

SetOfPokemon::SetOfPokemon(){
}

int SetOfPokemon::findPostionInArrayByName(string name){
    for (int i=0;i<arrayOfPokemon.size();i++){
        if (name==arrayOfPokemon.at(i)->getName()){
            return i;
        }
    }
    return -1;
}

int SetOfPokemon::findPositionInArrayById(int id) {
    for (int i=0;i<arrayOfPokemon.size();i++){
        if (id==arrayOfPokemon.at(i)->getId()){
            return i;
        }
    }
    return -1;
}