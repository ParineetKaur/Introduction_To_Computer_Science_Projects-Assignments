// Question: How can you create a shopping cart system where users can select items, view item details, and calculate the total cost of the selected items?

#include <iostream>
#include <string>
using namespace std;

int totalCost = 0;
struct Item {
  string nameOfItem;
  string author;
  double price;
  string content;
  int month;
  int day;
  int year;
};

void func1(Item& a){
  a.nameOfItem = "Go Tell the Bees That I Am Gone";
  a.author = "Diana Gabaldon";
  a.price = 28.49;
  a.content = "SECTION I: A Swarm of Bees in the Carcass of a Lion, CHAPTER 1: The MacKenzies are Here!, CHAPTER 2: A Blue Wine Day, CHAPTER 3: Meditations on a Hyoid, CHAPTER 4: Home is the Hunter, Home from the Hill, CHAPTER 5: Dead or Alive, CHAPTER 6: Visitations, CHAPTER 7: Animal Nursery Tales";
}

void func2(Item& a){
  a.nameOfItem = "The Tale of Two Cities";
  a.author = "Charles Dickens";
  a.price = 6.20;
  a.content = "Book the First- Recalled to Life, Book the Second- Then Golden Thread, Book the Third- The Track of a Storm";
}

void func3(Item& a){
  a.nameOfItem = "Dear Santa: A Novel";
  a.author = "Debie Macomber";
  a.price = 14.70;
  a.content = "None provided";
}

double fillCart(Item a[], int size){
  string entry;
  for (int i = 0; i < size; i++) {
    cout << "Item: " << a[i].nameOfItem << ", " << "by " << a[i].author << "for " << a[i].price << endl;
    cout << "Would you like to purchase, see more details, or pass? Type a for purchase, b for see more details, and c for pass: "<<endl;
    getline(cin, entry);

    if (entry == "a") {
      totalCost += a[i].price;
    }

    if (entry == "b") {
      if (i == 0){
        cout << a[0].content;
      }
      if (i == 1){
        cout << a[1].content;
      }
      if (i == 2){
        cout << a[2].content;
      }
    }

    if (entry == "c") {
      cout << "Switching to next item!";
    }
  }

  return totalCost;
}

int main(){
  Item a[3];
  int answer;
  func1(a[0]);
  func2(a[1]);
  func3(a[2]);
  answer = fillCart(a, 3);
  cout << "The total cost is "<<totalCost<<endl;
}
