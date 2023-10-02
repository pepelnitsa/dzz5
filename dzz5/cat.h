#include <iostream>
#include <string>

using namespace std;

class Cat {
private:
    double tail_length;
    int ears_count;
    string fur_color;
    string nick;
    string eyes_color;
    bool is_hungry;
    bool is_alive;

public:
    Cat();
    Cat(double tail_length, int ears_count, const string& fur_color, const string& nick, const string& eyes_color);
    Cat(double tail_length, int ears_count, const string& fur_color);
    Cat(const string& nick);
    Cat(const Cat& other);


    double GetTailLength() const;
    int GetEarsCount() const;
    string GetFurColor() const;
    string GetNick() const;
    string GetEyesColor() const;
    bool IsAlive() const;
    bool IsHungry() const;
    void SetTailLength(double tail_length);
    void SetEarsCount(int ears_count);
    void SetFurColor(const string& fur_color);
    void SetNick(const string& nick);
    void SetEyesColor(const string& eyes_color);
    void SetAlive(bool is_alive);
    void SetHungry(bool is_hungry);
    void MakeNoize();
    void Walk();
    void Eat(const string& meal);
    void Jump();
    bool operator==(const Cat& other) const;
};
