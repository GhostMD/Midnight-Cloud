//      Merchant.h
//      
//      Copyright 2011 Michael Davenport
//      
//      This program is free software; you can redistribute it and/or modify
//      it under the terms of the GNU General Public License as published by
//      the Free Software Foundation; either version 2 of the License, or
//      (at your option) any later version.
//      
//      This program is distributed in the hope that it will be useful,
//      but WITHOUT ANY WARRANTY; without even the implied warranty of
//      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//      GNU General Public License for more details.
//      
//      You should have received a copy of the GNU General Public License
//      along with this program; if not, write to the Free Software
//      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
//      MA 02110-1301, USA.
//      
//      


#ifndef MERCHANT_H
#define MERCHANT_H

#include <iostream>
#include <cstdlib>

#include "mygetch.h"
#include "player.h"

using std::string;
using std::cout;
using std::endl;

void display(struct variables *data,int &current_gold);
void buy(struct variables *data,int &current_gold);
void sell();
void item(int x,struct variables *data,int &current_gold);

string itemDescription(int ID);

void itemName(string name[],int ID[]);
int itemCost(int ID);
void check(int x,struct variables *data, int &current_gold);
void stats(int ID,struct variables *data);

#endif

