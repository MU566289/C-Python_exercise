#include<stdio.h>
#include<windows.h>
typedef struct
{
    char name[30];
    double price;
}Book;
void showBook(Book stu)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    printf("名著:%s ",stu.name);
    printf("价格:%.2f",stu.price);
}
int main(void)
{
    Book book={"西游记",39.90};
    showBook(book);
    return 0;
}
