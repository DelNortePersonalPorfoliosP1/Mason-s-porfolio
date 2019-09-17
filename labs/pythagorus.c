//
//  devops.c
//  tutorial
//
//  Created by Parsons, Mason on 9/3/19.
//  Copyright © 2019 Parsons, Mason. All rights reserved.
//
#include <stdio.h>
#include <math.h>
int pythagorus(void) {
    double x,y,z;
    
    
    printf("input value for x");
    scanf("%lf",&x);
    printf("imput value for y");
    scanf("%lf",&y);
    
    z=(x*x)+(y*y);
    z=sqrt(z);
    printf("%lf",z);
    return 0;
    }
