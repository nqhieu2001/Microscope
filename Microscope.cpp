#include <QtGui>
#include "Microscope.h"

Microscope::Microscope()
{
	/*
	top row = toolbar
	bottom = imagewidget + setting widget
	*/
	QHBoxLayout *topRow = new QHBoxLayout;
	topRow->addWidget(Toolbar);

	QHBoxLayout *bottomRow = new QHBoxLayout;
	bottomRow->addWidget(imageWidget);
	bottomRow->addWidget(settingWidget);

	QVBoxLayout *mainLayout = new QVBoxLayout;
	mainLayout->addLayout(topRow);
	mainLayout->addLayout(bottomRow);

	setLayout(mainLayout);


}

Microscope::~Microscope()
{

}

void Microscope::createWidgets()
{
	Toolbar = new QToolbar;
	imageWidget = new ImageWidget;
	settingWidget = new SettingWidget;
	
}

void Microscope::createActions()
{

}

void Microscope::createToolbar()
{

}