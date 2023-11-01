CFLAGS = -Wall -Wextra -Werror
TARGET = my_ngram
SRC = my_ngram.c 

$(TARGET) : $(SRC)
	gcc $(CFLAGS) -o $(TARGET) $(SRC)

.Phony: fclean 


fclean:
	rm -r $(TARGET)
