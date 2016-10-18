#pragma once
#include "Window.h"
#include "Widget.h"

Window::Window(VectorField* vectorField) {
	integrator = new RungeKuttaIntegration(vectorField, 500, 1.0f/20.0f, 1500);
	integrator->simulate();
	setWindowTitle(tr("Euler Integration"));
	Widget* widget = new Widget(integrator, this);

	QGridLayout* layout = new QGridLayout();
	layout->addWidget(widget);
	setLayout(layout);
}

Window::~Window() {

}