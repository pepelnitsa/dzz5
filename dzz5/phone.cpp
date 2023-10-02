#include "Phone.h"
#include "Human.h"
#include <iostream>

using namespace std;

Phone::Phone() : screen_diagonal(0), weight(0), color(""), power_button(0), volume_button(0) {}

Phone::Phone(int screen_diagonal, int weight, const string& color) : Phone() {
    SetScreenDiagonal(screen_diagonal);
    SetWeight(weight);
    SetColor(color);
}

Phone::Phone(int screen_diagonal, int weight) : Phone() {
    SetScreenDiagonal(screen_diagonal);
    SetWeight(weight);
}

Phone::Phone(int screen_diagonal) : Phone() {
    SetScreenDiagonal(screen_diagonal);
}

Phone::Phone(const string& color) : Phone() {
    SetColor(color);
}

int Phone::GetScreenDiagonal() const {
    return screen_diagonal;
}

int Phone::GetWeight() const {
    return weight;
}

string Phone::GetColor() const {
    return color;
}

int Phone::GetPowerButton() const {
    return power_button;
}

int Phone::GetVolumeButton() const {
    return volume_button;
}

void Phone::SetScreenDiagonal(int screen_diagonal) {
    this->screen_diagonal = screen_diagonal;
}

void Phone::SetWeight(int weight) {
    this->weight = weight;
}

void Phone::SetColor(const string& color) {
    this->color = color;
}

void Phone::SetPowerButton(int power_button) {
    this->power_button = power_button;
}

void Phone::SetVolumeButton(int volume_button) {
    this->volume_button = volume_button;
}

void Phone::Call(Human& who) {
    cout << "Calling someone\n";
    who.Talk();
}

void Phone::SurfInternet() {
    cout << "Browsing the Internet - nothing interesting\n";
}

void Phone::TikTok() {
    cout << "Scrolling through TikTok - killing time\n";
}

void Phone::Games() {
    cout << "Playing games - also killing time\n";
}

void Phone::Telegram() {
    cout << "Communicating on Telegram\n";
}
