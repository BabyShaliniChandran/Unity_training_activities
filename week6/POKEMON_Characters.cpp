#include "POKEMON_Characters.h"

POKEMON_Characters:: POKEMON_Characters(string n,string e,string a,string s){
            name=n;
            element=e;
            attackpower=a;
            specialability =s;

}
 POKEMON_Characters::~POKEMON_Characters() {}
     

Pikachu ::Pikachu()
    :POKEMON_Characters("Pikachu","Electric","Thunderbolt, Quick Attack, Iron Tail","Static"){}

        void Pikachu::displayInfo() {
            cout<<"----------Pokemon and thier powers----------\n";
            cout<<"Pokemon:"<<name<<endl;
            cout<<"Element:"<<element<<endl;
            cout<<"Attack Powers:"<<attackpower<<endl;
            cout<<"Special Ability:"<<specialability<<endl;

        }

Squirtle :: Squirtle()
    :POKEMON_Characters("Squirtle","Water","Water Gun, Bubble, Withdraw","Torrent"){}

        void Squirtle::displayInfo() {
            cout<<"----------Pokemon and thier powers----------\n";
            cout<<"Pokemon:"<<name<<endl;
            cout<<"Element:"<<element<<endl;
            cout<<"Attack Powers:"<<attackpower<<endl;
            cout<<"Special Ability:"<<specialability<<endl;
            
        }


 Bulbasaur ::Bulbasaur()
    :POKEMON_Characters("Bulbasaur","Grass/Poison","Vine Whip, Razor Leaf, Sleep Powder","Overgrow"){}

        void Bulbasaur::displayInfo() {
            cout<<"----------Pokemon and thier powers----------\n";
            cout<<"Pokemon:"<<name<<endl;
            cout<<"Element:"<<element<<endl;
            cout<<"Attack Powers:"<<attackpower<<endl;
            cout<<"Special Ability:"<<specialability<<endl;
            
        }


