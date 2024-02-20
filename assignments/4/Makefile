CXX = clang++
CXXFLAGS = -std=c++17 -g
TARGET = prog 
SRCS = main.cpp

$(TARGET): $(SRCS)
	$(CXX) $(SRCS) $(CXXFLAGS) -o $(TARGET)

.PHONY: clean

clean:
	rm -f $(TARGET)

