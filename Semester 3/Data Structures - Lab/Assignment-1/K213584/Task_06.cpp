#include <iostream>
using namespace std;
class Animals
{
    public:
        string sound, name;
        Animals()
        {
            sound = "Meow";
            name = "Cat";
        }
        void set_animal(string sound="Meow", string name="Cat")
        {
            this->sound=sound;
            this->name=name;
        }
        void print()
        {
            cout << "Animal: " << name << endl;
            cout << "Animal Sound: " << sound << endl;
        }
        ~Animals()
        {

        }
};

int main(void)
{
    Animals *animal;
    animal = new Animals[5];
    string name, sound;
    for (int i = 0; i < 5; i++)
    {
        cout << "Sound: ";
        cin >> sound;
        cout << "Name: ";
        cin >> name;
        animal[i].set_animal(sound, name);
    }
    cout << "Before ordering " << endl << endl;
    for (int i = 0; i < 5; i++)
    {
        animal[i].print();
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - 1; j++)
        {
            if (animal[j].name[0] > animal[j + 1].name[0])
            {
                string temp1, temp2;
                temp1 = animal[j].name;
                temp2 = animal[j].sound;
                animal[j].name = animal[j + 1].name;
                animal[j].sound = animal[j + 1].sound;
                animal[j + 1].name = temp1;
                animal[j + 1].sound = temp2;
            }
        }
    }
    cout << "After ordering " << endl << endl;
    for (int i = 0; i < 5; i++)
    {
        animal[i].print();
    }

}