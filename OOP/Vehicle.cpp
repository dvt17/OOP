#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        // modelName = name;
        cout << "Created a vehicle with name " << modelName << endl;
    }

    ~Vehicle(){
        cout << "Deleted a vehicle " << endl;
    }

    string getModelName() {
        return modelName;
    }

    void setModelName(string name) {
        modelName = name;
    }

    int getVersion() {
        return version;
    }
    
    void setVersion(int v) {
        version = v;
    }

protected:
    void run() {
        cout << "A vehicle is running....!" << endl;
    }
private:
    string modelName;
    int version;
};

class Taxi : public Vehicle {
public:
    // Taxi(string name) : Vehicle(name) {
    //     cout << "Created a taxi.\n";
    // }
    ~Taxi() {
        cout << "Deleted a vehicle " << endl;
    }
    void start() {
        cout << "Started.Ready to run\n";
        run();
    }

    // void run() {
    //     Vehicle::run();
    //     cout << "It's a taxi";
    // }

    // void run(int km) {
    //     kmCounter = km;
    // }

    // int calculateFee() {
    //     return kmCounter * 9000;
    // }

private:
    int kmCounter;
};

class Truck  : public Vehicle
{
public:
private:
};

int main()
{
    Taxi* taxi = new Taxi();
    // Taxi* taxi2 = new Taxi("Vinfast");
    delete taxi;

    //taxi->start();
    //cout << "Free: " << taxi->calculateFee() << " VND\n";
    // taxi ->setModelName("Kia Morning");
    // cout << taxi ->getModelName();

    return 0;
}