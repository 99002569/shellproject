all.out : account.cc account_test.cc 
	g++ account.cc account_test.cc -lgtest -lgtest_main -lpthread -o all.out

run:all.out
	./all.out

clean:
	rm all.out
