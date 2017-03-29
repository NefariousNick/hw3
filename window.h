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

//class Data;  // forward declaration of my simple little data class

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

	void populateTree(QStandardItemModel* model, Node* root);
	Node* root;					//static pointer to the root
	Node* root2;
	Node* root3;
	QColor color() const {
		return m_color;
	}
	
protected:
    void keyPressEvent(QKeyEvent *event);

	signals:
	void colorChanged(QColor arg);

	public slots :
		void on_treeView_currentItemChanged(const QItemSelection &selected, const QItemSelection &deselected);  // Called when a different item in the tree view is selected. 
		void on_xTransSlider_valueChanged(float value); // Called when the slider is slid. 
		void on_yTransSlider_valueChanged(float value); // Called when the slider is slid. 
		void on_xScaleSlider_valueChanged(float value);
		void on_yScaleSlider_valueChanged(float value);
		void on_rotationDial_valueChanged(float angle);
		void on_animalButton_clicked();
		void on_timelineSlider_valueChanged(int value);
	private slots:
		void onColorChanged();


private:
    Ui::Window *ui;				// A Qt internal mechanism
	QStandardItemModel* model;
	//QListView* model;			// Links Qt with your scene graph 
	Node* currentNode;			// A pointer to the currently selected "node"

	QProgressBar *progressBar;
	QTimeLine *timeline;
	QColor m_color;
};

#endif // WINDOW_H
