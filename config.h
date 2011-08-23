static const char *font        = "-*-terminus-medium-r-normal-*-12-*-*-*-*-*-*-*";
static const char *normbgcolor = "#0f0f0f";
static const char *normfgcolor = "#008787";
static const char *selbgcolor  = "#0f0f0f";
static const char *selfgcolor  = "#00cc55";
static const char *before      = "<";
static const char *after       = ">";
static const int tabwidth      = 200;
static const Bool foreground   = False;

static Key keys[] = {
	{ ControlMask, XK_t,            focusonce,  { 0 } },
	{ ControlMask, XK_t,            spawn,
		{ .v = (char*[]){ "vimprobable2", "-e", winid, NULL} } },
	{ ControlMask, XK_n,            rotate,     { .i = +1 } },
	{ ControlMask, XK_p,            rotate,     { .i = -1 } },
	{ Mod1Mask,    XK_Tab,          rotate,     { .i = 0 } },
	{ Mod1Mask,    XK_parenleft,    move,       { .i = 0 } },
	{ Mod1Mask,    XK_parenright,   move,       { .i = 1 } },
	{ Mod1Mask,    XK_braceright,   move,       { .i = 2 } },
	{ Mod1Mask,    XK_plus,         move,       { .i = 3 } },
	{ Mod1Mask,    XK_braceleft,    move,       { .i = 4 } },
	{ Mod1Mask,    XK_bracketright, move,       { .i = 5 } },
	{ Mod1Mask,    XK_ampersand,    move,       { .i = 6 } },
	{ Mod1Mask,    XK_exclam,       move,       { .i = 7 } },
	{ Mod1Mask,    XK_equal,        move,       { .i = 8 } },
	{ Mod1Mask,    XK_asterisk,     move,       { .i = 9 } },
	{ Mod1Mask,    XK_q,            killclient, { 0 } },
};
