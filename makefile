$(obj):
	g++ src/$(obj).cpp -o $(obj).o
	INPUT := input/$(obj).input
	ifeq ($(wildcard $(INPUT)),)
		./$(obj).o < input/$(obj).input
	else
		./$(obj).o
	endif

clean:
	rm *.o
