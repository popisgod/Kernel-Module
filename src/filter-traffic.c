#include <linux/module.h> /* Needed by all modules */
#include <linux/printk.h> /* Needed for pr_info() */
#include <linux/fs.h>

int log_level = 0; 
module_param(log_level, int , 0); 
MODULE_PARM_DESC(log_level, "log level 0 - no logging; log level 1 - logging all.");

int init_module(void)
{

	if (log_level) {
		pr_info("INIT_MODULE\n");
	} 
	
	return 0;
}

void cleanup_module(void)
{
	if (log_level) {
		pr_info("EXIT_MODULE\n");
	}	
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("POPISGOD"); 
MODULE_DESCRIPTION("A simple driver for filtering traffic"); 
  