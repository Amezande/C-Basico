#include <stdio.h>
    
    int main() 
	{
        int Distance,Runner_1,Runner_2,D1,D2;
            printf("Enter the distance of the runners to win\n\n");
            scanf("%lf",&Distance);
            printf("Enter the seconds of the runner 1\n");
            scanf("%lf",&Runner_1);
            printf("Enter the seconds of the runner 2\n");
            scanf("%lf",&Runner_2);
            D1=Runner_1/Distance;
            D2=Runner_2/Distance;

            printf("the runner1:\n",&D1);
            printf("the runner2:\n",&D2);

            if (Runner_1>Runner_2)
            {
                printf("the runner 2 won :)");
            }
            else if (Runner_1<Runner_2)
            {
                printf("the runner 1 won :)");
            }
    }
