//
// Created by antotauv on 11/09/2024.
//

#include "Pokeball.h"

#include <iostream>

void Pokeball::addOnePokemonFromPokedex(Pokedex * pokedex, int index) {
    this->arrayOfPokemon.push_back(pokedex->getOnePokemonById(index));
}

Pokeball::Pokeball() {

}

void Pokeball::captureOnePokemon(Pokemon* pokemon){
    this->arrayOfPokemon.push_back(pokemon);
}

void Pokeball::fillPokeballRandom(Pokedex* pokedex, int number) {
    std::srand(time(nullptr));
    for (int i=0;i<number;i++){
        int random = std::rand()%pokedex->getMaximumIndex();
        Pokemon * local = pokedex->getOnePokemonById(random);
        if (local != nullptr)
        {
            arrayOfPokemon.push_back(local);
        }
    }
}

Pokemon* Pokeball::getOnePokemonByName(string name){
    int index = findPostionInArrayByName(name);
    if (index!=-1){
        Pokemon * pokemon = arrayOfPokemon.at(index);
        arrayOfPokemon.erase(arrayOfPokemon.begin()+index);
        return pokemon;
    }
    return nullptr;
}
Pokemon* Pokeball::getOnePokemonById(int id){
    int index = findPositionInArrayById(id);
    if (index!=-1){
        Pokemon * pokemon = arrayOfPokemon.at(index);
        arrayOfPokemon.erase(arrayOfPokemon.begin()+index);
        return pokemon;
    }
    return nullptr;
}

Pokemon* Pokeball::getOnePokemonByIndexInList(int index){
    Pokemon * toReturn = arrayOfPokemon.at(index);
    this->arrayOfPokemon.erase(arrayOfPokemon.begin()+index);
    return toReturn;
}
