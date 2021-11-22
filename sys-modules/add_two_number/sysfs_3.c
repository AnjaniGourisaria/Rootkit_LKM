#define pr_fmt(fmt)	KBUILD_MODNAME "->%s:%d:  " fmt, __func__,__LINE__
#define iamhere(x)	pr_info("IAMHERE: " x "\n")

#include<linux/module.h>
#include<linux/init.h>
#include<linux/stat.h>

static int integer;
module_param(integer, int,  S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(integer, "A simple integer counter variable");

static int integer2;
//                   char + pointer -> charp https://stackoverflow.com/questions/33085026/how-charp-will-be-replaced-by-module-param
module_param(integer2, int, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(integer2, "A message from user space");

// Also, check out 
// module_param_named, module_param_array, module_param_string 

static int __init lkm_init(void) {

	pr_info("Hello Cruel World of Kernel Programming!\n");

	pr_info("Param 1: int1 %d\n", integer);
	pr_info("Param 2: int2 %d\n", integer2);
	pr_info("[3]: 1+2 %d\n", integer+integer2);


	return 0;

}


static void __exit lkm_exit(void) {

	pr_info("[+]Exited..");

	pr_info("Param 1: int %d\n", integer);
	pr_info("Param 2: int2  %d\n", integer2);
	pr_info("[3+]: 1+2-> %d\n", integer+integer2);

}

module_init(lkm_init);
module_exit(lkm_exit);


MODULE_AUTHOR("");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Module v2");
