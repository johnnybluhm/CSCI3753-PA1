#include <linux/kernel.h>
#include <linux/linkage.h>
#include <linux/uaccess.h>
asmlinkage long sys_cs3753_add(int num1, int num2, int *add)
{
printk(KERN_ALERT "%d\n", num1);
printk(KERN_ALERT "%d\n", num2);
int sum = num1+ num2;
printk(KERN_ALERT "%d\n", sum);
copy_to_user(add, &sum, 4);
return 0;
}
