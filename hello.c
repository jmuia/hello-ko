#include <linux/module.h> // Required by all modules.
#include <linux/kernel.h> // Required for kernel logging macros.
#include <linux/init.h> // Required for __init and __exit macros.

static int __init hello(void) {
  printk(KERN_INFO "Hello, World!\n");
  return 0;
}

static void __exit goodbye(void) {
  printk(KERN_INFO "Goodbye, cruel World!\n");
}

module_init(hello);
module_exit(goodbye);

