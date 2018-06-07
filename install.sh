#!/usr/bin/bash

QWT_VERSION=6.1.3
QWT_SERVER=https://sourceforge.net/projects/qwt/files/qwt/
QWT_DL_URL=$QWT_SERVER$QWT_VERSION"/qwt-"$QWT_VERSION".tar.bz2"
QWT_PATH="/usr/local/qwt-"$QWT_VERSION

#echo $QWT_DL_URL

# Check if wget exist or not
if ! [ -x "$(command -v wget)" ]; then
	echo "Error, wget is not installed." >&2
	exit 1
fi

echo "Downloading qwt-"$QWT_VERSION"..."
mkdir /tmp/qwt/
wget -P /tmp/qwt/ $QWT_DL_URL &>/dev/null
t
echo "Compiling and installing qwt-"$QWT_VERSION"..."
tar -xvjf qwt-$QWT_VERSION .tar.bz2
cp /tmp/qwt/qwt-$QWT_VERSION $QWT_PATH
rmdir /tmp/qwt/

# now follow the qwt installation procedure
