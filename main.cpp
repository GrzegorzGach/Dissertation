//
// Created by olav on 10.10.2016.
//
#include <iostream>
#include "Electron.h"
#include "Trap.h"
#include "Crystal.h"
#include "Functions.h"
int main() {
    Crystal crystal = Crystal(3);
    printVector(crystal.getTraps());
    printVector(crystal.getElectrons());
    std::vector<Trap> traps = crystal.getTraps();
    std::cout<<traps[0].isOccupied()<<std::endl;
    traps[0].removeElectron();
    std::cout<<traps[0].isOccupied()<<std::endl;
    crystal.getTraps().clear();
    crystal.getElectrons().clear();


    return 0;
}