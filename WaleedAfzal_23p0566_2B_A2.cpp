#include<iostream>
#include <string>
using namespace std;

class Vehicle{ //Base Class (Vehicle)
    protected:
        double mileage;
        double price;

    public:
    Vehicle(){ //Default constructor for Vehicle class
        mileage=0.0;
        price=0.0;
    }
     
    Vehicle(Vehicle &other){  //Copy constructor for Vehicle class (can be used if making more than 1 object of vehicle)
        mileage = other.mileage; //Copying mileage from another object
        price = other.price; //Copying Price from another object
    }
    
};

class Car: public Vehicle{ //Derived Class (Car) of Base Class (Vehicle)
    protected:
    double ownershipCost;
    int warranty;
    int seating;
    string fuelType;
    
    public:
    
    Car() : Vehicle(){ //Dafualt Constructor
        ownershipCost = 0.0;
        warranty = 0;
        seating = 0;
        fuelType = "Default";
    }
    
    Car(Car &other):Vehicle(other){ //Copy constructor for Car class (can be used if making more than 1 object of cars)
        ownershipCost = other.ownershipCost;
        warranty = other.warranty;
        seating = other.seating;
        fuelType = other.fuelType;
    }
};

class Bike: public Vehicle{  //Another Derived Class (Bike) of Base Class (Vehicle)
    protected:
    int noOfCylinders;
    int gears;
    string coolingType;
    string wheelType;
    int fuelTankSize;

    public:
    Bike():Vehicle(){ //Default Constructor
        noOfCylinders = 0;
        gears = 0;
        coolingType = "Default";
        wheelType = "Default";
        fuelTankSize = 0;
    }

    // Copy constructor for class bike (can be used if making more than 1 object of bike)
    Bike(Bike &other) : Vehicle(other) {
        noOfCylinders = other.noOfCylinders;
        gears = other.gears;
        coolingType = other.coolingType;
        wheelType = other.wheelType;
        fuelTankSize = other.fuelTankSize;
    }
    
};

class Audi: public Car{ //Derived class from derived class of Vehicle (Vehicle-->Car-->Audi)
    protected:
    string modelType;
    
    public:
    Audi():Car(){ //Default Constructor
        modelType= "Default";
    }

    // Copy constructor for class Audi (can be used if making more than 1 object of audi)
    Audi(Audi &other) :Car(other) {
        modelType =other.modelType;
    }

   void deleteData(){ //Function for Deleting the Data of Audi
    cout<<"Deleting Audi\n.......\nAudi Deleted\n\n";
    setMileage(0.0);
    setPrice(0.0);
    setOwnership(0.0);
    setWarranty(0);
    setSeating(0);
    setFueltype("Default");

   }
    //----setters for setting the values in data methods
    void setModelType(string model){
        modelType=model;
    }

    void setMileage(double mileAge){
        mileage=mileAge;
    }

    void setPrice(double userPrice){
        price=userPrice;
    }

    void setOwnership(double ownCost){
        ownershipCost=ownCost;
    }

    void setWarranty(int userWarranty){
        warranty=userWarranty;
    }

    void setSeating(int userSeating){
        seating=userSeating;
    }

    void setFueltype(string userFuel){
        fuelType=userFuel;
    }


    //----getters 

    string getmodelType(){
        return modelType;
        }

    double getMileage(){
        return mileage;
    }

    double getPrice(){
        return price;
    }

    double getOwnershipCost(){
        return ownershipCost;
    }

    int getWarranty(){
        return warranty;
    }

    int getSeating(){
        return seating;
    }

    string getfuelType(){
        return fuelType;
    }

    void displayDetails(){ //Function for Displaying Details of Audi
        cout<<"\n---Displaying Details of Audi---\n\n";
        cout<<"--MileAge: "<<getMileage()<<endl;
        cout<<"--Price: "<<getPrice()<<endl;
        cout<<"--OwnerShip Cost: "<<getOwnershipCost()<<endl;
        cout<<"--Warranty: "<<getWarranty()<<endl;
        cout<<"--Seating: "<<getSeating()<<endl;
        cout<<"--Fuel Type: "<<getfuelType()<<endl;
        cout<<"----------------------------------\n\n";
    }


};

class Ford: public Car{ //Derived Class of Derived class (Vehicle-->Car-->Ford)
    protected:
    string modelType;

    public:
    
    Ford():Car(){ //Default Constructor
        modelType="Default";
    }

    // Copy constructor for class FORD (can be used if making more than 1 object of FORD)
    Ford(Ford &other) :Car(other) {
        modelType =other.modelType;
    }
    
     void deleteData(){ //Delete Data Function
    cout<<"Deleting Ford\n.......\nFord Deleted\n\n";
    setMileage(0.0);
    setPrice(0.0);
    setOwnership(0.0);
    setWarranty(0);
    setSeating(0);
    setFueltype("Default");
   }
       //----setters
    void setModelType(string model){
        modelType=model;
    }

    void setMileage(double mileAge){
        mileage=mileAge;
    }

    void setPrice(double userPrice){
        price=userPrice;
    }

    void setOwnership(double ownCost){
        ownershipCost=ownCost;
    }

    void setWarranty(int userWarranty){
        warranty=userWarranty;
    }

    void setSeating(int userSeating){
        seating=userSeating;
    }

    void setFueltype(string userFuel){
        fuelType=userFuel;
    }


    //----getters

    string getmodelType(){
        return modelType;
        }

    double getMileage(){
        return mileage;
    }

    double getPrice(){
        return price;
    }

    double getOwnershipCost(){
        return ownershipCost;
    }

    int getWarranty(){
        return warranty;
    }

    int getSeating(){
        return seating;
    }

    string getfuelType(){
        return fuelType;
    }

    void displayDetails(){ //Display details function
        cout<<"\n---Displaying Details of Ford---\n\n";
        cout<<"--MileAge: "<<getMileage()<<endl;
        cout<<"--Price: "<<getPrice()<<endl;
        cout<<"--OwnerShip Cost: "<<getOwnershipCost()<<endl;
        cout<<"--Warranty: "<<getWarranty()<<endl;
        cout<<"--Seating: "<<getSeating()<<endl;
        cout<<"--Fuel Type: "<<getfuelType()<<endl;
        cout<<"----------------------------------\n\n";
    }


};

class Bajaj: public Bike{ //Derived Class of Derived Class (Vehicle-->Bike-->Bajaj) 
    protected:
    string makeType;

    public:
    
    Bajaj():Bike(){ //Default Constructor
        makeType="Default";
    }

    // Copy constructor for class Bajaj (can be used if making more than 1 object of Bajaj)
    Bajaj(Bajaj &other):Bike(other) {
        makeType =other.makeType;
    }

    void deleteData(){ //delete data function
    cout<<"Deleting Bajaj\n.......\nBajaj Deleted\n\n";
    setMileage(0.0);
    setbikePrice(0.0);
    setMaketype("Default");
    setCylinders(0);
    setGear(0);
    setCoolingtype("Default");
    setWheeltype("Default");
    setFueltankSize(0);
   }

    //setters;
    void setMileage(int bikeMileage){
        mileage=bikeMileage;
    }

    void setMaketype(string make){
        makeType=make;
    }

    void setbikePrice(double bikePrice){
        price=bikePrice;
    } 
    void setCylinders(int bikeCylinders){
        noOfCylinders=bikeCylinders;
    }
    void setGear(int bikeGears){
        gears=bikeGears;
    }
    void setCoolingtype(string cooling){
        coolingType=cooling;
    }
    void setWheeltype(string wheel){
        wheelType=wheel;
    }
    void setFueltankSize(int fuelTanks){
        fuelTankSize=fuelTanks;
    }

    //getters;

    double getMileage(){
        return mileage;
    }
    string getMaketype(){
        return makeType;
    }
    double getPrice(){
        return price;
    }
    int getCylinders(){
        return noOfCylinders;
    }
    int getGears(){
        return gears;
    }
    string getCooling(){
        return coolingType;
    }
    string getWheeltype(){
        return wheelType;
    }
    int getTanksize(){
        return fuelTankSize;
    }

    void displayDetails(){ //Display Details function
    cout<<"\n---Displaying Details of Bajaj---\n\n";
    cout<<"--Mileage: "<<getMileage()<<endl;
    cout<<"--Maketype: "<<getMaketype()<<endl;
    cout<<"--Price: "<<getPrice()<<endl;
    cout<<"--No of Cylinders: "<<getCylinders()<<endl;
    cout<<"--No of Gears: "<<getGears()<<endl;
    cout<<"--Cooling Type: "<<getCooling()<<endl;
    cout<<"--Wheel Type: "<<getWheeltype()<<endl;
    cout<<"--Tank Size: "<<getTanksize()<<endl;
    cout<<"---------------------------------------\n\n";
    }
};


class TVS: public Bike{//Derived class of Derived Class (Vehicle-->Bike-->TVS)
    protected:
    string makeType;

    public:
    
    TVS():Bike(){ //Default Constructor
        makeType="Default";
    }

    // Copy constructor for class TVS (can be used if making more than 1 object of TVS)
    TVS(TVS &other):Bike(other) {
        makeType=other.makeType;
    }

   void deleteData(){ //delete details of TVS
    cout<<"Deleting TVS\n.......\nTVS Deleted\n\n";
    setMileage(0.0);
    setbikePrice(0.0);
    setMaketype("Default");
    setCylinders(0);
    setGear(0);
    setCoolingtype("Default");
    setWheeltype("Default");
    setFueltankSize(0);
   }

    //setters;
    void setMileage(int bikeMileage){
        mileage=bikeMileage;
    }

    void setMaketype(string make){
        makeType=make;
    }

    void setbikePrice(double bikePrice){
        price=bikePrice;
    } 
    void setCylinders(int bikeCylinders){
        noOfCylinders=bikeCylinders;
    }
    void setGear(int bikeGears){
        gears=bikeGears;
    }
    void setCoolingtype(string cooling){
        coolingType=cooling;
    }
    void setWheeltype(string wheel){
        wheelType=wheel;
    }
    void setFueltankSize(int fuelTanks){
        fuelTankSize=fuelTanks;
    }

    //getters;

    double getMileage(){
        return mileage;
    }
    string getMaketype(){
        return makeType;
    }
    double getPrice(){
        return price;
    }
    int getCylinders(){
        return noOfCylinders;
    }
    int getGears(){
        return gears;
    }
    string getCooling(){
        return coolingType;
    }
    string getWheeltype(){
        return wheelType;
    }
    int getTanksize(){
        return fuelTankSize;
    }

    void displayDetails(){ //display details of TVS
    cout<<"\n---Displaying Details of TVS---\n\n";
    cout<<"--Mileage: "<<getMileage()<<endl;
    cout<<"--Maketype: "<<getMaketype()<<endl;
    cout<<"--Price: "<<getPrice()<<endl;
    cout<<"--No of Cylinders: "<<getCylinders()<<endl;
    cout<<"--No of Gears: "<<getGears()<<endl;
    cout<<"--Cooling Type: "<<getCooling()<<endl;
    cout<<"--Wheel Type: "<<getWheeltype()<<endl;
    cout<<"--Tank Size: "<<getTanksize()<<endl;
    cout<<"---------------------------------------\n\n";
    }

};

int main(){

int choice; //To store user menu choice
int vehicleChoice; //To store vehicle choice
Ford f1;    //Creating Object of Class Ford
Audi a1;    //Creating Object of Class Audi
Bajaj b1;   //Creating Object of Class Bajaj
TVS t1;     //Creating Object of Class TVS

double mileage; 
double price;
double ownerCost;
int warranty;
int seating;
string fuelType;
string modeltype;

int noOfCylinders;
int gears;
string coolingType;
string wheelType;
int fuelTankSize;
string makeType;


    do{ //Start of do-while loop for menu-driven program
        cout<<"\n\n~~~~~Welcome to Showroom~~~~~\n\n";
        cout<<"Press 1 For Adding Vehicle: \n";
        cout<<"Press 2 For Remove Vehicle: \n";
        cout<<"Press 3 For Finding Vehicle: \n";
        cout<<"Press 4 For Displaying Vehicles: \n";
        cout<<"Press 5 for Exiting: ";
        cin>>choice;

        switch(choice){ //switch statement based on user choice
            case 1: //Case for adding vehicle
            do{ //Start of do-while loop for adding vehicles
            cout<<"----Adding Vehicle Section----\n\n";
            cout<<"Press 1 for Adding Car:\n";
            cout<<"Press 2 for Adding Bike:\n";
            cout<<"Press 3 for Main Menu:\n";
            cin>>vehicleChoice;

            if(vehicleChoice==1){ // If user chooses to add car
                cout<<"\n---Adding Cars---\n\n";
                cout<<"--Enter Details for Audi Car--\n\n";
                cout<<"Enter Mileage: ";
                cin>>mileage;
                a1.setMileage(mileage); //pass user entered mileage to the setter
                cout<<"Enter Model Type: ";
                cin>>modeltype;
                a1.setModelType(modeltype); //pass user entered Model type to the setter
                cout<<"Enter Price: ";
                cin>>price;
                a1.setPrice(price); //pass user entered Price to the setter
                cout<<"Enter Ownership Cost: ";
                cin>>ownerCost;
                a1.setOwnership(ownerCost); //pass user entered OwnerShip Cost to the setter
                cout<<"Enter Warranty: ";
                cin>>warranty;
                a1.setWarranty(warranty); //pass user entered Warranty to the setter
                cout<<"Enter Seating: ";
                cin>>seating;
                a1.setSeating(seating); //pass user entered Seating to the setter
                cout<<"Enter Fuel Type: ";
                cin>>fuelType;
                a1.setFueltype(fuelType); //pass user entered Fuel Type to the setter

                cout<<"---------------------------------\n";
                cout<<"--Enter Details for Ford Car--\n\n"; //Getting Details for Ford
                cout<<"Enter Mileage: ";
                cin>>mileage;
                f1.setMileage(mileage); //pass user entered mileage to the setter
                cout<<"Enter Model Type: ";
                cin>>modeltype;
                f1.setModelType(modeltype); //pass user entered Model type to the setter
                cout<<"Enter Price: ";
                cin>>price;
                f1.setPrice(price); //pass user entered Price to the setter
                cout<<"Enter Ownership Cost: ";
                cin>>ownerCost;
                f1.setOwnership(ownerCost); //pass user entered Ownership to the setter
                cout<<"Enter Warranty: ";
                cin>>warranty;
                f1.setWarranty(warranty); //pass user entered Warranty to the setter
                cout<<"Enter Seating: ";
                cin>>seating;
                f1.setSeating(seating);//pass user entered Seating to the setter
                cout<<"Enter Fuel Type: ";
                cin>>fuelType;
                f1.setFueltype(fuelType);//pass user entered Fuel type to the setter
                cout<<"---------------------------------\n";

            }

            if(vehicleChoice==2){ // If user chooses to add a bike
                cout<<"\n----Adding Bikes----\n\n";
                cout<<"--Enter Details for Bajaj Bike--\n\n"; //Getting details of Bajaj from User
                cout<<"Enter Mileage: ";
                cin>>mileage;
                b1.setMileage(mileage); //pass user entered Mileage to the setter
                cout<<"Enter Make Type: ";
                cin>>makeType;
                b1.setMaketype(makeType); //pass user entered Maketype to the setter
                cout<<"Enter Price: ";
                cin>>price;
                b1.setbikePrice(price); //pass user entered Price to the setter
                cout<<"Enter No of Cylinder: ";
                cin>>noOfCylinders;
                b1.setCylinders(noOfCylinders); //pass user entered Cylinder to the setter
                cout<<"Enter Gears: ";
                cin>>gears;
                b1.setGear(gears); //pass user entered Gears to the setter
                cout<<"Enter Cooling Type: ";
                cin>>coolingType;
                b1.setCoolingtype(coolingType); //pass user entered Cooling Type to the setter
                cout<<"Enter Wheel Type: ";
                cin>>wheelType;
                b1.setWheeltype(wheelType); //pass user entered Wheel type to the setter
                cout<<"Enter Fuel Tank Size: ";
                cin>>fuelTankSize;
                b1.setFueltankSize(fuelTankSize); //pass user entered Fuel Tank Size to the setter

                cout<<"---------------------------------\n";
                cout<<"--Enter Details for TVS Bike--\n\n"; //Getting details of TVS bike from User

                cout<<"Enter Mileage: ";
                cin>>mileage;
                t1.setMileage(mileage); //pass user entered Mileage to the setter
                cout<<"Enter Make Type: ";
                cin>>makeType;
                t1.setMaketype(makeType); //pass user entered Make type to the setter
                cout<<"Enter Price: ";
                cin>>price;
                t1.setbikePrice(price); //pass user entered Price to the setter
                cout<<"Enter No of Cylinder: ";
                cin>>noOfCylinders;
                t1.setCylinders(noOfCylinders); //pass user entered Cylinders to the setter
                cout<<"Enter Gears: ";
                cin>>gears;
                t1.setGear(gears); //pass user entered Gears to the setter
                cout<<"Enter Cooling Type: ";
                cin>>coolingType;
                t1.setCoolingtype(coolingType); //pass user entered Cooling Type to the setter
                cout<<"Enter Wheel Type: ";
                cin>>wheelType;
                t1.setWheeltype(wheelType); //pass user entered Wheel Type to the setter
                cout<<"Enter Fuel Tank Size: ";
                cin>>fuelTankSize;
                t1.setFueltankSize(fuelTankSize); //pass user entered Tank Size to the setter
                cout<<"---------------------------------\n";

            }

        if(vehicleChoice==3){ //If user chooses to Exit
            break;
        }

        }
        while(vehicleChoice!=3); // Repeat the loop until user chooses to go back to the main menu
        break;

        case 2: //Removing the Vehicle
        
            do{     //Start of do-while loop for removing vehicles
                cout<<"----Removing Vehicle Section----\n\n";
                cout<<"---Choose Which Vehicle You Want to Remove---\n";
                cout<<"Press 1 for Removing Cars\n";  
                cout<<"Press 2 for Removing Bikes\n";
                cout<<"Press 3 for Main Menu\n";
                cin>>vehicleChoice;
 
                if(vehicleChoice==1){ //If user chooses to remove cars
                    int selectCar;
                    cout<<"You have Choosen to Remove Cars\n";
                    cout<<"--Select the Car--\n";
                    cout<<"1. Audi | 2. Ford :";
                    cin>>selectCar;
                    if(selectCar==1){ //If user chooses to delete Audi
                        a1.deleteData(); //Delete Function Called for Audi
                    }
                    if(selectCar==2){   //If user chooses to delete Ford
                        f1.deleteData();  //Delete Function Called for Ford
                    }
                }

                if(vehicleChoice==2){ //If user chooses to remove bikes
                    int selectBike;
                    cout<<"Your have Choosen to Remove Bikes\n";
                    cout<<"--Select the Bike--\n";
                    cout<<"1. Bajaj | 2. TVS : ";
                    cin>>selectBike;
                    if(selectBike==1){ //If user chooses to delete Bajaj
                        b1.deleteData(); //Delete Function Called for Bajaj
                    }
                    if(selectBike==2){  //If user chooses to delete TVS
                        t1.deleteData(); //Delete Function Called for TVS
                    }
                }
                if(vehicleChoice==3){ //If user chooses to Exit
                    break;
                }
            }    
        while(vehicleChoice!=3); //Repeat the loop until user chooses to go back to the main menu
            break;

        case 3: //Finding a Vehicle
        int findChoice;
        int carChoice;
        cout<<"\n\n---Finding Vehicle Section---\n\n";
        cout<<"1.Cars \n2. Bike\n3. Main Menu\n";
        cin>>findChoice;
        if(findChoice==1){ //If user chooses to Find Cars
            cout<<"1. Audi \n2. Ford\n3.Back\nEnter Choice: ";
            cin>>carChoice;
            if(carChoice==1){ //If user chooses to Find Audi
            int findFeature;
            cout<<"---Select the Features to Find in AUDI---\n\n";
            cout<<"1. Mileage\n2. Model Type\n3. Price\n4. Ownership Cost\n5. Warranty\n6. Seating\n7. Fuel Type\n";
            cin>>findFeature;
            if(findFeature==1){
            cout<<"Mileage: "<<a1.getMileage()<<endl;
            }
            else if(findFeature==2){
            cout<<"Model Type: "<<a1.getmodelType()<<endl;
            }
            else if(findFeature==3){
            cout<<"Price: "<<a1.getPrice()<<endl;
            }
            else if(findFeature==4){
            cout<<"Ownership Cost: "<<a1.getOwnershipCost()<<endl;
            }
            else if(findFeature==5){
            cout<<"Warranty: "<<a1.getWarranty()<<endl;
            }
            else if(findFeature==6){
            cout<<"Seating: "<<a1.getSeating()<<endl;
            }
            else if(findFeature==7){
            cout<<"Fuel Type: "<<a1.getfuelType()<<endl;
            }
            
        }

     if(carChoice==2){ //If user chooses to find Ford
            int findFeature;
            cout<<"---Select the Features to Find in Ford---\n\n";
            cout<<"1. Mileage\n2. Model Type\n3. Price\n4. Ownership Cost\n5. Warranty\n6. Seating\n7. Fuel Type\n";
            cin>>findFeature;
            if(findFeature==1){
            cout<<"Mileage: "<<f1.getMileage()<<endl;
            }
            else if(findFeature==2){
            cout<<"Model Type: "<<f1.getmodelType()<<endl;
            }
            else if(findFeature==3){
            cout<<"Price: "<<f1.getPrice()<<endl;
            }
            else if(findFeature==4){
            cout<<"Ownership Cost: "<<f1.getOwnershipCost()<<endl;
            }
            else if(findFeature==5){
            cout<<"Warranty: "<<f1.getWarranty()<<endl;
            }
            else if(findFeature==6){
            cout<<"Seating: "<<f1.getSeating()<<endl;
            }
            else if(findFeature==7){
            cout<<"Fuel Type: "<<f1.getfuelType()<<endl;
            }
          
          }
         if (carChoice==3){}
    }   
    
        if(findChoice==2){ //If user chooses to Find Bikes
            int bikeChoice;
            cout<<"1. Bajaj \n2. TVS\n3. Back\nEnter Choice: ";
            cin>>bikeChoice;
            if(bikeChoice==1){ //If user chooses to Find Bajaj
            int bikeFeature;
            cout<<"---Select the Features to Find in Bajaj---\n\n";
            cout<<"1. Mileage \n2. Maketype \n3. Price \n4. No of Cylinders\n 5. Gears \n6. Cooling Type \n7. Wheel Type \n8. Fuel Tank Size\n";
            cin>>bikeFeature;
            if(bikeFeature==1){
                cout<<"Mileage: "<<b1.getMileage()<<endl;
                }
            else if(bikeFeature==2){
                cout<<"Make Type: "<<b1.getMaketype()<<endl;
            }
            else if(bikeFeature==3){
                cout<<"Price: "<<b1.getPrice()<<endl;
            }
            else if(bikeFeature==4){
                cout<<"No of Cylinders: "<<b1.getCylinders()<<endl;
            }
            else if(bikeFeature==5){   
                cout<<"Gears: "<<b1.getGears()<<endl;
            }
            else if(bikeFeature==6){   
                cout<<"Cooling Type: "<<b1.getCooling()<<endl;
            }
            else if(bikeFeature==7){
               cout<<"Wheel Type: "<<b1.getWheeltype()<<endl;
            }
            else if(bikeFeature==8){
                cout<<"Fuel Tank Size: "<<b1.getTanksize()<<endl;
            }
          
                }

        if(bikeChoice==2){ //If user chooses to Find TVS
           
            int bikeFeature;
            cout<<"---Select the Features to Find in TVS---\n\n";
            cout<<"1. Mileage \n2. Maketype \n3. Price \n4. No of Cylinders\n 5. Gears \n6. Cooling Type \n7. Wheel Type \n8. Fuel Tank Size\n";
            cin>>bikeFeature;
            if(bikeFeature==1){
                cout<<"Mileage: "<<t1.getMileage()<<endl;
                }
            else if(bikeFeature==2){
                cout<<"Make Type: "<<t1.getMaketype()<<endl;
            }
            else if(bikeFeature==3){
                cout<<"Price: "<<t1.getPrice()<<endl;
            }
            else if(bikeFeature==4){
                cout<<"No of Cylinders: "<<t1.getCylinders()<<endl;
            }
            else if(bikeFeature==5){   
                cout<<"Gears: "<<t1.getGears()<<endl;
            }
            else if(bikeFeature==6){   
                cout<<"Cooling Type: "<<t1.getCooling()<<endl;
            }
            else if(bikeFeature==7){
               cout<<"Wheel Type: "<<t1.getWheeltype()<<endl;
            }
            else if(bikeFeature==8){
                cout<<"Fuel Tank Size: "<<t1.getTanksize()<<endl;
            }
          
            }
        if(bikeChoice==3){} //Exit the bikeChoice
        }
        if(findChoice==3){ //Break the Case
            break;
        }
        // else {
        //     cout<<"Invalid Input!!\n\n";
        // }
        break;

        case 4: //Case for Displaying all Vehicle 
        cout<<"----------Displaying All Vehicles----------\n\n ";
        cout<<"----------Displaying Cars----------\n\n ";
        a1.displayDetails();    //Displaying Audi Details 
        f1.displayDetails();    //Displaying Ford Details 
        cout<<"----------Displaying Bikes----------\n\n ";
        b1.displayDetails();    //Displaying Bajaj Details 
        t1.displayDetails();    //Displaying TVS Details 

        break;

        case 5: //Case for Exititng the Program
        cout<<"----Thankyou For Using our Showroom----\n----Exiting the Program\n\n";
        }
    }
while(choice!=5); // Repeat the loop until user chooses to exit

 return 0;   
}    