/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx  = 1;        /* border pixel of windows */
static const unsigned int snap      = 32;       /* snap pixel */
static const unsigned int systraypinning = 0;   /* 0: sloppy systray follows selected monitor, >0: pin systray to monitor X */
static const unsigned int systrayonleft = 0;    /* 0: systray in the right corner, >0: systray on left of status text */
static const unsigned int systrayspacing = 2;   /* systray spacing */
static const int systraypinningfailfirst = 1;   /* 1: if pinning fails, display systray on the first monitor, False: display systray on the last monitor*/
static const int showsystray        = 1;        /* 0 means no systray */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
enum showtab_modes { showtab_never, showtab_auto, showtab_nmodes, showtab_always};
static const int showtab            = showtab_auto; /* Default tab bar show mode */
static const int toptab             = False;        /* False means bottom tab bar */
static const char *fonts[]          = { "FiraCode Nerd Font:size=11:style=regular" };
static const char normBG[]          = "#1f1d2e";
static const char normFG[]          = "#e0def4";
static const char normBorder[]      = "#191724";
static const char selBG[]           = "#1f1d2e";
static const char selFG[]           = "#eb6f92";
static const char selBorder[]       = "#e0def4";
static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { normFG,    normBG,    normBorder },
	[SchemeSel]  = { selFG,     selBG,     selBorder  },
};

/* tagging */
static const char *tags[] = { "", "󰒱", "󰈹", "󰊫", "󰲸" };

#define FLOAT(CLASS, INSTANCE) { CLASS, INSTANCE, NULL, 0, 1, 1 }

static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class              instance      title  tags mask  isfloating  monitor */
	{ "gnome-calculator", NULL,         NULL,  0,         1,          -1 },
	{ "Gpick",            NULL,         NULL,  0,         1,          -1 },
	{ "Pavucontrol",      NULL,         NULL,  0,         1,          -1 },
	{ "Blueman-manager",  NULL,         NULL,  0,         1,          -1 },
	{ "Sxiv",             NULL,         NULL,  0,         0,          -1 },
	{ "Arandr",           NULL,         NULL,  0,         1,          -1 },
	{ "st-256color",      "st-floating",NULL,  0,         1,          -1 },
	{ "File-roller",      NULL,         NULL,  0,         1,          -1 },
	{ "Slack",            NULL,         NULL,  1 << 1,    0,           1 },
	{ "thunderbird",      NULL,         NULL,  1 << 3,    0,           1 },
	{ "thunderbird",      "Mailnews",   NULL,  0,         1,          -1 },
	{ "thunderbird",      "Msgcompose", NULL,  0,         1,          -1 },
};


/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "",        tile },    /* first entry is default */
	{ "󰨑",        NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
};

static const char *monocles[] = { "󰼏", "󰼐", "󰼑", "󰼒", "󰼓", "󰼔", "󰼕", "󰼖", "󰼗", "󰼘" };

/* key definitions */
#define MODKEY Mod1Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },


/* commands */
static const char *termcmd[]       = { "st",            NULL                               };
static const char *termfloatcmd[]  = { "st",            "-n", "st-floating", NULL          };
static const char *dmenu_apps[]    = { "dmenu_apps",    NULL                               };
static const char *dmenu_pass[]    = { "dmenu_pass",    NULL                               };
static const char *dmenu_window[]  = { "dmenu_window",  NULL                               };
static const char *dmenu_pdf[]     = { "dmenu_pdf",     NULL                               };
static const char *tmux_open[]     = { "dmenu_session", "-o", NULL                         };
static const char *tmux_attach[]   = { "dmenu_session", "-a", NULL                         };
static const char *browser[]       = { "chromium",      NULL                               };
static const char *screengrab[]    = { "screengrab",    "-r", NULL                         };

static const Key keys[] = {
	/* modifier                     key           function        argument */
	{ MODKEY,                       XK_Return,    spawn,          {.v = termcmd } },
	{ MODKEY|ShiftMask,             XK_Return,    spawn,          {.v = termfloatcmd } },
	{ MODKEY|ShiftMask,             XK_r,         quit,           {1 } },
	{ MODKEY,                       XK_q,         killclient,     {0} },
	{ MODKEY|ShiftMask,             XK_q,         quit,           {0} },

	{ MODKEY,                       XK_n,         focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_p,         focusstack,     {.i = -1 } },
	{ MODKEY,                       XK_i,         incnmaster,     {.i = +1 } },
	{ MODKEY,                       XK_o,         incnmaster,     {.i = -1 } },
	{ MODKEY,                       XK_h,         setmfact,       {.f = -0.05} },
	{ MODKEY,                       XK_l,         setmfact,       {.f = +0.05} },
	{ MODKEY,                       XK_b,         togglebar,      {0} },
	{ MODKEY,                       XK_v,         tabmode,        {-1} },

	{ MODKEY,                       XK_BackSpace, zoom,           {0} },
	{ MODKEY,                       XK_t,         setlayout,      {.v = &layouts[0]} },
	{ MODKEY,                       XK_f,         setlayout,      {.v = &layouts[1]} },
	{ MODKEY,                       XK_m,         setlayout,      {.v = &layouts[2]} },

	{ MODKEY,                       XK_space,     togglefloating, {0} },
	{ MODKEY,                       XK_0,         view,           {.ui = ~0 } },

	{ MODKEY,                       XK_Tab,       focusmon,       {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_Tab,       tagmon,         {.i = -1 } },

	{ MODKEY,                       XK_minus,     spawn,          {.v = screengrab   } },
	{ MODKEY,                       XK_Print,     spawn,          {.v = screengrab   } },
	{ MODKEY,                       XK_grave,     spawn,          {.v = dmenu_apps   } },
	{ MODKEY,                       XK_s,         spawn,          {.v = dmenu_pass   } },
	{ MODKEY,                       XK_d,         spawn,          {.v = dmenu_window } },
	{ MODKEY,                       XK_comma,     spawn,          {.v = dmenu_pdf    } },
	{ MODKEY,                       XK_w,         spawn,          {.v = browser      } },
	{ MODKEY,                       XK_e,         spawn,          {.v = tmux_open    } },
	{ MODKEY,                       XK_a,         spawn,          {.v = tmux_attach  } },

	TAGKEYS( XK_1, 0 )
	TAGKEYS( XK_2, 1 )
	TAGKEYS( XK_3, 2 )
	TAGKEYS( XK_4, 3 )
	TAGKEYS( XK_5, 4 )
	TAGKEYS( XK_6, 4 )
	TAGKEYS( XK_7, 4 )
	TAGKEYS( XK_8, 4 )
	TAGKEYS( XK_9, 4 )
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static const Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
  { ClkStatusText,        0,              Button3,        spawn,          {.v = termcmd} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
  { ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
	{ ClkTabBar,            0,              Button1,        focuswin,       {0} },
};

