#include<stdio.h>

int main()
{
    char o;
    
    printf("Enter character\n");
    scanf("%c",&o);
    
    switch (o)
    {
     case'A':
      printf("%c is vowel",o);
      break;
     case'E':
      printf("%c is vowel",o);
      break;
      case'I':
      printf("%c is vowel",o);
      break;
      case'O':
      printf("%c is vowel",o);
      break;
      case'U':
      printf("%c is vowel",o);
      break;
      case'a':
      printf("%c is vowel",o);
      break;
      case'e':
      printf("%c is vowel",o);
      break;
      case'i':
      printf("%c is vowel",o);
      break;
      case'o':
      printf("%c is vowel",o);
      break;
      case'u':
      printf("%c is vowel",o);
      break;
    default:
    printf("%c is not a vowel",o);
    }
    return 0;
}