#include "Table.h"
#include "Human.h"
#include <iostream>

using namespace std;
Table::Table() : height(1.50), length(3.50), color("yellow"), weight(70), pc_on_table(1) {}

Table::Table(double height, double length) : Table() {
    SetHeight(height);
    SetLength(length);
}

Table::Table(double height, double length, const string& color) : Table() {
    SetHeight(height);
    SetLength(length);
    SetColor(color);
}

Table::Table(double height, double length, const string& color, double weight, int pc_on_table) : Table() {
    SetHeight(height);
    SetLength(length);
    SetColor(color);
    SetWeight(weight);
    SetPCOnTable(pc_on_table);
}

double Table::GetHeight() const {
    return height;
}

double Table::GetLength() const {
    return length;
}

string Table::GetColor() const {
    return color;
}

double Table::GetWeight() const {
    return weight;
}

int Table::GetPCOnTable() const {
    return pc_on_table;
}

void Table::SetHeight(double height) {
    this->height = height;
}

void Table::SetLength(double length) {
    this->length = length;
}

void Table::SetColor(const string& color) {
    this->color = color;
}

void Table::SetWeight(double weight) {
    this->weight = weight;
}

void Table::SetPCOnTable(int pc_on_table) {
    this->pc_on_table = pc_on_table;
}

void Table::PlayPC() {
    if (pc_on_table == 1) {
        cout << "Playing on the computer\n";
    }
    else {
        cout << "There's no computer on the table\n";
    }
}

void Table::Remove(Human& who) {
    cout << "Clearing away unnecessary things\n";
    who.Work();
}

void Table::Move() {
    cout << "Moving the table to the right\n";
}

void Table::Break() {
    cout << "Breaking the table\n";
}

void Table::Repair() {
    cout << "Repairing the broken table\n";
}
