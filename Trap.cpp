//
// Created by olav on 10.10.2016.
//

#include "Trap.h"

bool Trap::isOccupied() {
    if (this->electron != NULL)
        return true;
    return false;

}
void Trap::setElectron(Electron *electron1) {
    electron1->setX(this->x_pos);
    electron1->setY(this->y_pos);
    electron1->setZ(this->z_pos);
    this->electron = electron1;
}
Trap::Trap(double x, double y, double z) {
    this->x_pos = x;
    this->y_pos = y;
    this->z_pos = z;
}