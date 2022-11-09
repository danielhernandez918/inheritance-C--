#include <iostream>

using namespace std;
//superclass
class Chef {
    public:
        void makeChicken() {
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad() {
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish() {
            cout << "The chef makes bbq ribs" << endl;
        }
};
//subclass inherits from superclass
class italianChef : public Chef {
    public:
        void makePasta() {
            cout << "The chef makes pasta" << endl;
        }

        void makeSpecialDish() {
            cout << "The chef makes pizza" << endl;
        }
};

int main () 
{

    Chef chef1;
    chef1.makeChicken();
    chef1.makeSpecialDish();

    italianChef chef2;
    chef2.makeSalad();
    chef2.makePasta();
    chef2.makeSpecialDish();

    return 0;
}