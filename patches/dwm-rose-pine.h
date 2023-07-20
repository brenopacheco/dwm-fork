# Apply rose-pine theme
# Taken from https://github.com/motolla/dwm-rose/blob/main/config.h

diff --git a/dwm.c b/dwm.c
--- a/dwm.c
+++ b/dwm.c
@@ -59,7 +59,12 @@
 
 /* enums */
 enum { CurNormal, CurResize, CurMove, CurLast }; /* cursor */
-enum { SchemeNorm, SchemeSel }; /* color schemes */
+enum { SchemeNorm, SchemeSel,
+  SchemeTag, SchemeTag1, SchemeTag2, SchemeTag3,
+  SchemeTag4, SchemeTag5, SchemeTag6, SchemeLayout,
+  SchemeTitle, SchemeTitleFloat,
+  SchemeTitle1, SchemeTitle2, SchemeTitle3,
+  SchemeTitle4, SchemeTitle5, SchemeTitle6 }; /* color schemes */
 enum { NetSupported, NetWMName, NetWMState, NetWMCheck,
        NetWMFullscreen, NetActiveWindow, NetWMWindowType,
        NetWMWindowTypeDialog, NetClientList, NetDesktopNames, NetDesktopViewport, NetNumberOfDesktops, NetCurrentDesktop, NetLast }; /* EWMH atoms */
@@ -327,15 +332,39 @@ static const char *altbarcmd        = "$HOME/bar.sh"; /* Alternate bar launch co
 static const int vertpad            = 10;       /* vertical padding of bar */
 static const int sidepad            = 10;       /* horizontal padding of bar */
 static const char *fonts[]          = { "monospace:size=10" };
-static const char col_gray1[]       = "#222222";
-static const char col_gray2[]       = "#444444";
-static const char col_gray3[]       = "#bbbbbb";
-static const char col_gray4[]       = "#eeeeee";
-static const char col_cyan[]        = "#005577";
-static const char *colors[][3] = {
-    /*               fg         bg         border   */
-    [SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
-    [SchemeSel]  = { col_gray4, col_cyan,  col_cyan  },
+
+static const char bg0[]      = "#191724";
+static const char bg1[]      = "#1f1d2e";
+// static const char bg2[]      = "#26233a";
+static const char fg0[]      = "#e0def4";
+static const char fg1[]      = "#6e6a86";
+static const char fg2[]      = "#908caa";
+static const char red[]      = "#eb6f92";
+static const char yellow[]   = "#f6c177";
+static const char rose[]     = "#ebbcba";
+static const char bluu[]     = "#31748f";
+static const char cyan[]     = "#9ccfd8";
+static const char purple[]   = "#c4a7e7";
+
+static const char *colors[][3]  = {
+  /*                     fg      bg    border */
+  [SchemeNorm]       = { fg1,    bg0,  fg2 },
+  [SchemeSel]        = { bg1,    rose, rose },
+  [SchemeTag]        = { bg0,    bg1,  bg0 },
+  [SchemeTag1]       = { rose,   bg0,  bg1 },
+  [SchemeTag2]       = { red,    bg0,  bg1 },
+  [SchemeTag3]       = { yellow, bg0,  bg1 },
+  [SchemeTag4]       = { bluu,   bg0,  bg1 },
+  [SchemeTag5]       = { purple, bg0,  bg1 },
+  [SchemeTag6]       = { cyan,   bg0,  bg1 },
+  [SchemeLayout]     = { rose,   bg0,  bg1 },
+  [SchemeTitle]      = { fg0,    bg0,  bg1 },
+  [SchemeTitle1]     = { rose,   bg0,  bg1 },
+  [SchemeTitle2]     = { red,    bg0,  bg1 },
+  [SchemeTitle3]     = { yellow, bg0,  bg1 },
+  [SchemeTitle4]     = { bluu,   bg0,  bg1 },
+  [SchemeTitle5]     = { purple, bg0,  bg1 },
+  [SchemeTitle6]     = { cyan,   bg0,  bg1 },
 };
 
 /* tagging */
