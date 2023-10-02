#include <iostream>
#include "Human.h"
#include "Cat.h"
#include "Room.h"
#include "Phone.h"
#include "Table.h"
#include "Printer.h"

using namespace std;

int main() {
   
    Human h;
    Human h2(1.80, 2, 2, "brown", "green");

    Cat c;
    Cat c2(0.6, 2, "gray", "Whiskers", "blue", true, true);

    Room r;
    Room r2(40, 3, "blue", 5, 1);

    Phone p;
    Phone p2(6, 0.6, "black", 1, 2);

    Table t;
    Table t2(1.2, 2.0, "white", 10, 0);

    Printer pr;
    Printer pr2("rectangle", "white", 10, 2, 50, false);

    c2.Eat("fish");
    c2.Walk();
    c2.Jump();
    c2.Eat("mouse");

    h2.Sleep();
    h2.Work();
    h2.Cook();
    h2.Eat();
    h2.Pet(c2);

    r2.Rest();
    r2.TurnLightOff();
    r2.Rest();
    r2.Party();
    r2.PlayPC();
    r2.Jump(c2);

    p2.Call(h2);
    p2.SurfInternet();
    p2.TikTok();
    p2.Games();
    p2.Telegram();

    t2.PlayPC();
    t2.Remove(h2);
    t2.Move();
    t2.Break();
    t2.Repair();

    pr2.Print(h2);
    pr2.Scan();
    pr2.Jam();
    pr2.Sit();
    pr2.Error();

    return 0;
}
