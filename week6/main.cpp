#include "POKEMON_Characters.h"

int main(){
    int choice;
    POKEMON_Characters* pokemon= nullptr;
    
    cout << "=== Pokemon Selection ===\n";
    cout << "1. Pikachu\n";
    cout << "2. Squirtle\n";
    cout << "3. Bulbasaur\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            pokemon = new Pikachu();
            break;
        case 2:
            pokemon = new Squirtle();
            break;
        case 3:
            pokemon = new Bulbasaur();
            break;
        default:
            cout << "Invalid choice!\n";
            return 0;
    }
    cout<<endl;
    pokemon->displayInfo();
    delete pokemon;
    return 0;
}