CXX = clang++
CXXFLAGS = -g -std=c++17
TARGET = prog 
SRCS = main.cpp

$(TARGET): $(SRCS)
	$(CXX) $(SRCS) $(CXXFLAGS) -o $(TARGET)

.PHONY: clean

clean:
	rm -f $(TARGET)

