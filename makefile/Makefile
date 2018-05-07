material=$(patsubst %.c,%.o,$(wildcard ./*.c))
target=add
header=$(patsubst %.o,%.h,$(filter-out $(material), a.o))
$(target):$(material)
	gcc $^ -o $@ -I $(header)

%.o:%.c
	gcc $< -c

.PHONY:clean
clean:
	-rm *.o $(target) -f
