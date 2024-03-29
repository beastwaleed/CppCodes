#include <iostream>
#include <string>

using namespace std;

void exploreGalaxy();
void exploreShip();
void encounterAlien();
void investigateAnomaly();

int main() {
    cout << "Welcome to the Space Adventure Game!\n";
    cout << "You wake up in your spaceship...\n";
    
    exploreGalaxy();
    
    cout << "Congratulations! You've completed your space adventure.\n";
    
    return 0;
}

void exploreGalaxy() {
    cout << "You are now exploring the galaxy...\n";
    cout << "You encounter a strange spaceship. Do you want to explore it? (yes/no)\n";
    string choice;
    cin >> choice;
    
    if(choice == "yes") {
        exploreShip();
    } else {
        cout << "You continue exploring the galaxy.\n";
    }
}

void exploreShip() {
    cout << "You enter the mysterious spaceship...\n";
    cout << "As you explore the ship, you encounter an alien!\n";
    encounterAlien();
}

void encounterAlien() {
    cout << "The alien seems friendly. Do you want to communicate? (yes/no)\n";
    string choice;
    cin >> choice;
    
    if(choice == "yes") {
        cout << "You communicate with the alien and learn about their culture.\n";
    } else {
        cout << "You decide to avoid the alien and continue exploring.\n";
    }
    
    investigateAnomaly();
}

void investigateAnomaly() {
    cout << "While exploring further, you come across a cosmic anomaly.\n";
    cout << "Do you want to investigate? (yes/no)\n";
    string choice;
    cin >> choice;
    
    if(choice == "yes") {
        cout << "You approach the anomaly and discover a new source of energy!\n";
    } else {
        cout << "You decide to steer clear of the anomaly and head back to your ship.\n";
    }
}