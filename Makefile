dependency:
	cd build && cmake .. --graphviz=deps.dot && dot -Tpng deps.dot -o deps.png

prepare:
	rm -rf build
	mkdir build
