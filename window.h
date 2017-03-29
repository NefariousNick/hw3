// window.h
// The Window class has the main Qt components and links together the GUI with your scene graph

#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QtWidgets>
#include <QSlider>
#include <QColor>
#include "animal.h"
#pragma once

namespace Ui {
class Window;
}

class Window : public QWidget
{
    Q_OBJECT
	Q_PROPERTY(QColor color READ color NOTIFY colorChanged)
public:
    explicit Window(QWidget *parent = 0);
    ~Window(); 
	QStandardItemModel* model;
	void animate(int value);
	Node* root;					//static pointer to the root
	QColor color() const {
		return m_color;
	}
	int animCount;
	int userSpecified;
	
protected:
    void keyPressEvent(QKeyEvent *event);

	signals:
		void colorChanged(QColor arg);

	public slots :
		void on_treeView_currentItemChanged(const QItemSelection &selected, const QItemSelection &deselected);  // Called when a different item in the tree view is selected. 
		void on_xTransSlider_valueChanged(float value); // Called when the slider is slid. 
		void on_yTransSlider_valueChanged(float value); // Called when the slider is slid. 
		void on_xScaleSlider_valueChanged(float value); // Called when the slider is slid. 
		void on_yScaleSlider_valueChanged(float value); // Called when the slider is slid. 
		void on_rotationDial_valueChanged(float angle); // Called when the slider is slid. 
		void on_spawnButton_clicked();					// Called when the button is clicked. 
        void on_renderButton_clicked();				// Called when the button is clicked.
		void on_userSpinBox_valueChanged(int arg1);
		void on_timelineSlider_valueChanged(int value); // Called when the slider is slid. 
		void on_animButton_clicked();
		void animate();
	private slots:
		void onColorChanged();

private:
    Ui::Window *ui;				// A Qt internal mechanism
	//QStandardItemModel* model;
	//QListView* model;			// Links Qt with your scene graph 
	Node* currentNode;			// A pointer to the currently selected "node"

	QProgressBar *progressBar;
	QTimeLine *timeline;
	QColor m_color;

	QTimer* timer;

};

#endif // WINDOW_H
