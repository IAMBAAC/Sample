
#include <linux/init.h>
#include <linux/module.h>
#include<linux/kernel.h>
//general public license
static int __init my_init(void){
	printk(KERN_INFO "My name is basil\n");
	int a=4,b=2,s,d,m;
	float div;
	char x="basil",y=_abraham,sc;
	s=a+b;
	d=a-b;
	m=a*b;
	div=a/b;
	printk(KERN_INFO"%d\n",s);
	printk(KERN_INFO"%d\n",d);
	printk(KERN_INFO"%d\n",m);
	printk(KERN_INFO"%f\n",div);

	return 0;
}
static void __exit my_exit(void){
	printk(KERN_INFO "Thankyou see you again\n");
}
module_init(my_init);
module_exit(my_exit);
