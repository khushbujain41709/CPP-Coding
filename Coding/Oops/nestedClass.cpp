#include<iostream>
using namespace std;
// Always use private access modifiers for attributes and use getter and setter.
class gun{
    public:
    int ammo;
    int scope;
    float damage;
    string ammoType;
};
class player{
    private:
    int health;   
    int score;     
    bool isAlive;  
    gun Gun;   // nested class
    class vest{    // nested class
        int level;
        int VestHp;
        public: 
        void setlevel(int level){
            this->level = level;
        }
        int getLevel(){
            return level;
        }
        int getHp(){
            return VestHp;
        }
        void setHp(int Hp){
            VestHp = Hp;
        }
    };
    vest new_vest;
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
    void setGun(gun Gun){
        this->Gun = Gun;
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
    gun getGun(){
        return Gun;
    }
    void setVest(int level){
        vest* new_vest = new vest;
        new_vest->setlevel(level);
        int health = 0;
        if(level == 1){
            health = 25;
        }
        else if(level == 2){
            health = 50;
        }
        else if(level == 3){
            health = 75;
        }
        else if(level == 4){
            health = 100;
        }
        else{
            cout<<"Error no such level!"<<endl;
        }
        new_vest->setHp(health); // vest Hp is based on the the health , whereas health is based on level.
        this->new_vest = *new_vest;  // setting class vest to this dynamic vest.
    }
    vest getVest(){
        cout<<"Vest level is : "<<new_vest.getLevel()<<endl;
        cout<<"Vest Hp is : "<<new_vest.getHp()<<endl;
        return new_vest;
    }
};
int main(){
    gun mp40;
    mp40.ammo = 160;
    mp40.damage = 30;
    mp40.ammoType = "smg";
    mp40.scope = 1;

    gun Ak47;
    Ak47.ammo = 150;
    Ak47.damage = 47;
    Ak47.ammoType = "AR";
    Ak47.scope = 4;

    player k;
    k.setHealth(100);
    k.setScore(30);
    k.setIsAlive(1);
    k.setGun(mp40);
    k.setVest(3);
    cout<<k.getAlive()<<endl;
    cout<<k.getHealth()<<endl;
    cout<<k.getScore()<<endl;
    k.getVest();
    cout<<"--------------------------------------------------------------"<<endl;
    player j;
    j.setHealth(100);
    j.setScore(20);
    j.setIsAlive(1);
    j.setGun(Ak47);
    j.setVest(2);
    cout<<j.getAlive()<<endl;
    cout<<j.getHealth()<<endl;
    cout<<j.getScore()<<endl;
    j.getVest();

    return 0;
}