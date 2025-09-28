#include <iostream>
#include <string>
using namespace std;

// Ham thanh vien
class Woman
{
public:
    string fullname;

    float weight;

    void makeup()
    {
    }
    void introduce()
    {
        age = 34;
        cout << "Hello"<<'\n';
        cout << "I am " << age << " years old" << endl;
    }

private:
    int age;
};

int main()
{
    // Woman Alice; cấp phát tĩnh
    Woman *bob = new Woman; // cấp phát động
    bob->fullname = "Bob";
    bob->introduce();
    // cout << "There is man name: " << bob->fullname << endl;
    return 0;
}
