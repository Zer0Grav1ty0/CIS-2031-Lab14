#include <iostream>
#include <string>
#include <sstream> 
using std::string;
using std::cout;
using std::endl;


class Player {
    private:
        string name;
        int hitPoints;

    public:
        Player(string n, int hit){
            name = n;
            hitPoints = hit;
        }
        

        string getName(){
            return name;
        }

        int getHitPoints(){
            return hitPoints;
        }

        void damage(int points){
            if ( points > hitPoints )
                hitPoints = 0;
            else
                hitPoints = hitPoints - points;
        }
};

int main(){
    
    Player a = Player("Tom", 5);
    a.damage(3);
    cout << a.getName() << " has " << a.getHitPoints() << " hitpoints.";

}
