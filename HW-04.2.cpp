#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <ctime>
 
using namespace std;
 
int main()
{
    int ** matrix; 
    int sum, count;
    
    printf("Введите диапозон: ");
    cin >> count;
 
    srand(time(0));
 
    matrix = new int*[6];
    for(int i=0; i<6; i++)
    {
        matrix[i]=new int[5];
    }
 
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<5; j++)
        {
            matrix[i][j] = count + rand()%235;
        }
    }
 
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }
 
    printf("\nsum=");
    sum=0;
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<5; j++)
        {
            if( (i%2==1) && (j%2==0) && (matrix[i][j]>0) )
            {
                sum=sum+matrix[i][j];
                printf("%d+",matrix[i][j]);
            }
        }
    }
 
    printf("\b=%d",sum);
 
    getchar();
 
}