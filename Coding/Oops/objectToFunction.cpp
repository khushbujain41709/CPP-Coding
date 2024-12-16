#include<iostream>
using namespace std;
// Always use private access modifiers for attributes and use getter and setter.
class player{
    private:
    int health;    // Takes 4 bytes
    int score;     // Takes 4 bytes
    bool isAlive;  // Takes 1 bytes
    // Takes greater than 4+4+1 = 9 bytes to create an object.
    public:
    void setHealth(int health){
        // health = health;   // this is confusing so use scope resolution operator ::
        player::health = health;
    }
    void setScore(int score){
        this->score = score;  // Instead of scope resolution operator we can also use keyword this->
    }
    void setIsAlive(bool i){
        isAlive = i;
    }
    int getHealth(){
        return health;
    }
    int getScore(){
        return score;
    }
    bool getAlive(){
        return isAlive;
    }
};
// This function is to be made global that is outside the class.
int addScore(player a,player b){     // Passing object to a function
    return a.getScore() + b.getScore();
}

player getMaxScorePlayer(player a , player b){
    if(a.getScore() > b.getScore()){
        return a;
    }
    else{
        return b;
    }
}

// For making above class no memory is used but when we make object(which is an instance of class) memory or space is used.
int main(){
    player k;     // Object creation , statically(stored before execution or running of program)
    k.setHealth(100);
    k.setScore(30);
    k.setIsAlive(1);
    cout<<k.getAlive()<<endl;
    cout<<k.getHealth()<<endl;
    cout<<k.getScore()<<endl;

    player j;     // Object creation , statically(stored before execution or running of program)
    j.setHealth(100);
    j.setScore(20);
    j.setIsAlive(0);

    cout<<addScore(k,j)<<endl;

    player answer = getMaxScorePlayer(k,j);
    cout<<answer.getScore()<<endl;

    player csk;   // compile time or static memory alloaction.csk is an object.
    player* cs = new player;  // runtime or dynamic memory allocation.cs is a pointer to object.
    player csObject = *cs; // * takes value of an pointer.
    csObject.setHealth(100);
    csObject.setScore(80);
    csObject.setIsAlive(1);

    player* jk = new player;
    (*jk).setHealth(90);
    cout<<(*jk).getHealth()<<endl; // Biut this is also not a better way.

    player* khubu = new player;
    khubu->setHealth(95);
    cout<<khubu->getHealth()<<endl;
    return 0;
}