[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
## Athletica

This repository contains a simple C++ program that holds a store inventory of athletic gear. The user can search if an item is available by its product code and if it is found in the database, the user has the option to purchase the item.
Once the user is ready to checkout, the application will render a receipt listing the total of the transaction.

### Installation 

1. Clone this repo
> HTTPS: `https://github.com/micheqn3/athletica.git` <br>
> SSH: `git@github.com:micheqn3/athletica.git`
2. Compile the files using g++
> g++ -o main main.cpp inventory.cpp
4. Run the file 
> ./main

### Screenshot

## This repository contains:
 - main.cpp - This file contains the main source code 
 - inventory.hpp - This file stores the function prototypes
 - inventory.cpp - This file contains the function prototypes that will read the database and return to the user the item and price
 - /db - This folder contains the item's product code and prices

### Technologies/Languages used: 

  - C++

### License 

MIT 
