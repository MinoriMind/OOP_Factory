#include <iostream>

using namespace std;

enum Character
{
    GOOD,
    LAWFUL,
    CHAOTIC,
    EVIL,
    NEUTRAL
};

class MainCharacter
{
    string name;
    unsigned  int age;
    Character character;
    string backstory;
    unsigned int stats;
    unsigned int levelOfStupidity;
    bool beingInteresting;

public:
    MainCharacter(string _name, unsigned  int _age, Character _character, string _backstory,
                  unsigned int _stats, unsigned int _levelOfStupidity, bool _beingInteresting)
    {
        name = _name;
        age = _age;
        character = _character;
        backstory = _backstory;
        stats = _stats;
        levelOfStupidity = _levelOfStupidity;
        beingInteresting = _beingInteresting;
    };

    static MainCharacter *sad()
    {
        return new MainCharacter("SadBoi2000", 20, CHAOTIC,
                                "Sad Story",200, 20,
                                false);
    };

    static MainCharacter *sadButInteresting()
    {
        return new MainCharacter("Sad", 20, CHAOTIC,
                                 "Very Sad Story",200, 4,
                                 true);
    };

    static MainCharacter *interesting()
    {
        return new MainCharacter("00", 27, EVIL,
                                 "Interesting Story",300, 10,
                                 true);
    };

    static MainCharacter *stupid()
    {
        return new MainCharacter("NPC_1", 54, LAWFUL,
                                 "Skip his story",800, 100,
                                 false);
    };
};


int main()
{
    MainCharacter *imc = MainCharacter::interesting();
    MainCharacter *smc = MainCharacter::stupid();
    MainCharacter *sbimc = MainCharacter::sadButInteresting();
    MainCharacter *sadmc = MainCharacter::sad();
    return 0;
}
