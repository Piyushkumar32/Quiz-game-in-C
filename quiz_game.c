#include<stdio.h>
#include<ctype.h>
int main(){
    char question[][100]={"A.What is thhe capital of india ?",
                          "B.Who is the prime minister  of india?",
                          "C.Which is longest river of india ?"};
    char option[][100]={"A.Kolkata ","B.Delhi","C.Bengaluru","D.Assam"
                         ,"A.Rahul gandhi","B.Narandra modi","C.Lallu yadav","D.Mamta banerjee"
                         ,"A.Yamuna","B.Brahmputra","C.Ganga","D.Narmada"};
    char Answer[]={'B','B','C'};
    int nof=sizeof(question)/sizeof(question[0]);
    char ans;
    int score =0;
    printf("The Quiz Game:\n");
    for (int  i = 0; i < nof; i++)
    {
        printf("*********\n");
        printf("%s\n",question[i]);
        printf("*********\n");
        for (int j = (i*4); j < (i*4)+4; j++)
        {
           printf("%s\n",option[j]);
        }
        printf("ANSWER:");
        scanf(" %c",&ans);
        ans=toupper(ans);
        if ( ans == Answer[i])
        {
            printf("Correct Answer\n");
            score++;
        }
        else
        {
            printf("incorrect Answer\n");
        }
        
        
    }
    if (score == nof)
    {
        printf("Congrtulation! You answered all of them correctly \n");
        
    printf("Score:");
    printf("%d/%d", score,  nof);

    }else
    {
        printf("Better luck next time. \n Try again if you want ");
        
    printf("Score:");
    printf("%d/%d", score,  nof);
    }
    
    
                                              
}
