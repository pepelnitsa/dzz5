#include <string>
#include "Human.h"

using namespace std;

class Printer {
private:
    string form = "square";
    string color = "gray";
    int stickers_count = 14;
    int cables_count = 2;
    int papers_in_printer = 0;
    bool is_jammed = false;

public:
    Printer();
    Printer(const string& form, const string& color);
    Printer(const string& form);
    Printer(int stickers_count, int cables_count);
    Printer(int stickers_count);

    string GetForm() const;
    string GetColor() const;
    int GetStickersCount() const;
    int GetCablesCount() const;
    int GetPapersInPrinter() const;
    bool IsJammed() const;

    void SetForm(const string& form);
    void SetColor(const string& color);
    void SetStickersCount(int stickers_count);
    void SetCablesCount(int cables_count);
    void SetPapersInPrinter(int papers_in_printer);
    void SetIsJammed(bool is_jammed);

    void Print(Human& who);
    void Scan();
    void Jam();
    void Sit();
    void Error();
};
