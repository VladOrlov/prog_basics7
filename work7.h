
#ifndef PROG_BASICS7_WORK7_H
#define PROG_BASICS7_WORK7_H

void interchange(int *array_length, int *seed_number){
    int temp;
    temp = *array_length;
    *array_length = *seed_number;
    *seed_number = temp;
}

#endif //PROG_BASICS7_WORK7_H
