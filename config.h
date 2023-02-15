#define CMDLENGTH 45
#define DELIMITER " "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("~/.local/bin/weather",    1800, 17),
	BLOCK("~/.local/bin/pacupdate",   1800,    18),
	BLOCK("~/.local/bin/volume",    0, 19),
	BLOCK("~/.local/bin/kernel",    43200, 0),
	BLOCK("~/.local/bin/memory",  5,   20),
	BLOCK("~/.local/bin/clock",    5,    24)
};
