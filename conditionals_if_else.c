//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>

int main()
{

    char a = 'a';
    char b = 'b';
    char g = 'g';
    
    char letter = 'g';
    if (letter == a) printf("letter %c is %c\n", letter, a);
    else if (letter == b) printf("letter %c is %c\n", letter, b);
    else if (letter == g) printf("letter %c is %c\n", letter, g);
    else printf("letter %c not found\n", letter);

    return 0;
}

