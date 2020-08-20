#!/usr/bin/awk

#
# Identify multiple runs of the same test, and concatenate the results onto one line for easier analysis
#
# Author: Jacob Grossbard
#

BEGIN {
	FS=",";
	OFS=",";
}

NR == 1 {
	version = $1
	data = $2
	list = $3","
}

NR > 1 {
	if ($1 == version && $2 == data) {
		list = list$3","
	} else {
		print version, data, list
		version = $1
		data = $2
		list = $3","
	}
}

