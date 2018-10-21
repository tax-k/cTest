//
//  main.c
//  cTest
//
//  Created by tax_k on 21/10/2018.
//  Copyright © 2018 tax_k. All rights reserved.
//

#include <stdio.h>

int main()
{
    int n, array[1000], c, d, t;
    
    printf("입력 갯수: ");
    scanf("%d", &n);
    
    printf("%d 개 입력\n", n);
    
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
    
    for (c = 1 ; c <= n - 1; c++) {
        d = c;
        
        while ( d > 0 && array[d-1] > array[d]) {
            t          = array[d];
            array[d]   = array[d-1];
            array[d-1] = t;
            
            d--;
        }
    }
    
    printf("정렬:\n");
    
    for (c = 0; c <= n - 1; c++) {
        printf("%d ", array[c]);
    }
    
    return 0;
}
