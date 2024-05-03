#define MODULE
#define LINUX

#include <linux/module.h>  
#include <linux/kernel.h>  
#include <linux/init.h>    
static int __init bom_dia_mundo(void)
{
   printk("<1>Hello world 1.\n");
	
   return 0;
}

static void __exit boa_noite_mundo(void)
{
  printk(KERN_ALERT "Goodbye world 1.\n");
}

MODULE_LICENSE("GPL");
module_init(bom_dia_mundo);
module_exit(boa_noite_mundo);
