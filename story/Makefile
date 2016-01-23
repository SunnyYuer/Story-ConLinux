bindir=/usr/bin
shareicons=/usr/share/icons/hicolor
app=/usr/share/applications
docdir=/usr/share/doc
story:story.c story.h conio.h
	gcc story.c -o story
install:
	install story $(DESTDIR)$(bindir)/story
	install icons/16/story.png $(DESTDIR)$(shareicons)/16x16/apps/story.png
	install icons/22/story.png $(DESTDIR)$(shareicons)/22x22/apps/story.png
	install icons/24/story.png $(DESTDIR)$(shareicons)/24x24/apps/story.png
	install icons/32/story.png $(DESTDIR)$(shareicons)/32x32/apps/story.png
	install icons/48/story.png $(DESTDIR)$(shareicons)/48x48/apps/story.png
	install icons/256/story.png $(DESTDIR)$(shareicons)/256x256/apps/story.png
	install doc/COPYING $(DESTDIR)$(docdir)/story/COPYING
	install doc/AUTHORS $(DESTDIR)$(docdir)/story/AUTHORS
	install Story.txt $(DESTDIR)$(app)/Story.desktop
uninstall:
	rm -f $(bindir)/story
	rm -f $(shareicons)/16x16/apps/story.png
	rm -f $(shareicons)/22x22/apps/story.png
	rm -f $(shareicons)/24x24/apps/story.png
	rm -f $(shareicons)/32x32/apps/story.png
	rm -f $(shareicons)/48x48/apps/story.png
	rm -f $(shareicons)/256x256/apps/story.png
	rm -f $(docdir)/story/COPYING
	rm -f $(docdir)/story/AUTHORS
	rm -f $(app)/Story.desktop
