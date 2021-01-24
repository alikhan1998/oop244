#ifndef SHOPPINGLIST_H
#define SHOPPINGLIST_H

bool loadList();
void displayList();
void removeBoughtItems();
void removeItem(int index);
bool saveList();
void clearList();
void toggleBought();
void addItemToList();
void removeItemfromList();
bool listIsEmpty();
int listMenu();

const int MAX_NO_OF_RECS = 15;
ShoppingRec recs[MAX_NO_OF_RECS] = {};
int noOfRecs = 0;

#endif