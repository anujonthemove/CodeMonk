all: gen-wiki fetch
	@echo 'ok'

gen-wiki: src/gen-wiki.cpp src/util.h src/util.cpp
	@g++ -std=c++11 src/gen-wiki.cpp src/util.cpp -o build/gen-wiki

fetch: src/fetch.cpp src/util.h src/util.cpp
	@g++ -std=c++11 src/fetch.cpp src/util.cpp -o build/fetch
