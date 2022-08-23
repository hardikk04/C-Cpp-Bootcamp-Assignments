/* 8. Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
word1 = “the”, word2 = “fox”, OUTPUT : 1 ) */
#include<stdio.h> 

int main()
{
    char words[4][20]={"my","name","is","hardik"},word1[10]={"my"},word2[10]={"hardik"};
    int min=10000,w1=-1,w2=-1,i,temp;
    // printf("Enter the string\n");
    // gets(words);
    // printf("Enter the two words to find the minimum distance between the given two words\n");
    // printf("Enter the first words\n");
    // gets(word1);
    // printf("Enter the second words\n");
    // gets(word2);

    for(i=0; i<4; i++)
    {
        if(strcmp(words[i],word1)==0)
        w1= i;
        if(strcmp(words[i],word2)==0)
        w2= i;
        
        if( w1 != -1 && w2 != -1)
        {
            temp= abs(w2-w1);
            if(temp<min)
            min= temp;
        }
    }

        printf("%d is minmun distance ",min-1);
    return 0;
}