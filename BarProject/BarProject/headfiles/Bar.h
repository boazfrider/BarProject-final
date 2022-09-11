#ifndef _BAR_H
#define _BAR_H

#include<iostream>
#include<fstream>
#include<vector>
#include<map>
#include "Table.h"
#include "Item.h"
#include "Exceptions.h"

class Bar{
    private:
        int total_income=0;
        int total_open_income;
        int total_seated_table;
        std::vector<Table*> tables;
        std::map<int , Item> menu;

    public:
    Bar(); 
    Bar(int num_of_tables_to_open);
    ~Bar();

    //Getters and Setters 
    int getTotalIncome();
    int getOpenIncome();
    int getTotalSeatedTables();
    void addSeatedTable();
    Table* GetTable(int table_number);
    std::map<int , Item> setMenu();
    std::map<int , Item> getMenu();


    // function - only function for inside use.
    void checkValidTableNum(int num_of_table);
    void checkTableIsOpen(int num_of_table);
    void addTototalIncome(int amount_to_add);
    void addOpenIncome(int amount_to_add); 
    
    //System Functions.
    void welcomePage();

    void openNewTable(int num_of_table);

    void addItemToTable(int num_of_table , int item_index);

    void removeElementFromTable(int num_of_table, int item_index);

    void closeBill(int table_number , int amount);

    std::string showInfoOfTable(int table_number);

    std::string daySummery();

    void closeTable(int table_number);
    
    void closeDay();    
}; 
 
#endif