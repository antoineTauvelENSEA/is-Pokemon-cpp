#include <iostream>
#include "Pokemon.h"
#include "Pokedex.h"
#include "Pokeball.h"
#include "PokemonParty.h"
#include <vector>

using std::vector;

int main() {
    std::cout << "******* Pokemon test *******" << std::endl;

    Pokedex* pokedexInstance = Pokedex::getInstance();
    Pokedex* pokedexInstanceNumber2 = Pokedex::getInstance();

    std::cout <<"Nombre de Pokemon en memoire : " << Pokemon::getNumberOfPokemon() << std::endl;

    Pokemon* testGet = Pokedex::getInstance()->getOnePokemonById(15);

    /*testGet->displayInfo();

    testGet = Pokedex::getInstance()->getOnePokemonByName("Mewtwo");
    testGet->displayInfo();*/

    Pokeball * pokeball = new Pokeball();

    std::cout <<"Nombre de Pokemon en memoire : " << Pokemon::getNumberOfPokemon() << std::endl;

    pokeball->fillPokeballRandom(Pokedex::getInstance(),15);
    pokeball->displayList();

    vector<int> vectorOfIndex={0,2,4,6,12,1};
    PokemonParty* pokemonParty = new PokemonParty(pokeball,vectorOfIndex);

    pokemonParty->displayList();

    std::cout <<"Nombre de Pokemon en memoire : " << Pokemon::getNumberOfPokemon() << std::endl;

    /*vector<Pokemon*> pokeke;
      for (int i=0;i<10;i++){
          char * name;
          sprintf(name,"Bullbizarre#%d",i);
          pokedex.push_back(new Pokemon(name));
      }

      for(Pokemon * pp :pokedex){
          pp->scream();
      }

      //pokedex[15]->scream();
      pokedex.at(15)->scream();
*/
    return 0;
}





