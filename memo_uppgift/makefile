CC=gcc  #compiler
TARGET=memo #target file name
DEPS=memo.h
CFLAGS=-I.
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

memo: libmemo.o memo.o 
	$(CC) -o $(TARGET) memo.c libmemo.c $(CFLAGS)
 
clean:
	rm *.o $(TARGET)