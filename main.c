#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cnt;
struct topic{
    char tpc [50];
  struct  topic * next;
};

typedef struct
{
    char name[20];
    char topic[20];
    int max_point;
} name;
void creat_accunt (name n){
    FILE * accunnts = fopen("accunts.bin","a");
    fwrite(&n,sizeof(name),1,accunnts);
    fclose(accunnts);

}
int choose_y_n (){
    char c ;
    while (1){
    printf("Are you sure ???   [y] or [n] \n");
    scanf("%c%c",&c,&c);
    if ((char)c == 'y'){
         return 1;

    }
    if ((char)c == 'n'){
        return 0;

    }
    }


}
void new_game (name * x)
{
    *(x.max_point) = 0;
}

name get_name (char * n)
{
    FILE  * accunts = fopen("accunts.bin","rb");
    name name1;

    rewind(accunts);


    while (1)
    {
        fread(&name1,sizeof(name),1,accunts);
        if (strcmp(name1.name,n)==0)
        {
            cnt ++ ;
            break;
        }

        if (feof(accunts))
            break;
    }
    fclose(accunts);
    if (cnt > 0)
    {
        printf("Hello %s !!!\nyour best record is : %d\n",name1.name,name1.max_point);
        return name1;

    }
    else
    {
        name1.max_point = 0;
        strcpy(name1.name,n);
        printf("Hello %s wellcome !!! \n",name1.name);
        return name1;
    }
}
int main()
{
    printf("Enter your name : \n");
    char name_srart[20];
    name start_sp;//mosshakhasate avvalin nafar vorodi
    scanf("%s",name_srart);
   start_sp = get_name(name_srart);
    int option;
    if (cnt > 0)
    {
        printf("[1] NEW GAME \n[2] CONTINUE \n");
    }
    else
        printf("[1] NEW GAME \n");
    // check wrong inputs**
    while (1)
    {
        scanf("%d",&option);
        if (cnt > 0 && option > 2)
        {
            printf("wrong!!!\n[1] NEW GAME \n[2] CONTINUE \n");
            continue;
        }
        else
            break;
        if ( cnt = 0 && option > 1)
        {
            printf("wrong!!!\n[1] NEW GAME \n");
            continue;
        }
        else
            break;
    }
    if (option == 1){
        if (choose_y_n()==1){
          if ( cnt ==0 ){
            creat_accunt(start_sp);
          }
          else if ( cnt >0 ) {
             start_sp.max_point = 0;
          }

        }

    }
    else if (option == 2){
        // edameye bazi ???
    }


    return 0;
}
