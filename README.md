[![C/C++ CI](https://github.com/ibancg/lingot/workflows/C/C++%20CI/badge.svg)](https://github.com/ibancg/lingot/actions)

it is a fork of LINGOT - a musical instrument tuner
===================================

<img align="right" src="http://lingot.nongnu.org/images/lingot-black-main.png">

LINGOT is a musical instrument tuner. It’s accurate, easy to use, and highly 
configurable. Originally conceived to tune electric guitars, it can be used to
tune other instruments.

It looks like an analogue tuner, with a gauge or strobe disc indicating the
relative shift to a certain note, determined automatically as the closest note
to the estimated frequency.

this fork is created to add a virtual instrument (piano roll or a fingerboard)
to display frequencies as real notes

Main features
-------------

* It is free software, distributed under the 
  [GPL license](https://www.gnu.org/licenses/old-licenses/gpl-2.0.html).   
* Quick and accurate, perfect for real-time microtonal tuning. 
* Easy to use. Just plug in your instrument and run it. 
* _LINGOT_ is a universal tuner. It can tune many musical instruments, you only
  need to provide the scale _temperaments_. For that purpose, it supports the 
  [.scl format](http://www.huygens-fokker.org/scala/scl_format.html) from the 
  [Scala project](http://www.huygens-fokker.org/scala/).   
* Configurable via GUI. It is possible to change any parameter while the
  program is running, without editing any file.

Requirements
------------

* A modest computer running _GNU/Linux_. 
* A sound card with line-in or microphone input. 
* [Jack](http://www.jackaudio.org/), 
  [ALSA](https://www.alsa-project.org/main/index.php/Main_Page), 
  [OSS](http://www.opensound.com/oss.html) or 
  [PulseAudio](https://www.freedesktop.org/wiki/Software/PulseAudio/) support.   
* [GTK+](https://www.gtk.org/) library, version _3.10_ or above.

Installation
------------

If you are building a release, just type:

```console
./configure
make install
```

If you are building a development version obtained from our VCS you will first
need to create the _configure_ script, by calling:

```console
./bootstrap
```

The supported audio systems (alsa, oss, jack, pulseaudio) and the Fast Fourier
Transform [libfftw](http://fftw.org) library can be enabled/disabled
independently via options passed to the `configure` script. The following
command displays all options and defaut value.

```console
./configure --help
```

Below a summary of the packages needed to build a development version on
_Debian-based_ systems:

```console
sudo apt-get install \
    intltool \
    libasound2-dev \
    libcunit1-dev \
    libfftw3-dev \
    libgtk-3-dev \
    libjack-jackd2-dev \
    libjson-c-dev \
    libpulse-dev \
    libtool \
    pkg-config
```

Beware that LINGOT ships an experimental shared library, whose interface could
be subject to change. If you have trouble finding the library when launching the
aplication, please consider reporting a bug, and try setting the library path
to your installation location as a work-around:

```console
LD_LIBRARY_PATH=/usr/local/lib lingot
```

Synopsis
--------

```console
lingot [-c config]
```

The `-c` option causes the search of a file named `{config}.conf` in the
`~/.config/lingot/` folder. For example:

```console
lingot -c bass
```

will take the configuration file `~/.config/lingot/bass.conf`. This is useful
for maintaining different configurations for different instruments. It's also
possible to load and save configuration files from the GUI. The default
configuration file is `~/.config/lingot/lingot.conf`.

Resources
---------

* [Official LINGOT website](http://lingot.nongnu.org/)
* [Project page in Savannah](https://savannah.nongnu.org/projects/lingot/)
* [Downloads page in Savannah](http://download.savannah.gnu.org/releases/lingot/)
