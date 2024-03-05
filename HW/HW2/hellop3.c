#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>

MODULE_LICENSE("Dual BSD/GPL");


static int a = 1;
static int b = 1;
static char *c = "world";
module_param(a, int, S_IRUGO);
module_param(b, int, S_IRUGO);
module_param(c, charp, S_IRUGO);

static int hello_init(void)
{
  int i;
  for (i = 0; i < a*b; i++)
    printk(KERN_ALERT "(%d) Hello, %s\n", i, c);
  return 0;
}

static void hello_exit(void)
{
  printk(KERN_ALERT "Goodbye, cruel world\n");
}

module_init(hello_init);
module_exit(hello_exit);