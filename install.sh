#!/usr/bin/bash

PLOTTING_DIR=$PWD
QWT_VERSION=6.1.3
QWT_SERVER=https://sourceforge.net/projects/qwt/files/qwt/
QWT_DL_URL=$QWT_SERVER$QWT_VERSION"/qwt-"$QWT_VERSION".tar.bz2"
QWT_PATH="/usr/local/qwt-"$QWT_VERSION

#echo $QWT_DL_URL

# Check if wget exist or not
if ! [ -x "$(command -v wget)" ]; then
	echo "Error, wget is not installed. Aborting..." >&2
	aborting_process()
fi

echo "Downloading qwt-"$QWT_VERSION"..."
mkdir /tmp/qwt/
wget -P /tmp/qwt/ $QWT_DL_URL &>/dev/null
t
echo "Compiling and installing qwt-"$QWT_VERSION"..."
tar -xvjf qwt-$QWT_VERSION .tar.bz2
cp /tmp/qwt/qwt-$QWT_VERSION $QWT_PATH
rmdir /tmp/qwt/
cd $QWT_PATH

# now follow the qwt installation procedure
# PAY ATTENTION:
# usually qmake has the bin name 'qmake'
# but in some cases can be named 'qmake-qt5' (e.g. CENTOS)

# check if one of the qmake version is installed:
qmake_present=false
if [ -x "$(command -v qmake)" ]; then
	qmake_present=true
	QMAKE_BIN=qmake
#elif [ -x "$(command -v qmake-qt5)" ];
# TODO: add other versions of qtmake bin
fi

if [ $qmake_present = false ]; then
	echo "Please, install Qt before continue the installation. Aborting..."
	aborting_process()
fi

qmake qwt.pro
make
sudo make install
LD_LIBRARY_PATH=$QWT_PATH"/lib"
export LD_LIBRARY_PATH

# now let's compile and install plotting
echo "Compiling and installing plotting..."
cd $PLOTTING_DIR
$QMAKE_BIN plotting.pro
make
make clean
rmdir obj moc
echo "Installation finished successful, exiting..."


function aborting_process(){
		make clean
		rmdir /tmp/qwt/
		rmdir $QWT_PATH
		cd $PLOTTING_DIR
		exit 1;
}
