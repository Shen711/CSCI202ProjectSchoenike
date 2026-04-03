#include <iostream>

//My encounters or levels are layed out like nodes a linked list. Each node represents a 
//"level" that is only beaten when the enemy is dead


struct Encounter
{
    Enemy enemy;
    Encounter *link;
    ~Encounter()
    {
        delete enemy;
    }
    
};