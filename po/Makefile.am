# Usage:
#
# Regenerate the pot file for the project:
#   make po
#
# Recompile the po files to gmo files:
#   make gmo
#
# Create new translation (po file):
#   msginit --locale=[locale]
#
# Update existing translation with new messages:
#   msgmerge --update [po file] [pot file]
#

# List of source files containing translatable strings.
POTFILES = $(top_srcdir)/src/main.c

# List of languages to generate translations for.
LINGUAS = fi

POTFILE = $(PACKAGE).pot
POFILES = $(LINGUAS:=.po)
GMOFILES = $(LINGUAS:=.gmo)

# Files to include when running make dist.
EXTRA_DIST = $(POTFILE) $(POFILES) $(GMOFILES)

pot: $(POTFILE)
gmo: $(GMOFILES)

$(POTFILE): $(POTFILES)
	xgettext --keyword=_ --language=C --add-comments --sort-output -o $@ $(POTFILES)

$(GMOFILES): %.gmo: %.po
	msgfmt -c -o $@ $<

install-data-local:
	for lang in $(LINGUAS); do \
		$(MKDIR_P) $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES; \
		$(INSTALL) $$lang.gmo $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE).mo; \
	done
