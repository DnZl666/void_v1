#include <bits/stdc++.h>

using namespace std;

class Player_Inventory
{
private:
  int _InventorySize;
  int _InventorySize_maxi;
public:
  Player_Inventory() : _InventorySize(0), _InventorySize_maxi(100)
  {}
  int GetSize();
  void addToInventory(Item * item);
};

int GetSize()
{
  return _InventorySize;
} 

void Player_Inventory::addToInventory(Item * item)
{
  if( (_InventorySize + item) -> GetSize() > _InventorySize_maxi){
    //can't add
  }
  // else add equip to inventory
  _InventorySize += item -> GetSize();
}

void Player_Inventory::RemoveFromInventory(Item * item)
{
  //* здесь происходит удаление предмета*
  _InventorySize -= item -> getSize();
}
