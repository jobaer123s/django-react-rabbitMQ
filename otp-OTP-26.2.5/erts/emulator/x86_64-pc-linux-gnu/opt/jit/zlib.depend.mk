$(ZLIB_OBJDIR)/adler32.o: zlib/adler32.c zlib/zutil.h zlib/zlib.h zlib/zconf.h
$(ZLIB_OBJDIR)/compress.o: zlib/compress.c zlib/zlib.h zlib/zconf.h
$(ZLIB_OBJDIR)/crc32.o: zlib/crc32.c zlib/zutil.h zlib/zlib.h zlib/zconf.h zlib/crc32.h
$(ZLIB_OBJDIR)/uncompr.o: zlib/uncompr.c zlib/zlib.h zlib/zconf.h
$(ZLIB_OBJDIR)/deflate.o: zlib/deflate.c zlib/deflate.h zlib/zutil.h zlib/zlib.h \
 zlib/zconf.h
$(ZLIB_OBJDIR)/trees.o: zlib/trees.c zlib/deflate.h zlib/zutil.h zlib/zlib.h \
 zlib/zconf.h zlib/trees.h
$(ZLIB_OBJDIR)/zutil.o: zlib/zutil.c zlib/zutil.h zlib/zlib.h zlib/zconf.h zlib/gzguts.h
$(ZLIB_OBJDIR)/inflate.o: zlib/inflate.c zlib/zutil.h zlib/zlib.h zlib/zconf.h \
 zlib/inftrees.h zlib/inflate.h zlib/inffast.h zlib/inffixed.h
$(ZLIB_OBJDIR)/inftrees.o: zlib/inftrees.c zlib/zutil.h zlib/zlib.h zlib/zconf.h \
 zlib/inftrees.h
$(ZLIB_OBJDIR)/inffast.o: zlib/inffast.c zlib/zutil.h zlib/zlib.h zlib/zconf.h \
 zlib/inftrees.h zlib/inflate.h zlib/inffast.h
