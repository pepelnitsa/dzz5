#include <string>
#include "Cat.h"

using namespace std;

class Room {
private:
    double square;
    int bed;
    string wall_color;
    int windows;
    int table;
    bool is_dark;

public:
    Room();
    Room(double square, int bed);
    Room(double square, int bed, const string& wall_color);
    Room(double square, int bed, const string& wall_color, int windows, int table);

    double GetSquare() const;
    int GetBed() const;
    string GetWallColor() const;
    int GetWindows() const;
    int GetTable() const;
    bool IsDark() const;

    void SetSquare(double square);
    void SetBed(int bed);
    void SetWallColor(const string& wall_color);
    void SetWindows(int windows);
    void SetTable(int table);
    void SetIsDark(bool is_dark);

    void Rest();
    void Party();
    void PlayPC();
    void TurnLightOff();
    void Jump(Cat& who);
};

