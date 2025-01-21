/* user and group to drop privileges to */
static const char *user  = "hos";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[CAPS] =   "#ff7700",     /* CapsLock on */
};

/* Background image path, should be available to the user above */
static const char* background_image = "/home/hos/.local/share/dwm/background.sl";
 
/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
    { "slock.color0",       STRING,  &colorname[INIT] },
    { "slock.color4",       STRING,  &colorname[INPUT] },
    { "slock.color1",       STRING,  &colorname[FAILED] },
    { "slock.color3",       STRING,  &colorname[CAPS] },
    { "slock.background",   STRING,  &background_image },
};


/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
