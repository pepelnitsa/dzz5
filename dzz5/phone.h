#include <string>
#include "Human.h"

using namespace std;

class Phone {
private:
    int screen_diagonal;
    int weight;
    string color;
    int power_button;
    int volume_button;

public:
    Phone();
    Phone(int screen_diagonal, int weight, const string& color);
    Phone(int screen_diagonal, int weight);
    Phone(int screen_diagonal);
    Phone(const string& color);

    int GetScreenDiagonal() const;
    int GetWeight() const;
    string GetColor() const;
    int GetPowerButton() const;
    int GetVolumeButton() const;

    void SetScreenDiagonal(int screen_diagonal);
    void SetWeight(int weight);
    void SetColor(const string& color);
    void SetPowerButton(int power_button);
    void SetVolumeButton(int volume_button);

    void Call(Human& who);
    void SurfInternet();
    void TikTok();
    void Games();
    void Telegram();
};
