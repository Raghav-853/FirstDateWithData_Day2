.PHONY: clean All

All:
	@echo "----------Building project:[ linkedlist2 - Debug ]----------"
	@cd "linkedlist2" && "$(MAKE)" -f  "linkedlist2.mk"
clean:
	@echo "----------Cleaning project:[ linkedlist2 - Debug ]----------"
	@cd "linkedlist2" && "$(MAKE)" -f  "linkedlist2.mk" clean
