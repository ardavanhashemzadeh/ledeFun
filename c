for f in /sys/class/net/* ; do iwinfo ${f##/*/} assoclist ; done
