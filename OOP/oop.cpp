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
// {  class BodySize

// public:
//     float weight;
//     vector<int> size; // int bodySize[3];
// };

// Ham thanh vien
class Woman
{
public:
    // static void what()
    // {
    //     cout << "Man is \n";
    //     cout << "There are " << num << " in program\n";
    // }
    // static int num;
    // BodySize bodysize;
    // Woman *nextWoman;
    Woman(string fn, int a, float w, float h)
    {
        cout << "Create a new man \n";
        fullname = fn;
        age = a;
        weight = w;
        height = h;
        // num++;
    }
    // Hàm hủy
    ~Woman()
    {
        cout << "Delete a new man\n";
    }
    void introduce()
    {
        cout << "Hi my name is " << fullname << '\n';
        // cout << "Now I am " << age << " years old\n";
    }
    void setAge(int a)
    {
        age = a;
    }
    int getAge()
    {
        return age;
    }
    float getWeight()
    {
        return weight;
    }
    float getHeight()
    {
        return height;
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
    string fullname;
    int age;
    float height;
};
// int Woman::num = 0; // khoi tao o global
class HealthChecker
{
public:
    void check(Woman *woman)
    {
        weight = woman->getWeight();
        height = woman->getHeight();
        bloodPressure = 130; // getDevice()
        heartBeat = 80;
    }
    string getResult()
    {
        float bmi = weight / (height * height);
        if (bmi >= 18.5 && bmi <= 24.9 
            && bloodPressure >= 120 && bloodPressure < 140 
            && heartBeat >= 60 && heartBeat < 100)
        {
            return "Normal";
        }
        return "Abnormal";
    }

private:
    float weight;
    float height;
    int bloodPressure;
    int heartBeat;
};
int main()
{

    // Woman Alice; cấp phát tĩnh
    Woman *bob = new Woman("Bob", 19, 60.0, 1.65);
    HealthChecker *checker = new HealthChecker;
    checker->check(bob);
    string result = checker->getResult();
    cout << result;
    // bob->introduce();
    // bob->setAge(36);
    // cout << bob->getAge();
    // Woman::what();
    // cout << '\n';
    // Woman *mark = new Woman("Mark", 20);
    // mark->introduce();
    // // cout << Woman::num << '\n';
    // delete bob;
    // delete mark;
    // cấp phát động
    //  bob->fullname = "Bob";
    //  bob->age = 19;
    //  bob->bodysize.weight = 60;
    // Message *msg = bob->introduce("English", false);
    // cout << msg->conten;
    // cout << "There is man name: " + bob->fullname << endl;
    return 0;
}