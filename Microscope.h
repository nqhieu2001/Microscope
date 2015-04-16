#ifndef MICROSCOPE_H
#define MICROSCOPE_H

#include <QMainWindow>

class Microscope: public QMainWindow
{
	Q_OBJECT

public:
	Microscope();
	~Microscope();

protected:

private slots:

private:
	void createWidgets();
	void createActions();
	void createToolbar();

	QToolbar *Toolbar;

	ImageWidget *imageWidget;
	SettingWidget *settingWidget;

	int mode = 0 // 0 for microscope, 1 for viewing
};

#endif
