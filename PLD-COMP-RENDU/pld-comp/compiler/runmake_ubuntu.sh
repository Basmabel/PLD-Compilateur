# to get the required packages (ubuntu 21.10):
#    apt install     antlr4 libantlr4-runtime-dev
# the ANTLRJAR part below is copied from /usr/bin/antlr4
make ANTLRJAR=/usr/share/java/stringtemplate4.jar:/usr/share/java/antlr4.jar:/usr/share/java/antlr4-runtime.jar:/usr/share/java/antlr3-runtime.jar/:/usr/share/java/treelayout.jar ANTLRINC=/usr/include/antlr4-runtime ANTLRLIB=/usr/lib/x86_64-linux-gnu/libantlr4-runtime.a "$@"

