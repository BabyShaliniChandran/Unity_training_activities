
#ifndef LEADERBOARD_HPP
#define LEADERBOARD_HPP

#include <string>
#include <iostream>
#include <map>
class Leaderboard{

    private:
            std::map<std::string,int> playerScores;
            std::multimap<int,std::string> ranking;
    public:
            Leaderboard();
            void addPlayer(std::string name,int score);
            void updateScore(std::string name,int score);
            void removePlayer(std::string name);
            void displayLeaderboard();
            
};

#endif 