#include<stdio.h>
#include<math.h>

int main()
{
    int given_num=245815362, check_num;
    for(check_num= sqrt(given_num) ;(1);check_num++)
        if( (check_num * (check_num+1)) >= given_num) break;

        if(given_num == (check_num * (check_num+1)))
                printf("%d is Pronic ", given_num);

    return 0;
}
