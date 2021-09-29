-----BEGIN PGP SIGNED MESSAGE-----
Hash: SHA512

Format: 3.0 (quilt)
Source: qtbase-opensource-src
Binary: libqt5core5a, libqt5gui5, qt5-gtk-platformtheme, qt5-flatpak-platformtheme, qt5-xdgdesktopportal-platformtheme, libqt5network5, libqt5opengl5, libqt5sql5, libqt5sql5-mysql, libqt5sql5-odbc, libqt5sql5-psql, libqt5sql5-sqlite, libqt5sql5-tds, libqt5sql5-ibase, libqt5xml5, libqt5dbus5, libqt5test5, libqt5concurrent5, libqt5widgets5, libqt5printsupport5, qtbase5-dev, qtbase5-private-dev, libqt5opengl5-dev, qtbase5-dev-tools, qt5-qmake-bin, qt5-qmake, qtbase5-examples, qt5-default, qtbase5-doc, qtbase5-doc-html, qtbase5-doc-dev
Architecture: any all
Version: 5.12.8+dfsg-0kylin1k7
Maintainer: Debian Qt/KDE Maintainers <debian-qt-kde@lists.debian.org>
Uploaders: Sune Vuorela <sune@debian.org>, Pino Toscano <pino@debian.org>, Lisandro Damián Nicanor Pérez Meyer <lisandro@debian.org>, Timo Jyrinki <timo@debian.org>, Dmitry Shachnev <mitya57@debian.org>, Simon Quigley <tsimonq2@debian.org>
Homepage: https://www.qt.io/developers/
Standards-Version: 4.5.0
Vcs-Browser: https://salsa.debian.org/qt-kde-team/qt/qtbase
Vcs-Git: https://salsa.debian.org/qt-kde-team/qt/qtbase.git
Build-Depends: debhelper (>= 11), default-libmysqlclient-dev, dh-exec, dpkg-dev (>= 1.17.14), firebird-dev [kfreebsd-any linux-any], freetds-dev, libasound2-dev [linux-any], libatspi2.0-dev, libcups2-dev, libdbus-1-dev, libdouble-conversion-dev, libdrm-dev [linux-any], libfontconfig1-dev, libfreetype6-dev, libgbm-dev [linux-any kfreebsd-any], libgl-dev, libgles-dev, libglib2.0-dev, libglu1-mesa-dev | libglu-dev, libgtk-3-dev, libharfbuzz-dev (>= 1.6.0~), libicu-dev, libinput-dev [linux-any], libjpeg-dev, libmtdev-dev [linux-any], libpcre2-dev, libpng-dev, libpq-dev, libproxy-dev, libpulse-dev, libsqlite3-dev, libssl-dev, libudev-dev [linux-any], libvulkan-dev [linux-any], libx11-dev, libx11-xcb-dev, libxcb-glx0-dev, libxcb-icccm4-dev, libxcb-image0-dev, libxcb-keysyms1-dev, libxcb-randr0-dev, libxcb-render-util0-dev, libxcb-render0-dev, libxcb-shape0-dev, libxcb-shm0-dev, libxcb-sync-dev, libxcb-xfixes0-dev, libxcb-xinerama0-dev, libxcb-xinput-dev, libxcb-xkb-dev, libxcb1-dev, libxext-dev, libxi-dev, libxkbcommon-dev, libxkbcommon-x11-dev, libxrender-dev, pkg-kde-tools (>= 0.15.17~), publicsuffix, qt5-qmake-bin <cross>, unixodbc-dev, zlib1g-dev
Build-Depends-Indep: qdoc-qt5 (>= 5.12.8~) <!nodoc>, qhelpgenerator-qt5 (>= 5.12.8~) <!nodoc>, qtattributionsscanner-qt5 (>= 5.12.8~) <!nodoc>
Package-List:
 libqt5concurrent5 deb libs optional arch=any
 libqt5core5a deb libs optional arch=any
 libqt5dbus5 deb libs optional arch=any
 libqt5gui5 deb libs optional arch=any
 libqt5network5 deb libs optional arch=any
 libqt5opengl5 deb libs optional arch=any
 libqt5opengl5-dev deb libdevel optional arch=any
 libqt5printsupport5 deb libs optional arch=any
 libqt5sql5 deb libs optional arch=any
 libqt5sql5-ibase deb libs optional arch=kfreebsd-any,linux-any
 libqt5sql5-mysql deb libs optional arch=any
 libqt5sql5-odbc deb libs optional arch=any
 libqt5sql5-psql deb libs optional arch=any
 libqt5sql5-sqlite deb libs optional arch=any
 libqt5sql5-tds deb libs optional arch=any
 libqt5test5 deb libs optional arch=any
 libqt5widgets5 deb libs optional arch=any
 libqt5xml5 deb libs optional arch=any
 qt5-default deb libdevel optional arch=any
 qt5-flatpak-platformtheme deb oldlibs optional arch=any
 qt5-gtk-platformtheme deb libs optional arch=any
 qt5-qmake deb devel optional arch=any
 qt5-qmake-bin deb devel optional arch=any
 qt5-xdgdesktopportal-platformtheme deb libs optional arch=any
 qtbase5-dev deb libdevel optional arch=any
 qtbase5-dev-tools deb devel optional arch=any
 qtbase5-doc deb doc optional arch=all profile=!nodoc
 qtbase5-doc-dev deb libdevel optional arch=all profile=!nodoc
 qtbase5-doc-html deb doc optional arch=all profile=!nodoc
 qtbase5-examples deb x11 optional arch=any
 qtbase5-private-dev deb libdevel optional arch=any
Checksums-Sha1:
 53504e3b787728b298133db4051e84ba90fcbfb9 46525916 qtbase-opensource-src_5.12.8+dfsg.orig.tar.xz
 50d89720d7c0931b9e6d17487220eedaeec49763 259776 qtbase-opensource-src_5.12.8+dfsg-0kylin1k7.debian.tar.xz
Checksums-Sha256:
 ba4ed89203ae432feebf5ed48262a5e441ce28448181c722e69c9bfe76012729 46525916 qtbase-opensource-src_5.12.8+dfsg.orig.tar.xz
 c2c3f65201c75597d58a31d0ac71e42cad035b0d205f4ad9bcfa44bd99d8b8cb 259776 qtbase-opensource-src_5.12.8+dfsg-0kylin1k7.debian.tar.xz
Files:
 22c9a73a5cb34755bc6cdce21f6c96c4 46525916 qtbase-opensource-src_5.12.8+dfsg.orig.tar.xz
 39e7909146484e644c0d6675fb757821 259776 qtbase-opensource-src_5.12.8+dfsg-0kylin1k7.debian.tar.xz

-----BEGIN PGP SIGNATURE-----

iQIzBAEBCgAdFiEE00OaJJZyKX4O/di6sxkNbI2NWdkFAmE+5psACgkQsxkNbI2N
WdnR7hAAieiB5SoSUH6tHeRN3Kdtb7lBq0OGhjyV0hG+UPsNKQ7opL5zpYOvop41
WVoZhyPhW96j6zSlYhC/6kbO0cze1v/N3FQlsMonm+ptzL8YbFkCA315VdsAI/Qw
xRKheIx2uQ2GBzrDaxcyymmEZzPSt47hpFouZ3X7/h7jpRlV0OB5yyD2SoRIakLW
/bvVdWSUSIj0avliSNzs086kA7tK46rcIsmgfGU86b/zOfg8YC66wOTIgRwQYab3
eLLm5c2kWK1wxxQ68nuPu8ppmip7ei5v5W2W8G7vadVRcrNisR8qRTK1DPXSjhbH
FvNNA5hTqthnfnX4Ubrg/XHLVMBQQyV3/E/7glGgWKYVp6Z/lMgclCuFQ4WLJtmr
xFaM/TMG+DjbTrkkXtftp/M9uDwEZ7rRM7SXb/WhYt0RoamNd4kMzVYBIbatl7K3
mlaYO9r9OM/ggzXD8HUwzyHBRtSYCJ4uQkiaP7gB/KXrSwAvQh/kKbRnDhjl2Uvr
29uDbh+qGRXQUewls9xx68EtPRDWlL2rJn23h+Gw8RvAsX+5d9HqeRLn4CbEo3l6
pgGsLfIP77OTir/HO1gFkw2qZCjIvFTk4uWA6xYbWPOseHuMxEzcrBpw3Hkd3Z5Y
6LIdO8PiUooum0roNKm7sRy6LS7RALI4MKkC8IFwD0txPGf4GUI=
=8OqW
-----END PGP SIGNATURE-----
