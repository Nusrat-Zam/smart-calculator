#include <stdio.h>
#include <string.h>
int main(){
    
    int result=0;
    scanf("%d",&result);
    char op;
    scanf(" %c",&op);
    while (strchr("+-*/=",op)==NULL){
        printf("Invalid.please enter again");
        scanf(" %c",&op);
    }
    
        while(op!= '='){
            
            int num;
            scanf("%d",&num);
            if (op=='+'){
                result+=num;
            }
            else if (op=='-'){
                result-=num;
            }
            else if (op=='*'){
                result*=num;
            }
            else if (op=='/'){
                result/=num;
            }
            scanf(" %c",&op); 
        
    
}
    printf("%d",result);
        

    
     
    return 0;
}