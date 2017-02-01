//
//  hello_arrays.c
//  MyFirstCProgram
//
//  Created by Chinedum Moses Ukejianya on 5/29/14.
//  Copyright (c) 2014 treehouse. All rights reserved.
//

#include <stdio.h>

int _main_two() {
    float numbers_geeks_love[] = {3.1415, 1.6180, 1.4142};
    
    printf("PI %f\n", numbers_geeks_love[0]);
    printf("golden ration %f\n", numbers_geeks_love[1]);
    printf("square root of 2 is %f\n", numbers_geeks_love[2]);
    
    int prime[] = {2, 3, 5, 7};
    printf("the first 4 prime numbers are %d %d %d %d\n", prime[0], prime[1], prime[2], prime[3]);
    
    return 0;
}
