//
// Created by antotauv on 12/09/2024.
//

#include <algorithm>
#include "PokemonParty.h"

PokemonParty::PokemonParty(Pokeball * ppokeball, vector<int> vectorOfIndexInPokeball){
    std::sort(vectorOfIndexInPokeball.begin(),vectorOfIndexInPokeball.end());

    for(int i =0; i<6 && i<vectorOfIndexInPokeball.size();i++){
            this->arrayOfPokemon.push_back(ppokeball->getOnePokemonByIndexInList(vectorOfIndexInPokeball.at(i)-i));
        }
}

Pokemon * PokemonParty::getOnePokemonById(int id){
    return nullptr;
}
Pokemon* PokemonParty::getOnePokemonByName(string name){
    return nullptr;
}