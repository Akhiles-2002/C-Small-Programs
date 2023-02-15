#include<stdio.h>
#include<string.h>
void insert(FILE  *fp);
void del(FILE  *fp);
void modify( FILE  *fp);
void booksold(FILE  *fp);
int search(FILE *fp,char  *name);
void display (FILE *fp);
void list (FILE *fp);
struct
{
    char name[50];
    int ncopies;
    float cost;
} book;
main()
{
    int choice;
    FILE *fp;
    fp=fopen("books. dat","rb+");
    if(fp==NULL)
    {
	fp=fopen("books.dat","wb+");
	if(fp==NULL)
	{
	    puts ("error in opening file\n");
	    exit(1);
	}
    }

    while (1)
    {
	printf("1.insert a new record\n");
	printf("2.delete a record\n");
	printf("3.display record of a book\n");
	printf("4.modify an existing record\n");
	printf("5.list all  records\n");
	printf("6.book sold\n");
	printf("7.exit\n");
	printf("enter your choice\n");
	scanf("%d",&choice);
	switch (choice)
	{

	case 1 :
	    insert (fp);
	    break;
	case 2 :
	    del(fp);
	    break;
	case 3 :
	    display(fp);
	    break;
	case 4 :
	    modify (fp);
	    break;
	case 5 :
	    list (fp);
	    break;
	case 6 :
	    booksold(fp);
	    break;
	case 7 :
	    fclose(fp);
	    exit(1);
	default :
	    printf("wrong choices\n");
	}
    }
}
void insert(FILE *fp)
{
    fseek (fp,0,2);
    printf("enter book name :");
    scanf("%s",book.name);
    printf("enter the number of copies");
    scanf("%d",&book.ncopies);
    printf("enter the cost of book:");
    scanf("%f",&book.cost);
    fwrite(&book,sizeof(book),1,fp);
}
void del(FILE *fp)
{
    FILE *fptmp;
    char name[20];
    printf("enter the name of to be deleted from database:");
    scanf("%s",name);
    if((fp,name)==0)
	return;
    fptmp=fopen("tempfile.dat","wb");

    rewind(fp);
    while(fread(&book,sizeof(book),1,fp)==1)


    {
	if(strcmp(name,book.name)!=0)
	    fwrite(&book,sizeof(book),1,fptmp);
    }
    fclose(fp);
    fclose(fptmp);
    remove("book.dat");
    rename("tempfile.dat","book.dat");
    printf("\nrecord delete ......\n\n");
    fp=fopen("book.dat","rb+");
}

void modify(FILE *fp)
{

    char name[50];
    long size =sizeof(book);
    printf("enter the name of book tobe modified :");
    scanf("%s",name);
    if(search(fp,name)==1)
    {
	printf("enter the new data\n\n\n");
	printf("enter book name");
	scanf("%s",book.name);
	printf("enter the number the copies");
	scanf("%d",&book.ncopies);
	printf("enter the cost of book :");
	scanf("%f",&book.cost);
	fseek(fp,-size,1);
	fwrite(&book,sizeof(book),1,fp) ;
	printf("\nrecord successfully modified\n\n");
    }
    }
    void booksold(FILE *fp)
    {
	char name[50];
	long size = sizeof(book);
	printf("enter name of book to be sold\n");
	scanf("%s",name);
	if(search(fp,name)==1)
	{
	    if(book.ncopies>0)
	    {
		book.ncopies--;
		fseek(fp,-size,1);
		fwrite(&book,sizeof(book),1,fp);
		printf("one book sold");
		printf("now number of copies =%d\n",book.ncopies);
	    }
	    else
		printf("book out of stock\n");
	}
    }
    void display(FILE *fp)
    {
	char name[50];
	printf("enter the name of the book:");
	scanf("%s", name);
	search(fp, name);
	printf("\nName\t%s\n",book. name);
	printf("Copies\t%d\n,book,ncopies");
	printf("Cost\t%f\n\n",book.cost);

    }
    int  search(FILE  *fp,char  *name)
    {
	unsigned  flag=0;
	rewind(fp);
	while (fread (&book,sizeof(book),1,fp)==1)
	{
	    if (strcmp(name,book.name)==0)
	    {
		flag =1;
	       break;;
	    }
	}
	if (flag==0)
	    printf("\nName not found in file\n\n");
	return flag;
    }
    void list(FILE *fp)
    {
	rewind(fp);
	printf("\nName\tCOPIES\t\tCOST\n\n");
	while(fread(&book,sizeof(book),1,fp)==1);
	{
	    printf("%s\t",book.name);
	    printf("%d\t\t",book.ncopies);
	    printf("%f\n",book.cost);

	}
	printf("\n");

}








