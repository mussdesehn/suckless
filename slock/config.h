/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#E22425",   /* wrong password */
	[CAPS] =   "red",       /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 5;

/* default message */
static const char * message = "Think Correctly";

/* text color */
static const char * text_color = "#E22425";

/* text size (must be a valid size) */
static const char * font_name = "-adobe-helvetica-bold-r-normal--24-240-75-75-p-138-iso10646-1";

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=5;

/*Enable Pixelation*/
/* #define PIXELATION */
/*Set pixelation radius*/
/*static const int pixelSize=5; */

/* time in seconds before the monitor shuts down */
static const int monitortime = 2;

/* allow control key to trigger fail on clear */
static const int controlkeyclear = 0;
