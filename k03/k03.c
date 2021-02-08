#include <stdio.h>

#define DEBUG

#define ALPHABET_LEN    255

char StrOriginal[] = "On a dark deseart highway, cool wind in my hair.";
char StrKey[] = "wind";

char* ForceSearch(char text[], char key[])
{
  int pos=0;
  int start =0;
  while(text[pos+start]!='\0')
  {
      if(text[pos+start]==key[pos])
      {
          pos++;
          if(key[pos]=='\0')
          {
              return(&text[start]);
              break;
          }
      }
      else
  
{
    start++;
    pos=0;
    if(text[pos+start]=='\0')
    {
        return NULL;
    }
}
}
}


char* BMSearch(char text[], char key[])
{
   int text_len=0;
   for(int pos=0;text[pos]!='\0';pos++)
{
    text_len++;
}
int key_len=0;
for(int pos=0;key[pos]!='\0';pos++)
{
    key_len++;
}
int i,table[256],pos,shift,a,b=0;
for(i=0;i<=255;i++)
{
    table[i]=key_len;
}
for(i=0;key[i]!='\0';i++)
{
    table[(unsigned char)key[i]]=key_len-i-1;
}
for(i=key_len-1;i<text_len;i=pos+shift)
{
    for(pos=i;a!=0;pos--)
    {
        a=key_len-b-1;
        if(text[pos]==key[a])
        {
            b++;
            if(b==key_len)
            {
                return(&text[i-key_len+1]);
            }
        }
        else
        {
            b=0;
            shift =table[text[(unsigned char)pos]];
            if(pos + shift<=i)
            {
                shift = i+1-pos;
            }
            break;
        }
        
    }
}
return NULL;
}

int main(void)
{
    char*   str;
    str = ForceSearch(StrOriginal, StrKey);
    printf("Force Search. Find keyword at:%s\n", str);

    str = BMSearch(StrOriginal, StrKey);
    printf("BM Search. Find keyword at:%s\n", str);

    return 0;
}