#ifndef ENEMY_H
#define ENEMY_H

class Enemy
{
private:
    int health;
    int attackPower;
    std::string name;

public:
//Constructor
    Enemy (std::string name, int HP, int attack)
    : name(n), health(h), attackPower(attack) {}

    void getHealth()
    {
        return health;
    }

    void getName()
    {
        return name;
    }

    int attackOp()
    {
        
    }




}