#define pr_fmt(fmt)	KBUILD_MODNAME "->%s:%d:  " fmt, __func__,__LINE__
#define p(x)	pr_info("[+]Debug: " x "\n")

#include<linux/module.h>
#include<linux/init.h>
#include<linux/stat.h>
#include<linux/string.h>

static char *integer = NULL;
module_param(integer, charp, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(integer, "A simple integer counter variable");

static char *msg = NULL;
module_param(msg, charp, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(msg, "A message from user space");

// Also, check out 
// module_param_named, module_param_array, module_param_string 

static int __init lkm_init(void) {

	pr_info("Hello Cruel World of Kernel Programming!\n");
	pr_info("Param 1: Counter %s\n",  integer);
	pr_info("Param 2: Message: %s\n", msg);
	pr_info("msg+msg1=%s\n",strcat(integer,msg));

	return 0;

}


static void __exit lkm_exit(void) {

	pr_info("Wow! You exited early\n");

	pr_info("Param 1 on exit: Counter %s\n", integer);
	pr_info("Param 2 on exit: Message: %s\n", msg);
	pr_info("msg+msg1=%s\n",strcat(integer,msg));

}

module_init(lkm_init);
module_exit(lkm_exit);


MODULE_AUTHOR("");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Module v2");
