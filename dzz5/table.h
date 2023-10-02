#include <string>
#include "Human.h"

using namespace std;

class Table {
private:
    double height;
    double length;
    string color;
    double weight;
    int pc_on_table;

public:
    Table();
    Table(double height, double length);
    Table(double height, double length, const string& color);
    Table(double height, double length, const string& color, double weight, int pc_on_table);


    double GetHeight() const;
    double GetLength() const;
    string GetColor() const;
    double GetWeight() const;
    int GetPCOnTable() const;

    void SetHeight(double height);
    void SetLength(double length);
    void SetColor(const string& color);
    void SetWeight(double weight);
    void SetPCOnTable(int pc_on_table);

    void PlayPC();
    void Remove(Human& who);
    void Move();
    void Break();
    void Repair();
};
