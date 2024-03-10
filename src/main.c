#include <locale.h>
#include <stdio.h>

#include "config.h"
#include "gettext.h"

#define _(msgid) dgettext(PACKAGE, msgid)

int main() {
  setlocale(LC_ALL, "");
  bindtextdomain(PACKAGE, LOCALEDIR);

  /* TRANSLATORS: This is a comment for translators */
  printf("%s", _("Hello, World!\n"));
  return 0;
}
