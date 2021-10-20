#functions

## `hasArg(std::string)`

Accepts data without `-`
Example: hasArg("gb") not hasArg("-gb")

## `contains(std::string)`

Accepts exact data
Example:
contains("commandName")
contains("-gb") not contains("gb") (if it is argument)
