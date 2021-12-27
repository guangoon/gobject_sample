#include "pm_dlist.h"
#include <stdio.h>

/*此宏有三个功能：
1，函数GType pm_dlist_get_type (void)的实现，GObject帮我们具体实现
2，注册函数前缀pm_dlist到GObject
3，注册实例结构体名称PMDList到GObject
通过此宏的调用，GObject知道了我们的三个信息：类型，类名称，函数前缀
*/
G_DEFINE_TYPE(PMDList, pm_dlist, G_TYPE_OBJECT);

/*实例结构体的初始化，类似于C++中的构造函数*/
static void pm_dlist_init(PMDList *self)
{
        printf("pm_dlist_init\n");
        self->head = NULL;
        self->tail = NULL;
}

/*类结构体的初始化，类似于C++中的static变量的初始化，此函数只会在第一次类实例化的时候被调用，后续类实例化不在调用*/
static void pm_dlist_class_init(PMDListClass *klass)
{
        printf("pm_dlist_class_init\n");
}