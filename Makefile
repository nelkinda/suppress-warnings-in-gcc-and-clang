dirs:=$(wildcard */)

.PHONY: all
all: $(dirs)

.PHONY: clean
clean::
	$(MAKE) TARGETS=clean

.PHONY: $(dirs)
$(dirs):
	make -C $@ $(TARGETS)
