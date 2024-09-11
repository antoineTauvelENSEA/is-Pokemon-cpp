#include <iostream>
#include "Pokemon.h"
#include "Pokedex.h"
#include <vector>

using std::vector;

int main() {
    std::cout << "******* Pokemon test *******" << std::endl;

    Pokedex* pokedexInstance = Pokedex::getInstance();
    Pokedex* pokedexInstanceNumber2 = Pokedex::getInstance();

    std::cout <<"Nombre de Pokemon en memoire : " << Pokemon::getNumberOfPokemon() << std::endl;

    Pokemon* testGet = Pokedex::getInstance()->getOnePokemonById(15);

    testGet->displayInfo();

    testGet = Pokedex::getInstance()->getOnePokemonByName("Mewtwo");
    testGet->displayInfo();

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





