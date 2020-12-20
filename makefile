$(obj):
	g++ src/$(obj).cpp -o $(obj).o
	./$(obj).o < $(obj).input

clean:
	rm *.o
