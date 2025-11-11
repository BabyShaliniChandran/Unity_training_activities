#include<iostream>
#include<string>
#include<memory>
using namespace std;

class GameMap{
    public:
        GameMap(){}
        ~GameMap(){cout<<"deleted the game map";}

};


class Player{
    public:
        shared_ptr<GameMap>map;
        string name;

        Player(string n,shared_ptr<GameMap>m): name(n),map(m){}
        ~Player(){cout<<"deleted the player";}
};

int main(){
    shared_ptr<GameMap>mainMap=make_shared<GameMap>();

    Player p1("Shalini",mainMap);
    Player p2("Priya",mainMap);
    Player p3("Baby",mainMap);
    cout<<mainMap.use_count()<<endl;

    return 0;
}