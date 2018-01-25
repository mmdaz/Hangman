#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
int cnt1;
int cnt , sum_point;
time_t t1,t2;
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
struct topic * tp (int n , struct topic * topic_list){
     struct topic * current = topic_list ;
     n--;
     int i;
     for (i=0;i<n;i++){
        current = current ->next ;
     }
     return current;
}
int number_topics (struct topic * topic_list){
    struct topic * current = topic_list;
    int i = 0;
    while (current!=NULL){
        current = current ->next;
        i++;
    }
    return i;
}
void save_point (name n){
    FILE * acc = fopen("accunts.bin","r+");
    rewind(acc);
    name tmp;

    while (1 ){
           // printf("%d",strcmp(tmp.name,n.name));
        fread(&tmp,sizeof(name),1,acc);
      //  printf("%s\n%s",tmp.name,n.name);
        if (strcmp(tmp.name,n.name) == 0)
            break;

        if (feof(acc))
               break;

    }
    fseek(acc,-1*(sizeof(name)),SEEK_CUR);
    printf("%d\n",ftell(acc));
    fwrite(&n,sizeof(name),1,acc);
    fclose(acc);
}
int empty_file (name n , char * topic_name){
    char file_name[50];
    strcpy(file_name,"save//");
    strcat(file_name,n.name);
    strcat(file_name,"-");
    strcat(file_name,topic_name);
    FILE * file = fopen(file_name,"r");
    if (file == NULL)
        printf("er!!\n");
      fseek(file,0,SEEK_END);
      printf("%d\n",ftell(file));
        if(ftell(file) < 2)
          return 1;
    fclose(file);
  return 0;
}
void file_copy (char * topic_name , name nm){
    char * output[50];
    strcpy(output,"save//");
    strcat(output,nm.name);
    strcat(output,"-");
    strcat(output,topic_name);

    FILE * in = fopen(topic_name,"r");
    FILE * out = fopen(output,"w");
    rewind(in);
    char n;
    while (1){
        if (feof(in))
            break;
        fscanf(in,"%c",&n);
   // printf("%c",n);
        fprintf(out,"%c",n);

    }
  fclose(in);
  fclose(out);
}

int point_calculator ( int len , int wr , int t){
   // printf("%d\n",t);
   sum_point = (sum_point + 3*len - wr)/t;
   return sum_point ;
}
void drown_human (int x){
    int i,j;

    if (x == 0){

HANDLE  hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, 6);
 printf("\t\t\t\t\t");
     for (i=0;i<1;i++){
            for (j=0;j<9;j++){
                 printf("%c",176);
            }
        printf("\n");
    }
    SetConsoleTextAttribute(hConsole,15);
    printf("\t\t\t\t\t| %c   %c |\n",150,150);
    printf("\t\t\t\t\t|  %c    |\n",200);
    printf("\t\t\t\t\t|_______|\n");
    printf("\t\t\t\t\t   | |\n");
    printf("\t\t\t\t\t   | |\n");
    printf("\t\t\t\t     +-----+ +-----+\n");
    printf("\t\t\t\t &\\  |             |\n");
    printf("\t\t\t\t  \\\\ |             |\n");
    printf("\t\t\t\t   \\\\              \\");
    printf("\n");
    printf("\t\t\t\t    \\              \\\\\n");
    printf("\t\t\t\t     |             |\\\\\n");
    printf("\t\t\t\t     |_____________| \\&\n");
    printf("\t\t\t\t        |  |  |  |\n");
    printf("\t\t\t\t        |  |  |  |\n");
    printf("\t\t\t\t        |  |  |  |\n");
   printf("\t\t\t\t   ");
   SetConsoleTextAttribute(hConsole,9);
     for (i=0;i<2;i++){

        for (j=0;j<15;j++){
            printf("%c",176);
        }
        printf("\n");
     printf("\t\t\t\t\t   ");
     }
SetConsoleTextAttribute(hConsole,15);


}
 else if ( x==1){
    HANDLE  hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, 6);
printf("\n\n\n");
 printf("\t\t\t\t\t");
     for (i=0;i<1;i++){
            for (j=0;j<9;j++){
                 printf("%c",176);
            }
        printf("\n");
    }
    SetConsoleTextAttribute(hConsole,15);
    printf("\t\t\t\t\t| %c   %c |\n",150,150);
    printf("\t\t\t\t\t|  %c    |\n",200);
    printf("\t\t\t\t\t|_______|\n");
    printf("\t\t\t\t\t   | |\n");
    printf("\t\t\t\t\t   | |\n");
    printf("\t\t\t\t     +-----+ +-----+\n");
    printf("\t\t\t\t &\\  |             |\n");
    printf("\t\t\t\t  \\\\ |             |\n");
    printf("\t\t\t\t   \\\\              \\");
    printf("\n");
    printf("\t\t\t\t    \\              \\\\\n");
    printf("\t\t\t\t     |             |\\\\\n");
    printf("\t\t\t\t     |_____________| \\&\n");
   printf("\t\t\t\t   ");
   SetConsoleTextAttribute(hConsole,9);
     for (i=0;i<2;i++){

        for (j=0;j<15;j++){
            printf("%c",176);
        }
        printf("\n");
     printf("\t\t\t\t\t   ");
     }
SetConsoleTextAttribute(hConsole,15);

}
  else if ( x == 2){
      // printf("f");
    HANDLE  hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, 6);
printf("\n\n\n\n\n\n");
 printf("\t\t\t\t\t");
     for (i=0;i<1;i++){
            for (j=0;j<9;j++){
                 printf("%c",176);
            }
        printf("\n");
    }
    SetConsoleTextAttribute(hConsole,15);
    printf("\t\t\t\t\t| %c   %c |\n",150,150);
    printf("\t\t\t\t\t|  %c    |\n",200);
    printf("\t\t\t\t\t|_______|\n");
    printf("\t\t\t\t\t   | |\n");
    printf("\t\t\t\t\t   | |\n");
    printf("\t\t\t\t     +-----+ +-----+\n");
    printf("\t\t\t\t &\\  |             |\n");
    printf("\t\t\t\t  \\\\ |             |\n");
    printf("\t\t\t\t   \\\\              \\");
    printf("\n");
   printf("\t\t\t\t   ");
   SetConsoleTextAttribute(hConsole,9);
     for (i=0;i<2;i++){

        for (j=0;j<15;j++){
            printf("%c",176);
        }
        printf("\n");
     printf("\t\t\t\t\t   ");
     }
SetConsoleTextAttribute(hConsole,15);

}
else if ( x==3){
    HANDLE  hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, 6);
printf("\n\n\n\n\n\n\n\n\n\n");
 printf("\t\t\t\t\t");
     for (i=0;i<1;i++){
            for (j=0;j<9;j++){
                 printf("%c",176);
            }
        printf("\n");
    }
    SetConsoleTextAttribute(hConsole,15);
    printf("\t\t\t\t\t| %c   %c |\n",150,150);
    printf("\t\t\t\t\t|  %c    |\n",200);
    printf("\t\t\t\t\t|_______|\n");
    printf("\t\t\t\t\t   | |\n");
    printf("\t\t\t\t\t   | |\n");

   printf("\t\t\t\t   ");
   SetConsoleTextAttribute(hConsole,9);
     for (i=0;i<2;i++){

        for (j=0;j<15;j++){
            printf("%c",176);
        }
        printf("\n");
     printf("\t\t\t\t\t   ");
     }
SetConsoleTextAttribute(hConsole,15);

}
else if ( x== 4){
      HANDLE  hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, 6);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
 printf("\t\t\t\t\t");
     for (i=0;i<1;i++){
            for (j=0;j<9;j++){
                 printf("%c",176);
            }
        printf("\n");
    }
    SetConsoleTextAttribute(hConsole,15);
    printf("\t\t\t\t\t| %c   %c |\n",150,150);
    printf("\t\t\t\t\t|  %c    |\n",200);

   printf("\t\t\t\t   ");
   SetConsoleTextAttribute(hConsole,9);
     for (i=0;i<2;i++){

        for (j=0;j<15;j++){
            printf("%c",176);
        }
        printf("\n");
     printf("\t\t\t\t\t   ");
     }
SetConsoleTextAttribute(hConsole,15);
}
else if ( x == 5) {
       HANDLE  hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, 6);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
printf("\t\t\t\t\t");
 printf("BYE BYE !!!");


   SetConsoleTextAttribute(hConsole,9);
     for (i=0;i<2;i++){

        for (j=0;j<15;j++){
            printf("%c",176);
        }
        printf("\n");
     printf("\t\t\t\t\t   ");
     }
SetConsoleTextAttribute(hConsole,15);
}
}
void creat_accunt (name n , struct topic * topic_list){
    FILE * accunnts = fopen("accunts.bin","a");
    fwrite(&n,sizeof(name),1,accunnts);
    fclose(accunnts);

    struct topic * current = topic_list ;
    while (current != NULL){

        file_copy(current->tpc,n);
        current = current ->next;
            }

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
            cnt1 ++ ;
            break;
        }

        if (feof(accunts))
            break;
    }
    fclose(accunts);
    if (cnt1 > 0)
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
void print_topics(struct topic * list){
    struct topic * current = list ;
    int i = 1 , k=0;
    while (current!= NULL){
          printf("[%d] %s \n",i,current->tpc);
          current = current ->next;
          i++;
    }
}
void delete_first (struct topic ** list ){
   // printf("n\n");
    *(list) = (*list)->next ;
}
void delete_node (struct topic * current , struct topic * list){
    struct topic * p_current = list ;
    while (p_current -> next != current){

        p_current = p_current -> next ;

    }
    p_current -> next = current ->next ;
}
struct topic * rand_node (struct topic * list){
 //   printf("rand\n");
  //  print_list(list);
    struct topic * current = list ;
    srand(time(NULL));
    int r ;
    while (current -> next != NULL){
        r = rand();
        r = r % 2;
     //  printf("%d\n",r);
        if (r == 0)
            break;
        current = current ->next ;
    }

  //  printf("rand\n");
    return current ;
}

void add_end (struct topic * list ,struct  topic * new_node){
    struct topic * current = list;
    while (current->next!=NULL){
        current=current->next;
    }
    current->next = new_node;
    new_node->next = NULL;
}
struct topic * creat_node (char tpc[]){
    struct topic *nn = (struct topic *) malloc(sizeof(struct topic));
    strcpy(nn->tpc,tpc);
    nn->next = NULL;
    return nn;
}
struct topic *  topics_node () {
    FILE * topics = fopen("topics.txt","r");
    char n[50];
    rewind(topics);
    fscanf(topics,"%s",n);
   struct topic* list = creat_node(n);
   struct topic * new_node;
    while (1){
        fscanf(topics,"%s",n);
        new_node = creat_node(n);
        add_end(list,new_node);
        if (feof(topics))
            break;

    }
  fclose(topics);
  return list;
}
void print_list(struct topic *list){
     struct topic * current = list;
     while(current != NULL){
           printf("%s ", current->tpc);
           current = current->next;
     }
}
int print_word (char word[],char tmp[],char a){
    int len = strlen(word) , i=0 ,k = 0 ;

    for (i=0;i<len;i++){
        if (word[i]==a && tmp[i]=='-'){
           k++;
           tmp[i] = a;
    }
}
if (k==0){
    cnt++;
}
if (cnt >4){
    printf("You lose !!! The word is : %s\n",word);
    return 1;
}
printf("%s (%d/5)\n",tmp,cnt);
   drown_human(cnt);
  if (strchr(tmp,'-')==NULL){
        system("cls");
    printf("Currect!!! the word is : %s\n",word);

    return 1;
  }

  return 0;
}

struct topic * word_node (char wrd[] ){
   // printf("%s",wrd);
    FILE * words = fopen(wrd,"r");
    if (words == NULL)
    printf("ERRORE!! opening %s",wrd);
    char n[50];
    rewind(words);
    fscanf(words,"%s",n);
    struct topic * list = creat_node(n);
    struct topic * new_node;
    while (1){
        fscanf(words,"%s",n);
        new_node = creat_node(n);
        if (feof(words))
            break;
             add_end(list,new_node);

    }
  fclose(words);
  return list;

 }
 void delete_node_from_topicsnode (struct topic ** list , char * n){
    struct topic * current = *list;
    if (strcmp(current->tpc,n)==0){
        delete_first(list);
    }
    while(current != NULL){
       if (strcpy(current->tpc,n)==0)
        delete_node(current,*list);
         current = current->next;
    }
 }
struct topic * word_node_continue_game (char * topic_name , name n){
    char file_name[50];
    strcpy(file_name,"save//");
    strcat(file_name,n.name);
    strcat(file_name,"-");
    strcat(file_name,topic_name);
     FILE * words = fopen(file_name,"r");
    if (words == NULL)
    printf("ERRORE!! opening %s",file_name);
    char na[50];
    rewind(words);
    fscanf(words,"%s",na);
    struct topic * list = creat_node(na);
    struct topic * new_node;
    while (1){
        fscanf(words,"%s",na);
        new_node = creat_node(na);
        if (feof(words))
            break;
             add_end(list,new_node);
    }
  fclose(words);
  return list;

}
void save_game (name n , int point , struct topic * w_list ,struct topic * t_list , char * top_mpoint ){
    char n_point [20];
    strcpy(n_point,"save//");
    strcat(n_point,n.name);
    strcat(n_point,"-point.txt");

    if (n.max_point< point){
        n.max_point = point;
        strcpy(n.topic,top_mpoint);
        FILE * accunt = fopen(n_point,"w");
        if (accunt == NULL){
            printf("n_point wrong \n");
        }
        fprintf(accunt,"%s ",&n.topic);
        fprintf(accunt,"%d",n.max_point);
        fclose(accunt);
    }
   char top [20] , n_top [20] ;
   strcpy(top,n.name);
   strcat(top,"-topics.txt");
   strcpy(n_top,"save//");
   strcat(n_top,n.name);
   strcat(n_top,"-");
   strcat(n_top,top_mpoint);
   FILE * tpcs = fopen(top,"w");
   if (tpcs == NULL){
    printf("tpcs wrong 1 \n");
   }
   struct topic * current = t_list ;
   struct topic * curnt_word = w_list ;
   while (current != NULL) {
    fprintf(tpcs,"%s\n",&current->tpc);
    current = current ->next ;
   }
   fclose(tpcs);
   tpcs = fopen(n_top,"w");
  if (tpcs == NULL){
    printf("tpcs wrong 1 \n");
   }
   while (curnt_word != NULL) {
    fprintf(tpcs,"%s ",&curnt_word ->tpc);

    curnt_word = curnt_word ->next ;
   }
   fclose(tpcs);
   save_point(n);


}
void new_game (name start_sp ){
               int op_tapic;
   char word [50];
   char n[50];
   struct topic * topic_list = topics_node();
   struct topic * list; // words linklist
   struct topic * current;

   while(1){
   print_topics(topic_list);
   scanf("%d",&op_tapic);
   if ((char) op_tapic == 'Q'){
       printf("GOOD BYE !!!\n");
       exit(-1);
   }
   struct topic * tpc_name = tp(op_tapic,topic_list);
  // printf("%s\n",tpc_name->tpc);
  strcpy(start_sp.topic,tpc_name->tpc);
   list = word_node(tpc_name->tpc);

        system("cls");
    while(list != NULL){
    current = rand_node(list);

  // print_list(list);
   if (current == list){
        strcpy(word,current->tpc);
        delete_first(&list);
   }
    else{
    strcpy(word,current->tpc);
    delete_node(current,list);
    }

    int i = 0, x = strlen(word);
    char a , tmp[50];
    strcpy(tmp,word);
    for (;i<x;i++){
        tmp[i]='-';
    }

   // printf("%s\n",word);
    printf("%s\n",tmp);
    drown_human(cnt);
    t1 = time(NULL);
   do {
     fflush(stdin);
    scanf("%c",&a);
    fflush(stdin);
   if (a == 'Q'){
        printf("Press :\n [1] save and exit \n[2] Dont save and exit :))\n");
      int op;
       scanf("%d",&op);
   while (op <= 0 || op>=3 ){
        fflush(stdin);
    scanf("%d",&op);
   fflush(stdin);
   }
   if (op == 1){
        save_game(start_sp,sum_point,list,topic_list,n);
        exit(-1);
   }
   else if (op == 2)
    exit(-1);
   }
    system("cls");
   }while (print_word(word,tmp,a)==0);
   t2 = time(NULL);
   printf("point = %d\n",point_calculator(strlen(word),cnt,(t2-t1)));
   cnt = 0;


    }
    printf("The topic ended !!! The game saved!! :))\n");
    save_game(start_sp,sum_point,list,topic_list,tpc_name->tpc);
     printf(" press :\n[1] Continue game\n[2] Exit\n");
   int op;
   scanf("%d",&op);
   while (op <= 0 || op>=3 ){
        fflush(stdin);
    scanf("%d",&op);
   fflush(stdin);
   }
   if (op==1)
    continue_game(start_sp);
   else if (op == 2)
  exit(-1);
    }
}
void continue_game (name start_sp){
    int op_tapic;
   char word [50];
   char n[50];
   struct topic * topic_list = topics_node();
   struct topic * list1; // words linklist
   struct topic * current;
     while(1){
   print_topics(topic_list);
   scanf("%d",&op_tapic);
   if ((char) op_tapic == 'Q'){
      printf("GOOD BYE!!!\n");
      exit(-1);
      }
   struct topic * tpc_name = tp(op_tapic,topic_list);
   if (empty_file(start_sp,tpc_name->tpc) == 1 ){
    printf("The topic ended !!! choose other topic :\n");
    continue;
   }
   strcpy(start_sp.topic,tpc_name->tpc);
   list1 = word_node(tpc_name->tpc);
        system("cls");
     //   printf("%d\n",list);
   //  print_list(list);
    while(list1 != NULL){
    current = rand_node(list1);
   // printf("p%s\n",current->tpc);
   // printf("d\n");
    //  print_list(list);
   if (current == list1){
      //  printf("d-f\n");
        strcpy(word,current->tpc);
        delete_first(&list1);
   }
    else{
     //   printf("d-n\n");
    strcpy(word,current->tpc);
    delete_node(current,list1);
    }
  // printf("d\n");
 // print_list(list1);
//  printf("%d\n",list1);
    int i = 0, x = strlen(word);
    char a , tmp[50];
    strcpy(tmp,word);
    for (;i<x;i++){
        tmp[i]='-';
    }
  //  printf("f\n");
  //  printf("%s\n",word);
    printf("%s\n",tmp);
    drown_human(cnt);
   t1 = time(NULL);
   do {
  //  printf("%d\n",list1);
    fflush(stdin);
    scanf("%c",&a);
    fflush(stdin);
  //  printf("%d\n",list1);
   if (a == 'Q'){
        printf("Press :\n [1] save and exit \n[2] Dont save and exit :))\n");
      int op;
       scanf("%d",&op);
   while (op <= 0 || op>=3 ){
        fflush(stdin);
    scanf("%d",&op);
   fflush(stdin);
   }
   if (op == 1){
        save_game(start_sp,sum_point,list1,topic_list,n);
        exit(-1);
   }
   else if (op == 2)
    exit(-1);
   }
   system("cls");

   }while (print_word(word,tmp,a)==0);
   t2 = time(NULL);
    printf("point = %d\n",point_calculator(strlen(word),cnt,(t2-t1)));
   cnt = 0;
    }
     printf("The topic ended !!! The game saved!! :))\n");
    save_game(start_sp,sum_point,list1,topic_list,tpc_name->tpc);
     printf(" press :\n[1] Continue game\n[2] Exit\n");
   int op;
   scanf("%d",&op);
   while (op <= 0 || op>=3 ){
        fflush(stdin);
    scanf("%d",&op);
   fflush(stdin);
   }
   if (op==1)
    continue_game(start_sp);
   else if (op == 2)
  exit(-1);
    }
    }



void start_game (name start_sp){
     struct topic * topic_list = topics_node();
     int option;
    if (cnt1 > 0)
    {
        printf("[1] NEW GAME \n[2] CONTINUE \n");
    }
    else
        printf("[1] NEW GAME \n");
    // check wrong inputs**
    while (1)
    {
        scanf("%d",&option);
        if (cnt1 > 0 && option > 2)
        {
            printf("wrong!!!\n[1] NEW GAME \n[2] CONTINUE \n");
            continue;
        }
        else
            break;
        if ( cnt1 = 0 && option > 1)
        {
            printf("wrong!!!\n[1] NEW GAME \n");
            continue;
        }
        else
            break;
    }
    if (option == 1){
            if (choose_y_n()==1){
          if ( cnt1 ==0 ){
            creat_accunt(start_sp, topic_list);
          }
          else if ( cnt1 >0 ) {
             start_sp.max_point = 0;
          }

        }
        else {
                system("cls");
            start_game(start_sp);
        }
     new_game(start_sp);
    }
    else if (option == 2){
      continue_game(start_sp);
    }
}
int main()
{   printf("Welcome to HANGMAN !!!\n");
    printf("Enter your name : \n");
    char name_srart[20];
    name start_sp;//mosshakhasate avvalin nafar vorodi
    scanf("%s",name_srart);
   start_sp = get_name(name_srart);
   start_game(start_sp);
    return 0;
}
