#include "Human.h"
#include "Cat.h"
#include <iostream>

using namespace std;

Human::Human() : height(1.72), arms_count(2), legs_count(2), hair_color("pink"), eyes_color("blue"), is_alive(true), is_tired(false) {}

Human::Human(double height, int arms_count, int legs_count) : Human() {
    SetHeight(height);
    SetArmsCount(arms_count);
    SetLegsCount(legs_count);
}

Human::Human(const string& hair_color, const string& eyes_color) : Human() {
    SetHairColor(hair_color);
    SetEyesColor(eyes_color);
}

Human::Human(double height, int arms_count, int legs_count, const string& hair_color, const string& eyes_color) : Human() {
    SetHeight(height);
    SetArmsCount(arms_count);
    SetLegsCount(legs_count);
    SetHairColor(hair_color);
    SetEyesColor(eyes_color);
}

Human::Human(const Human& other) : height(other.height), arms_count(other.arms_count), legs_count(other.legs_count), hair_color(other.hair_color), eyes_color(other.eyes_color), is_alive(other.is_alive), is_tired(other.is_tired) {}
}

double Human::GetHeight() const {
    return height;
}

int Human::GetArmsCount() const {
    return arms_count;
}

int Human::GetLegsCount() const {
    return legs_count;
}

string Human::GetHairColor() const {
    return hair_color;
}

string Human::GetEyesColour() const {
    return eyes_colour;
}

bool Human::IsAlive() const {
    return is_alive;
}

bool Human::IsTired() const {
    return is_tired;
}

void Human::SetHeight(double height) {
    this->height = height;
}

void Human::SetArmsCount(int arms_count) {
    this->arms_count = arms_count;
}

void Human::SetLegsCount(int legs_count) {
    this->legs_count = legs_count;
}

void Human::SetHairColor(const string& hair_color) {
    this->hair_color = hair_color;
}

void Human::SetEyesColour(const string& eyes_colour) {
    this->eyes_colour = eyes_colour;
}

void Human::SetAlive(bool is_alive) {
    this->is_alive = is_alive;
}

void Human::SetTired(bool is_tired) {
    this->is_tired = is_tired;
}

void Human::Talk() {
    if (is_alive) {
        cout << "Hello\n\n";
    }
    else {
        cout << "The human is not alive.\n";
    }
}

void Human::Sleep() {
    if (is_alive) {
        if (!is_tired) {
            cout << "zzzz\n";
            is_tired = true;
        }
        else {
            cout << "The human does not want to sleep.\n";
        }
    }
    else {
        cout << "The human is not alive.\n";
    }
}

void Human::Work() {
    if (is_alive) {
        cout << "Working\n\n";
    }
    else {
        cout << "The human is not alive.\n";
    }
}

void Human::Cook() {
    if (is_alive) {
        cout << "Cooking an omelette\n";
    }
    else {
        cout << "The human is not alive.\n";
    }
}

void Human::Eat() {
    if (is_alive) {
        cout << "Eating an omelette\n";
    }
    else {
        cout << "The human is not alive.\n";
    }
}

void Human::Printing() {
    if (is_alive) {
        cout << "Pulling a sheet from the printer\n\n";
    }
    else {
        cout << "The human is not alive.\n";
    }
}

void Human::Pet(Cat& who) {
    if (is_alive && who.IsAlive()) {
        cout << "Petting the cat\n";
        who.MakeNoize();
    }
    else {
        cout << "The human or the cat is not alive.\n";
    }
}
