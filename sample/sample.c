#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

static int __init init_mymodule(void)
{
    printk("Hello world, this is linux kernel module");
    return 0;
}

static void __exit cleanup_mymodule(void)
{
    printk("Bye Bye From kernel");
}

module_init(init_mymodule);
module_exit(cleanup_mymodule);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("ryan");