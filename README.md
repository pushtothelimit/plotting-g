# Plotting

## Requirements
Plotting is based on Qt and QWT.
You just need to have installed:
* Qt
* wget
 
## Build and install

First clone the repository.
	
	% git clone https://github.com/pushtothelimit/plotting-g.git
	% cd plotting-g
	
After you have to execute the installer.

	% ./install.sh
	
## Run
You just need to run 

	% ./plots

to start the program.

## Tested on:

- [x] Archlinux
- [ ] Ubuntu 18.04
- [x] Debian 9.4
- [x] Centos 7
 
## Environment settings
The following list describes the setup used:
1) Linux kernel 4.16.6-1-ARCH
2) g++ (GCC) 7.2.1
3) QMake version 3.1 Using Qt version 5.10.0 in /usr/lib (check with "qmake -v")
4) package qwt-6.1.3 (installation instructions at http://qwt.sourceforge.net/qwtinstall.html)


## TODO
- [ ] Documentation
- [ ] Improve plot view (axis name, zoom, colors, line thickness)
- [ ] Implement linear FIT or other interpolation methods
- [ ] Windows & OSX support
