#include "leaderboard.hpp"
#include <iostream>

int main() {
    Leaderboard lb;
    int choice;

    while (true) {
        std::cout << "\n========== Leaderboard Menu ==========\n";
        std::cout << "1. Add Player\n";
        std::cout << "2. Update Player Score\n";
        std::cout << "3. Remove Player\n";
        std::cout << "4. Display Leaderboard\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 5) {
            std::cout << "Exiting.....!\n";
            break;
        }

        std::string name;
        int score;

        switch (choice) {
            case 1:
                std::cout << "Enter player name: ";
                std::cin >> name;
                std::cout << "Enter score: ";
                std::cin >> score;
                lb.addPlayer(name, score);
                break;

            case 2:
                std::cout << "Enter player name: ";
                std::cin >> name;
                std::cout << "Enter new score: ";
                std::cin >> score;
                lb.updateScore(name, score);
                break;

            case 3:
                std::cout << "Enter player name to remove: ";
                std::cin >> name;
                lb.removePlayer(name);
                break;

            case 4:
                lb.displayLeaderboard();
                break;

            default:
                std::cout << "Invalid option! Try again.\n";
        }
    }

    return 0;
}
