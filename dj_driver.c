#include <linux/module.h>
#include <linux/version.h>
#include <linux/kernel.h>




static int __init dj_init(void) 
{
    pr_info("dj registered");
    return 0;
}

static void __init dj_exit(void) 
{
    pr_info("dj unregistered");
}

module_init(dj_init);
module_exit(dj_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Oliver MacGregor");
MODULE_DESCRIPTION("HWDJ Device Driver");