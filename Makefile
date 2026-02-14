.PHONY: all clean

all:
	@echo "Engine build shim: no standalone Make targets are defined in this repository."

clean:
	@rm -rf build
	@echo "Cleaned top-level build artifacts."
