/*To demonstrate module_init() and module_exit() macros.
 * Prefer this over init_module() and cleanup_module(). */

#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

static int __init hello_2_init(void)
{
	printk(KERN_INFO "Better Loading method !! \n");
	return 0;
}

static void __exit hello_2_exit(void)
{
	printk(KERN_INFO "Better Goodbye ;)\n");
}
module_init(hello_2_init);
module_exit(hello_2_exit);

 


