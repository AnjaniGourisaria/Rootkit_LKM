#include<linux/module.h>
#include<linux/init.h>

static int __init lkm_init(void) {

	pr_info("Boring\n");
	return 0;
}

static void __exit lkm_exit(void) {

	pr_info("We Will Made it easy\n");
}

module_init(lkm_init);
module_exit(lkm_exit);

MODULE_AUTHOR("@ANJNAI GOURISARIA");
MODULE_DESCRIPTION("A DMESG");
MODULE_LICENSE("GPL v2");

