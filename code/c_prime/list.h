/* list.h -- 简单链表的头文件 */
#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>	/* C99 特性 */

/* 声明 */
#define TSIZE 45	/* title 的数组大小*/
struct film 
{
	char title[TSIZE];
	int rating;
};

/*一般定义 */
typedef struct film Item;
typedef struct node
{
	Item item;
	struct node *next;
} Node;
typedef Node *List;

/* 函数原型 */

/* 初始化一个链表		*/
/*前提条件　plist　指向一个链表	*/
/*后置条件　链表初始化为空	*/
void InitializeList(List *plist);

/* 操作：　确定链表是否为空，plist 指向一个已初始化的链表	*/
/*后置条件　如果链表为空，　返回true;否则返回false		*/
bool ListIsEmpty(const List *plist);

/*操作：　确定链表中的项数，plist 指向一个已初始化的链表	*/
/*后置条件　该函数返回链表中的项数				*/
unsigned int ListItemCount(const List *plist);

/*操作：　在链表末尾添加项					*/
/*前提条件　item是一个待添加的项，plist是一个已初始化的链表	*/
/*后置条件　如果可以，函数在末尾添加一个项，返回true;否则返回false*/
bool AddItem(Item item, List *plist);

/*操作：　把函数作用于链表的每一个项				*/
/*　　　　plist指向一个已初始化的链表				*/
/*　　　　pfun指向一个函数，函数接受一个Item类型的参数，无返回  */
/*后置条件　pfun指向的函数作用与链表的每一个项			*/
void Traverse(const List *plist, void (*pfun)(Item item));

/*操作：　释放已分配的内存					*/
/*        plist指向一个已初始化的链表				*/
/*后置条件　释放了为链表分配的内存，链表设置为空		*/
void EmptyTheList(List *plist);

#endif
