#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    double mileage;
    double price;

public:
    Vehicle() {
        mileage = 0.0;
        price = 0.0;
    }

    Vehicle(double _mileage, double _price) {
        mileage = _mileage;
        price = _price;
    }

    Vehicle(const Vehicle& other) {
        mileage = other.mileage;
        price = other.price;
    }

    void displayInfo() const {
        cout << "Mileage: " << mileage << " kmpl" << endl;
        cout << "Price: $" << price << endl;
    }
};

class Car : public Vehicle {
protected:
    double ownershipCost;
    double warranty;
    int seating;
    string fuelType;

public:
    Car() : Vehicle() {
        ownershipCost = 0.0;
        warranty = 0.0;
        seating = 0;
        fuelType = "Unknown";
    }

    Car(double _mileage, double _price, double _ownershipCost, double _warranty, int _seating, const string& _fuelType)
        : Vehicle(_mileage, _price) {
        ownershipCost = _ownershipCost;
        warranty = _warranty;
        seating = _seating;
        fuelType = _fuelType;
    }

    Car(const Car& other) : Vehicle(other) {
        ownershipCost = other.ownershipCost;
        warranty = other.warranty;
        seating = other.seating;
        fuelType = other.fuelType;
    }

    void displayInfo() const {
        Vehicle::displayInfo();
        cout << "Ownership Cost: $" << ownershipCost << endl;
        cout << "Warranty: " << warranty << " years" << endl;
        cout << "Seating Capacity: " << seating << " seats" << endl;
        cout << "Fuel Type: " << fuelType << endl;
    }
};

class Bike : public Vehicle {
protected:
    int noOfCylinders;
    int gears;
    string coolingType;
    string wheelType;
    int fuelTankSize;

public:
    Bike() : Vehicle() {
        noOfCylinders = 0;
        gears = 0;
        coolingType = "Unknown";
        wheelType = "Unknown";
        fuelTankSize = 0;
    }

    Bike(double _mileage, double _price, int _noOfCylinders, int _gears, const string& _coolingType, const string& _wheelType, int _fuelTankSize)
        : Vehicle(_mileage, _price) {
        noOfCylinders = _noOfCylinders;
        gears = _gears;
        coolingType = _coolingType;
        wheelType = _wheelType;
        fuelTankSize = _fuelTankSize;
    }

    Bike(const Bike& other) : Vehicle(other) {
        noOfCylinders = other.noOfCylinders;
        gears = other.gears;
        coolingType = other.coolingType;
        wheelType = other.wheelType;
        fuelTankSize = other.fuelTankSize;
    }

    void displayInfo() const {
        Vehicle::displayInfo();
        cout << "Number of Cylinders: " << noOfCylinders << endl;
        cout << "Number of Gears: " << gears << endl;
        cout << "Cooling Type: " << coolingType << endl;
        cout << "Wheel Type: " << wheelType << endl;
        cout << "Fuel Tank Size: " << fuelTankSize << " inches" << endl;
    }
};

int main() {
    Car myCar(15.5, 50000, 4000, 5, 4, "Petrol");
    Bike myBike(40, 30000, 1, 4, "Air", "Alloys", 15);

    int choice;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Display Car Information" << endl;
        cout << "2. Display Bike Information" << endl;
        cout << "3. Copy Car Information" << endl;
        cout << "4. Copy Bike Information" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\nDisplaying Car Information:" << endl;
                myCar.displayInfo();
                break;
            }
            case 2: {
                cout << "\nDisplaying Bike Information:" << endl;
                myBike.displayInfo();
                break;
            }
            case 3: {
                Car copiedCar(myCar);
                cout << "\nCopied Car Information:" << endl;
                copiedCar.displayInfo();
                break;
            }
            case 4: {
                Bike copiedBike(myBike);
                cout << "\nCopied Bike Information:" << endl;
                copiedBike.displayInfo();
                break;
            }
            case 5: {
                cout << "Exiting program..." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please enter a valid option." << endl;
                break;
            }
        }
    } while (choice != 5);

    return 0;
}
