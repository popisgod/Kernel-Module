obj-m += filter-traffic.o

PWD := $(CURDIR)

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
	rm -f $(PWD)/*.cmd $(PWD)/*.order $(PWD)/*.symvers $(PWD)/*.mod $(PWD)/*.o
