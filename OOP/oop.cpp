#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct BodySize
{ // class BodySize

public:
    float weight;
    vector<int> size; // int bodySize[3];
};

// Ham thanh vien
class Woman
{

public:
    string fullname;
    BodySize bodysize;
    Woman *nextWoman;
    int age;
    void makeup()
    {
    }
    void introduce()
    {

        // age = 34;
        // cout << "I am " << age << " years old" << endl;
        cout << "Hello\n";
    }

private:
};

int main()
{

    // Woman Alice; cấp phát tĩnh
    Woman *bob = new Woman; // cấp phát động
     bob->fullname = "Bob";
     bob->age = 19;
     bob->bodysize.weight = 60;
     bob->introduce();
    cout << "There is man name: " + bob->fullname << endl;
    return 0;
}