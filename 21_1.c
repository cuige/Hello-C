//
// Created by cui on 16-8-13.
//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char card_name[3];
    int count=0;

    do{
        puts("Please input the card:");
        scanf("%2s",card_name);
        int val=0;
        switch (card_name[0]){
            case 'J':
            case 'Q':
            case 'K':
                val=10;
                break;
            case 'A':
                val=11;
                break;
            case 'X':
                printf("输入结束\n");
                continue;
            default:
                val=atoi(card_name);
                if( (val<1) || (val>10)) {
                    printf("请输入正确的纸牌\n");
                    continue;
                }
        }
        if( (val>2)&& (val<7))
            count++;
        else if(val==10)
            count--;
        printf("牌的点数是 %i\n",count);

    }while (card_name[0]!='X');
    return 0;
}
