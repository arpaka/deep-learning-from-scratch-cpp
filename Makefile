all:

lib: xtensor

xtensor:
	mkdir -p xtensor/build; \
	cd xtensor/build; \
	cmake -DBUILD_TESTS=ON ..; make; \
	test/test_xtensor;

compile:
	@for dir in `ls | grep ch`; do \
	cd $${dir} && make compile_all && cd ..; \
	done

clean:
	cd xtensor/build && make clean;
	@for dir in `ls | grep ch`; do \
	cd $${dir} && make clean_all && cd ..; \
	done

.PHONY: all lib compile clean xtensor

