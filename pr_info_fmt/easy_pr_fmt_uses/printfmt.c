/*like sereral function like pr_info,pr_emerg,pr_....logs function this will help us to debug program*/  
/*#     function name        module name      (-> just an string) (%s for func name & %d is line_no  )*/
#define pr_fmt(fmt)        KBUILD_MODNAME "->%s:%d:   " fmt,__func__,__LINE__
                                         //            (fmt for file name),(__func__ for function name),(__LINE__ is line-no)

//#define hello(code)                   pr_info("/*%s*/ HELLO NEW DEFINED"code"\n"/*,__func__*/)
#define hello(code)                   pr_info("HELLO NEW DEFINED"code"\n")
#include<linux/init.h>
#include<linux/module.h>



static int __init lkm_init(void) {

	pr_info("Working\n");
	hello(" Going_to_death this process tree\n");
	return 0;
}

static void __exit lkm_exit(void) {

	pr_info("We Will Made it easy\n");
	hello(" BYE\n");
}

module_init(lkm_init);
module_exit(lkm_exit);

MODULE_AUTHOR("@ANJNAI GOURISARIA");
MODULE_DESCRIPTION("A DMESG FOR DEBUG OF MISTAKE USING pr_fmt for format");
MODULE_LICENSE("GPL v2");

