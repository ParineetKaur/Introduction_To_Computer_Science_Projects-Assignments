// Question: How can you create and initialize a data structure for an item (in this case, a book) and print its details?

#include <iostream>
#include <string>
using namespace std;


struct Item {
  string nameOfItem;
  string author;
  double price;
  string chapter[20];
  int month;
  int day;
  int year;
};

void initializeItem(Item& it);
void printItem(Item it);

int main(){
  Item book1;
  initializeItem(book1);
  printItem(book1);
  return 0;
}

void initializeItem(Item& it) {
  cout<<"Enter the name of the item: "<<endl;
  getline(cin, it.nameOfItem);
  cout<<"Enter the name of the author: "<<endl;
  getline(cin, it.author);
  cout<<"Enter the price: "<<endl;
  cin >> it.price;
  for(int i = 0; i < 20; i++){
    cout << "Enter the name of the chapter: "<<endl;
    cin >> it.chapter[i];
  }
  cout<<"Please enter month of release date:"<<endl;
  cin>> it.month;
  cout<<"Please enter day of release date:"<<endl;
  cin>> it.day;
  cout<<"Please enter year of release date:"<<endl;
  cin>> it.year;
}


void printItem(Item it) {
  cout<<it.nameOfItem<<endl;
  cout<<it.author<<endl;
  cout<<it.price<<endl;
  for(int i = 0; i<20; i++){
     cout << it.chapter[i]<<endl;
  }
  cout<<it.month<<"/"<<it.day<<"/"<<it.year<<endl;
}
