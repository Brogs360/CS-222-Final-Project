#pragma once

class Card{
private:
    int suit;
    int card_num;
public:
    Card(int suit,int card_num);
    int get_suit();
    int get_num();
    void print();
};




