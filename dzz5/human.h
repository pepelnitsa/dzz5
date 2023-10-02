#include <string>
#include <Cat.h>
using namespace std;

class Human {
private:
    double height;
    int arms_count;
    int legs_count;
    string hair_color;
    string eyes_color;
    bool is_alive;
    bool is_tired;

public:
    Human();
    Human(double height, int arms_count, int legs_count, const string& hair_color, const string& eyes_color);
    Human(double height, int arms_count, int legs_count);
    Human(const string& hair_color, const string& eyes_color);
    Human(const Human& other);

    double GetHeight() const;
    int GetArmsCount() const;
    int GetLegsCount() const;
    string GetHairColor() const;
    string GetEyesColour() const;
    bool IsAlive() const;
    bool IsTired() const;

    void SetHeight(double height);
    void SetArmsCount(int arms_count);
    void SetLegsCount(int legs_count);
    void SetHairColor(const string& hair_color);
    void SetEyesColour(const string& eyes_colour);
    void SetAlive(bool is_alive);
    void SetTired(bool is_tired);

    void Talk();
    void Sleep();
    void Work();
    void Cook();
    void Eat();
    void Printing();
    void Pet(Cat& who);
};