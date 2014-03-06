DIRS += cache-miss

all:
	for dir in $(DIRS); do (cd $$dir; make $1 || exit 1) || exit 1; done
