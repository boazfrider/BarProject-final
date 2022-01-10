#include"Table.h"

Table::Table(int table_number):table_number(table_number){
    total_bill=0;
    open_bill=0;
    table_catch=false;
}
Table::~Table(){

}

int Table::getTabelNumber(){ 
    return table_number;
}
int Table::getTotalBill(){
    return total_bill;
}
int Table::getOpenBill()
{
    return open_bill;
}
bool Table::GetTableIsOpen(){
    return table_catch;

}
void Table::addToTotalBill(int amount_to_add){
    total_bill+=amount_to_add;
}
void Table::addToOpenBill(int amount_to_add){
    open_bill+=amount_to_add;
}
void Table::setTableCondition(bool cond){
    table_catch=cond;
}
void Table::SubOpenBill(int paid_amount){
    if(paid_amount > open_bill)
    {
        std::cout<<"amount is bigger then the open bill , enter new amount"<<std::endl;;
      throw  std::overflow_error("amount is bigger then open bill \n");
    }
    open_bill-=paid_amount;
}
void Table::AddItem(Item* item){

    items.push_back(item);
    addToOpenBill(item->getPrice());
    addToTotalBill(item->getPrice());
    
}

std::ostream& operator<<(std::ostream& os , const Table& table){
    
    time_t now=time(0);
    std::string date=ctime(&now);
    
  //  os<<"**************************************************"<<std::endl;
    os<< date <<std::endl;
    os << "Table number : "<<table.table_number <<"\r\n";
    os << "Total Bill :" <<table.total_bill <<"\r\n";
    os<< "Open Bill : "<<table.open_bill <<"\r\n";
    os<<"Items"<<"\r\n";
    for(int i=0 ; i < table.items.size() ; i++)
    {
        os<<table.items[i]->getName()<<"- "<<table.items[i]->getPrice()<< "\r\n";
    }
  //  os<<"**************************************************"<<std::endl;    
    return os;
}
void Table::RemoveItem(Item* item) {
    int index =-1;
    for (int i = 0; i < items.size(); i++)
    {
        if (item == items[i])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
        throw std::overflow_error("No such Item in the table,only the existing were removed");
    items.erase(items.begin() + index);
    addToOpenBill(-item->getPrice());
    addToTotalBill(-item->getPrice());
    
}
void Table::Clear(){
    total_bill=0;
    open_bill=0;
    table_catch=false;
    items.clear();
}
