.PHONY: clean All

All:
	@echo "----------Building project:[ SimpleWidgetFB - Release ]----------"
	@cd "SimpleWidgetFB" && $(MAKE) -f  "SimpleWidgetFB.mk"
clean:
	@echo "----------Cleaning project:[ SimpleWidgetFB - Release ]----------"
	@cd "SimpleWidgetFB" && $(MAKE) -f  "SimpleWidgetFB.mk" clean
