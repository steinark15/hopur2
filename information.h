#ifndef INFORMATION_H
#define INFORMATION_H
#include "scientist.h"
#include "service.h"


class Information
{
public:
    Information();
    void displayOpening(); // This prints out the opening display
    void instructions();  // This prints out the instuctions
    void choices();
    void choiceChange();
    void choiceSort();
    void addDeleCha();
    void choiceSearch();
    void order();
    void search();
    void addScientist();
    void displayScientist(int num);
};

#endif // INFORMATION_H
