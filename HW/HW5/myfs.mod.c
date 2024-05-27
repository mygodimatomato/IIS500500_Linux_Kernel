#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x66c483d6, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5057e5be, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x7229f1cf, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0x13abb514, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x4bb0ff5d, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xa53700dc, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x3ca3fcc7, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x70319646, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xfbbd1248, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xae1ce499, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0xddea16fd, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xae57239d, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0xdc9ad06b, __VMLINUX_SYMBOL_STR(simple_dir_inode_operations) },
	{ 0x3a4ba695, __VMLINUX_SYMBOL_STR(d_alloc) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0xa8a81994, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x273358a8, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "396B5584F506284044A2242");
