#include <stdio.h>
int main()
{
    float maths, phy, chem;
    int total;
    float average;
        printf("enter marks for maths:");
        scanf("%f", &maths);
        printf("enter marks for phy:");
        scanf("%f", &phy);
        printf("enter marks for chem:");
        scanf("%f", &chem);
        printf("marks for maths subject are:%f\n",maths);
        printf("marks for phy subject are:%f\n",phy);
        printf("marks for chem subject are:%f\n",chem);
        total=maths+phy+chem;
        average= total/3;
        printf("total marks of pcm are:%d\n",total);
        printf("average marks of pcm are:%f\n",average);



        return 0;
    }
