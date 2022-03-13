#include "../headfiles/Item.h"

Item::Item(std::string name , int price) : name(name) , price(price) {}

//return the name of the item.
std::string Item::getName() {
    return name;
}

//return the price of the item
int Item::getPrice() {
    return price;
}


//change the price of the item.
void Item::setPrice(int new_price){
    price=new_price;
}


//set the name of the item to new name.
void Item::setName(std::string newname){
    name=newname;
}