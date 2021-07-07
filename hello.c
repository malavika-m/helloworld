#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
int __init init_module(void)
{
  printk("Hello world....welcome\n");
  return 0;
}
void __exit leanup_module(void)
{
  printk("Bye,leaving the world\n");
}
MODULE_LICENSE("GPL")
MODULE_AUTHOR("name");
MODULE_DESCRIPTION("A simple module");
