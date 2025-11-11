#ifndef POKEMON_CHARACTERS_H
#define POKEMON_CHARACTERS_H

#include<iostream>
#include<string>
using namespace std;


class POKEMON_Characters{
    protected:
            string name;
            string element;
            string attackpower;
            string specialability;

    public:
        POKEMON_Characters(string n,string e,string a,string s);
        virtual ~POKEMON_Characters();
        virtual void displayInfo()=0;

};
class  Pikachu :public POKEMON_Characters{
    public:
        Pikachu();
        void displayInfo() override;
};

class  Squirtle :public POKEMON_Characters{
    public:
        Squirtle();
        void displayInfo() override;
};

class  Bulbasaur :public POKEMON_Characters{
    public:
        Bulbasaur();
        void displayInfo() override;
};

#endif
