#include "EulerIntegration.h"

EulerIntegration::EulerIntegration(VectorField* vectorField) {
	background = QBrush(QColor(255, 255, 0));
}

void EulerIntegration::paint(QPainter* painter, QPaintEvent* event, int elapsed) {
	painter->fillRect(event->rect(), background);
}
