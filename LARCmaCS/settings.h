#pragma once
#include <QSettings>

class Settings : public QSettings
{
public:
	Settings();
	static QString configKeyForRobotNum(int n);
};
