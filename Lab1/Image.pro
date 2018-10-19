TARGET=Image
SOURCES += main.cpp
OTHER_FILES+=README.md
QMAKE_CXXFLAGS += $$system(pkg-config --cflags Magick++)
LIBS+= $$system(pkg-config --libs Magick++)
CONFIG+=c++14
