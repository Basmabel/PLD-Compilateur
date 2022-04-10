#include <stdio.h>

int main(){
    int array[3];
    int size = 3;
    array[0] = 4;
    array[1] = 7;
    array[2] = 3;
    int step, i = 0;
    while(step<size){
        int min_idx = step;
        i = step + 1;
        while(i<size){
            if (array[i] < array[min_idx]){
                min_idx = i;
                }else{}
            i =i + 1;
        }
        int temp;
        temp = array[min_idx];
        array[min_idx] = array[step];
        array[step] = temp;
        step = step + 1;
    }
    return array[0];
}