#include "Printer.h"
#include "Human.h"
#include <iostream>

using namespace std;

Printer::Printer() : form("square"), color("gray"), stickers_count(14), cables_count(2), papers_in_printer(0), is_jammed(false) {}

Printer::Printer(const string& form, const string& color) : Printer() {
    SetForm(form);
    SetColor(color);
}

Printer::Printer(const string& form) : Printer() {
    SetForm(form);
}

Printer::Printer(int stickers_count, int cables_count) : Printer() {
    SetStickersCount(stickers_count);
    SetCablesCount(cables_count);
}

Printer::Printer(int stickers_count) : Printer() {
    SetStickersCount(stickers_count);
}

string Printer::GetForm() const {
    return form;
}

string Printer::GetColor() const {
    return color;
}

int Printer::GetStickersCount() const {
    return stickers_count;
}

int Printer::GetCablesCount() const {
    return cables_count;
}

int Printer::GetPapersInPrinter() const {
    return papers_in_printer;
}

bool Printer::IsJammed() const {
    return is_jammed;
}

void Printer::SetForm(const string& form) {
    this->form = form;
}

void Printer::SetColor(const string& color) {
    this->color = color;
}

void Printer::SetStickersCount(int stickers_count) {
    this->stickers_count = stickers_count;
}

void Printer::SetCablesCount(int cables_count) {
    this->cables_count = cables_count;
}

void Printer::SetPapersInPrinter(int papers_in_printer) {
    this->papers_in_printer = papers_in_printer;
}

void Printer::SetIsJammed(bool is_jammed) {
    this->is_jammed = is_jammed;
}

void Printer::Print(Human& who) {
    if (!is_jammed) {
        cout << "Printing...\n";
        who.Printing();
    }
    else {
        cout << "The printer jammed the paper\n";
    }
}

void Printer::Scan() {
    cout << "Scanning documents\n";
}

void Printer::Jam() {
    cout << "The printer jammed the paper\n";
    is_jammed = true;
}

void Printer::Sit() {
    cout << "The cat is sitting on the printer\n";
}

void Printer::Error() {
    cout << "The printer is broken\n";
}
