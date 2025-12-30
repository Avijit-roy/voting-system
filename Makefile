CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -std=c99 -I./include
SRCDIR = src
OBJDIR = build
TARGET = voting_system

SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))

.PHONY: all clean run help

all: $(TARGET)

$(TARGET): $(OBJECTS)
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -o $@ $^
	@echo "Build complete!"

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(TARGET)
	@echo "Clean complete!"

run: $(TARGET)
	./$(TARGET)

help:
	@echo "Commands:"
	@echo "  make all    - Build the project"
	@echo "  make clean  - Remove build files"
	@echo "  make run    - Build and run"