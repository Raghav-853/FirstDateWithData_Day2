.PHONY: clean All

All:
	@echo "----------Building project:[ pointer004 - Debug ]----------"
	@cd "pointer004" && "$(MAKE)" -f  "pointer004.mk"
clean:
	@echo "----------Cleaning project:[ pointer004 - Debug ]----------"
	@cd "pointer004" && "$(MAKE)" -f  "pointer004.mk" clean
