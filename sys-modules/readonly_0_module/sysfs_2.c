#define pr_fmt(fmt)	KBUILD_MODNAME "->%s:%d:  " fmt, __func__,__LINE__
#define iamhere(x)	pr_info("IAMHERE: " x "\n")

#include<linux/module.h>
#include<linux/init.h>
#include<linux/stat.h>

static int integer;
module_param(integer, int, 0);
MODULE_PARM_DESC(integer, "A simple integer counter variable");

static char *msg = NULL;
module_param(msg, charp, 0);
MODULE_PARM_DESC(msg, "A message from user space");

// Also, check out 
// module_param_named, module_param_array, module_param_string 

static int __init lkm_init(void) {

	pr_info("Hello Cruel World of Kernel Programming!\n");

	pr_info("Param 1: Counter %d\n",  integer);
	pr_info("Param 2: Message: %s\n", msg);


	return 0;

}


static void __exit lkm_exit(void) {

	pr_info("Wow! You exited early\n");

	pr_info("Param 1 on exit: Counter %d\n", integer);
	pr_info("Param 2 on exit: Message: %s\n", msg);


}

module_init(lkm_init);
module_exit(lkm_exit);


MODULE_AUTHOR("");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Module v2");
