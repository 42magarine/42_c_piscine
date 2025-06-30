#! /bin/bash
find . -type f -name '*.sh' -exec basename {} .sh \;
# find . -type f -name '*.sh' -exec basename {} .sh ";""
# find . -type f -name '*.sh' -exec basename -s .sh {} \;
