#include <iostream>
#include <string>
#include <vector>
using namespace std;

// class Message
// {
// public:
//     string conten;
//     int sender;
// };

// struct BodySize
// { // class BodySize

// public:
//     float weight;
//     vector<int> size; // int bodySize[3];
// };

// Ham thanh vien
class Woman
{

public:
    static void what()
    {
        cout << "Man is \n";
        cout << "There are " << num << " in program\n";
    }
    static int num;
    string fullname;
    // BodySize bodysize;
    // Woman *nextWoman;
    int age;
    Woman(string fn, int a)
    {
        cout << "Create a new man \n";
        fullname = fn;
        age = a;
        num++;
    }
    ~Woman()
    {
        cout << "Delete a new man\n";
    }
    void introduce()
    {
        cout << "Hi my name is " << fullname << '\n';
        cout << "Now I am " << age << " years old\n";
    }
    // // void *introduce(string language, bool isFull = true)
    // {
    //     // age = 34;
    //     // cout << "I am " << age << " years old" << endl;
    //     Message *msg = new Message;
    //     if (language == "VietNam")
    //     {
    //         msg->conten = "Xin Chao";
    //         if (isFull)
    //         {
    //             msg->conten += "Hi";
    //         }
    //     }
    //     else
    //     {

    //         msg->conten = "Hello";
    //         if (isFull)
    //         {
    //             msg->conten += "Hi";
    //         }
    //     }
    //     return msg;
    // }

private:
    float weight;
};
int Woman::num = 0; // khoi tao o global
int main()
{

    // Woman Alice; cấp phát tĩnh
    Woman *bob = new Woman("Bob", 19);
    bob->introduce();
    Woman::what();

    cout << '\n';

    Woman *mark = new Woman("Mark", 20);
    mark->introduce();
    cout << Woman::num << '\n';
    delete bob;
    delete mark;
    // cấp phát động
    //  bob->fullname = "Bob";
    //  bob->age = 19;
    //  bob->bodysize.weight = 60;
    // Message *msg = bob->introduce("English", false);
    // cout << msg->conten;
    // cout << "There is man name: " + bob->fullname << endl;
    return 0;
}