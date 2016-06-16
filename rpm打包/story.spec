Name:		story
Version:	0.3.3
Release:	1%{?dist}
Summary:	A game
Group:		Amusements/Games
License:	GPLv3+
URL:		http://
Source0:	%{name}-%{version}.tar.gz

%description
以传奇故事为背景，有战士，法师，道士三个职业。

%prep
%autosetup

%build
%configure
make %{?_smp_mflags}

%install
mkdir -p %{buildroot}%{_bindir}/
mkdir -p %{buildroot}%{_datadir}/applications/
mkdir -p %{buildroot}%{_datadir}/icons/hicolor/16x16/apps/
mkdir -p %{buildroot}%{_datadir}/icons/hicolor/22x22/apps/
mkdir -p %{buildroot}%{_datadir}/icons/hicolor/24x24/apps/
mkdir -p %{buildroot}%{_datadir}/icons/hicolor/32x32/apps/
mkdir -p %{buildroot}%{_datadir}/icons/hicolor/48x48/apps/
mkdir -p %{buildroot}%{_datadir}/icons/hicolor/256x256/apps/
mkdir -p %{buildroot}%{_defaultdocdir}/story/
make install DESTDIR=%{buildroot}

%clean
rm -rf %{buildroot}
rm -rf %{_builddir}/%{name}-%{version}

%files
%{_bindir}/story
%{_datadir}/applications/Story.desktop
%{_defaultdocdir}/story/AUTHORS
%{_defaultdocdir}/story/COPYING
%{_datadir}/icons/hicolor/16x16/apps/story.png
%{_datadir}/icons/hicolor/22x22/apps/story.png
%{_datadir}/icons/hicolor/24x24/apps/story.png
%{_datadir}/icons/hicolor/32x32/apps/story.png
%{_datadir}/icons/hicolor/48x48/apps/story.png
%{_datadir}/icons/hicolor/256x256/apps/story.png

%changelog
* Thu Jun 16 2016 Yuer <956768385@qq.com> - 0.3.3-1
- bugfix

* Sat Jan 23 2016 Yuer <956768385@qq.com> - 0.3.2-1
- bugfix

* Wed Dec 23 2015 Yuer <956768385@qq.com> - 0.3.1-1
- change icon
