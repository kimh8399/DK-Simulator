#ifndef UNITS_H_INCLUDED
#define UNITS_H_INCLUDED

typedef unsigned int uint32;

struct price
{
    uint32 gas;
    uint32 mineral;
};

struct attack
{
    uint32 gAttack;
    uint32 aAttack;
};

struct difficulty
{
    uint32 diffPro;
    uint32 diffCom;
};

class unit_info
{
public:
    string name;
    uint32 supply;
    price cost;
    uint32 build_time;
    uint32 cargo;
    uint32 armor;
    uint32 health;
    string attribute;
    attack attack_info;
    uint32 cooldown, movement_speed, range;

    difficulty diffToPlay;

    void randomize();
};



#endif // UNITS_H_INCLUDED
