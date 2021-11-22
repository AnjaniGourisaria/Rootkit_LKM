#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd9196d56, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x40e5ffc2, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x1088f5c8, __VMLINUX_SYMBOL_STR(param_ops_long) },
	{ 0xc7804f6e, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x336c5671, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xba733c3f, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A704327C32F7F311666C13C");
