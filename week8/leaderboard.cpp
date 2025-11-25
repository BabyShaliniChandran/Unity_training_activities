#include "leaderboard.hpp"

Leaderboard::Leaderboard(){

}

void Leaderboard::addPlayer(std::string name,int score){
    for (auto player: playerScores){
        if (player.first == name){
            std::cout<<"the player is already exist";
            return ;
        }
    }
    playerScores.insert({name,score});
    ranking.insert({score,name});
    std::cout<<"the player is added!";

}

void Leaderboard::updateScore(std::string name,int score){
    auto it = playerScores.find(name);
    if (it == playerScores.end()) {
        std::cout << "Player not found!" << std::endl;
        return;
    }
    int oldscore=it->second;
    for (auto i = ranking.begin(); i!= ranking.end();++i){
        if (i->second == name &&  i->first == oldscore){
            ranking.erase(i);
            break;
        }
    
    }
    playerScores[name]=score;
    ranking.insert({score,name});
    std::cout<<"score updated"<<"\n";
}

void Leaderboard::removePlayer(std::string name){
    auto it = playerScores.find(name);
    if (it == playerScores.end()) {
        std::cout << "Player not found!" << std::endl;
        return;
    }
    int oldscore=it->second;
    for (auto i = ranking.begin(); i!= ranking.end();++i){
        if (i->second == name &&  i->first == oldscore){
            ranking.erase(i);
            break;
        }

    }
    playerScores.erase(name);
    std::cout<<"Player removed! ^_^";
}

void Leaderboard::displayLeaderboard(){
    if(ranking.empty()){
        std::cout<<"Leaderboard is empty!";
        return;
    }
    int rank=1;
    std::cout<<"************Leaderboard************"<<"\n";
    std::cout<<"Rank  Player  Score"<<"\n";
    for(auto player:ranking){
        std::cout<<rank<<"."<<player.second<<" "<<player.first<<"\n";
        rank++;
    }
    std::cout<<"************************************"<<"\n";
}