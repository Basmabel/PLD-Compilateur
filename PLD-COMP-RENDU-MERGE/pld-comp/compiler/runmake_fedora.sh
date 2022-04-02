# required packages (fedora 34): antlr4 and antlr4-cpp-runtime-devel
make ANTLRJAR=/usr/share/java/stringtemplate4.jar:/usr/share/java/antlr4.jar:/usr/share/java/antlr4-runtime.jar:/usr/share/java/antlr3-runtime.jar/:/usr/share/java/treelayout.jar ANTLRINC=/usr/include/antlr4-runtime ANTLRLIB=/usr/lib/x86_64-linux-gnu/libantlr4-runtime.so "$@"

