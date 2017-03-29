#include <iostream>
#include <sstream>
#include <string>
#include "window.h"
#include "ui_window.h"
#include <QTimeline>
#include <QColorDialog>
#include <QPalette>

#include "myglwidget.h"

Q_DECLARE_METATYPE(Node*);  // Tell Qt that Node is a type. 

std::string getNewName(){ // return a unique name 
	static int count = 0;	// keep counting the number of objects

	std::string s;
	std::stringstream out;	// a stream for outputing to a string
	out << count++;			// make the current count into a string
	s = out.str();

	return "Node_" + s;	// append the current count onto the string
}

Window::Window(QWidget *parent) :		// Window constructor

	QWidget(parent),
	ui(new Ui::Window)
{
	ui->setupUi(this);					// Standard Qt stuff
	//**************************************************************************
	//color slider stuff
	//connect sliders to window 
	connect(ui->redSlider, SIGNAL(valueChanged(int)), SLOT(onColorChanged()));
	connect(ui->greenSlider, SIGNAL(valueChanged(int)), SLOT(onColorChanged()));
	connect(ui->blueSlider, SIGNAL(valueChanged(int)), SLOT(onColorChanged()));
	onColorChanged();
	 /**************************************************************************
	//Progress Bar and Timeline stuff
	progressBar = new QProgressBar(this);
	progressBar->setRange(0, 100);
	//progressBar->setFixedSize(9, 3);
	//1 second timeline
	timeline = new QTimeLine(1000, this);
	timeline->setFrameRange(0, 100);
	timeline->setLoopCount(5);				//loop through timeline 5 times
	timeline->setUpdateInterval(200);		//2 second update interval
	timeline->setCurveShape(QTimeLine::LinearCurve);
	connect(timeline, SIGNAL(framechanged(int)), progressBar, SLOT(setValue(int)));
	timeline->start();

	//I don't even know if this is done correctly
	//how the hell do you animate an object in a widget?
//	QPropertyAnimation *animation = new QPropertyAnimation(ui->myGLWidget, "geometry");

	//animation->setDuration(1000);

	//animation->setStartValue(QRect(250, 250, 100, 30));
	//animation->setEndValue(QRect(500, 450, 100, 30));

	//animation->start();

	//************************************************************************* */
	//tree view and model stuff
	model = new QStandardItemModel();
	//model = new QListView();			// Tree views have to be populated with models, so create one
	Node* d;							// head node 
	
	animal *creature = new animal();	//create base animal and set root to animal's root
	this->root = creature->root;		//set global root to new animal
	root->traverse();


	//****************************************************************************
	// You should be able to traverse your scene graph and set these up as you traverse or you can do it as you create your scene graph. 
	// Also, realize you will need to create and delete these items when you create and delete nodes in your scene graph
	/*
	QTreeWidget *treeWidget = new QTreeWidget();
	treeWidget->setColumnCount(1);
	Qlist<Node *> items;
	*/
	//itemA = root
	d = creature->root;
	QStandardItem* itemA = new QStandardItem(QString::fromStdString(d->getName()));
	itemA->setData(QVariant::fromValue(d));
	model->appendRow(itemA);

	//itemB = body
	d = creature->body;
	QStandardItem* itemB = new QStandardItem(QString::fromStdString(d->getName()));
	itemB->setData(QVariant::fromValue(d));
	itemA->appendRow(itemB);

	//itemC = head
	d = creature->head;
	QStandardItem* itemC = new QStandardItem(QString::fromStdString(d->getName()));
	itemC->setData(QVariant::fromValue(d));
	itemB->appendRow(itemC);

	d = creature->legF1;
	QStandardItem* itemD = new QStandardItem(QString::fromStdString(d->getName()));
	itemD->setData(QVariant::fromValue(d));
	itemB->appendRow(itemD);

	d = creature->legF2;
	QStandardItem* itemE = new QStandardItem(QString::fromStdString(d->getName()));
	itemE->setData(QVariant::fromValue(d));
	itemB->appendRow(itemE);

	d = creature->legF3;
	QStandardItem* itemF = new QStandardItem(QString::fromStdString(d->getName()));
	itemF->setData(QVariant::fromValue(d));
	itemB->appendRow(itemF);

	d = creature->legF4;
	QStandardItem* itemG = new QStandardItem(QString::fromStdString(d->getName()));
	itemG->setData(QVariant::fromValue(d));
	itemB->appendRow(itemG);

	//*******************************************************8
	ui->treeView->setModel(model); // ui needs to include treeView, so create one in Qt Creator and make sure it is named treeView
								   // in the ui, I also made the header of the treeView not visible. 
	ui->treeView->expandAll();		// show all of the items at all levels 

									// When a user selects an item in the treeView have a signal sent to a method in this class, on_treeView_currentItemChanged
	connect(ui->treeView->selectionModel(), &QItemSelectionModel::selectionChanged, this, &Window::on_treeView_currentItemChanged);

	// Set up initial sliders values
	ui->xTransSlider->setVisible(FALSE);
	ui->yTransSlider->setVisible(FALSE);
	ui->xScaleSlider->setVisible(FALSE);
	ui->yScaleSlider->setVisible(FALSE);
	ui->rotationDial->setVisible(FALSE);
	ui->xTransSlider->setMinimum(0); ui->xTransSlider->setMaximum(50); ui->xTransSlider->setSingleStep(1); // These are just sample to show how to do it. You decide on appropriate values. To use floats instead of ints, divide the values the sliders return by 100.0
	ui->yTransSlider->setMinimum(0); ui->yTransSlider->setMaximum(50); ui->yTransSlider->setSingleStep(1);
	ui->xScaleSlider->setMinimum(0); ui->xScaleSlider->setMaximum(10); ui->xScaleSlider->setSingleStep(1);
	ui->yScaleSlider->setMinimum(0); ui->yScaleSlider->setMaximum(10); ui->yScaleSlider->setSingleStep(1);
	ui->rotationDial->setMinimum(0); ui->rotationDial->setMaximum(360); ui->rotationDial->setSingleStep(1);



	// When a user moves a slider or rotation dial, update the label value to show it. 
	connect(ui->xTransSlider, &QSlider::valueChanged, this, &Window::on_xTransSlider_valueChanged);
	connect(ui->yTransSlider, &QSlider::valueChanged, this, &Window::on_yTransSlider_valueChanged);
	connect(ui->xScaleSlider, &QSlider::valueChanged, this, &Window::on_xScaleSlider_valueChanged);
	connect(ui->yScaleSlider, &QSlider::valueChanged, this, &Window::on_yScaleSlider_valueChanged);
	connect(ui->rotationDial, &QDial::valueChanged, this, &Window::on_rotationDial_valueChanged);

	currentNode = NULL;  // Currently no node in the treeView is selected, so reflect that. 
}

//incomplete 
//recursive function to populate the tree using a given model and the current root
void Window::populateTree(QStandardItemModel* model, Node* root) {

}


Window::~Window()
{
	delete ui;
}


void Window::keyPressEvent(QKeyEvent *e)  // If the user hits esc, close the program. 
{
	if (e->key() == Qt::Key_Escape)
		close();
	else
		QWidget::keyPressEvent(e);
}

// This methods automatically gets called when a different item is selected in the treeView.
// It is in a slot of this class and connected to a signal in the constructor of this class. 
void Window::on_treeView_currentItemChanged(const QItemSelection &selected, const QItemSelection &deselected)
{
	Node* d;			// This would correspond to your Node class
	QModelIndex index;
	QModelIndexList items = selected.indexes(); // It is possible to select more than one item. 
	
	foreach(index, items) {				// For each item selected look at the data. 
		d = index.data(Qt::UserRole + 1).value<Node*>();// This is how to retrieve the data from an item 
	}
	

	currentNode = d; // keep a pointer to the node that corresponds to the currently selected tree item. Makes things easier. 

	//TODO how to represent this within the node or poly class?
	//a modifiable value that can be affected by the slider?
	ui->xTransSlider->setValue(d->getxTranslation());     // Set the values of the slides to what is currently in the node
	ui->yTransSlider->setValue(d->getyTranslation());
	ui->xTransSlideLabel->setNum(d->getxTranslation());		// Show the value in the label for the slider
	ui->yTransSlideLabel->setNum(d->getyTranslation());

	ui->xScaleSlider->setValue(d->getxScale());
	ui->xScaleLabel->setNum(d->getxScale());
	ui->yScaleSlider->setValue(d->getyScale());
	ui->yScaleLabel->setNum(d->getyScale());

	ui->rotationDial->setValue(d->getRotation());
	ui->rotationLabel->setNum(d->getRotation());


	// Make the sliders visible
	ui->xTransSlider->setVisible(TRUE);   
	ui->yTransSlider->setVisible(TRUE);
	ui->xScaleSlider->setVisible(TRUE);
	ui->yScaleSlider->setVisible(TRUE);
	ui->rotationDial->setVisible(TRUE);

	// You'll need slots to receive signals from the sliders and update the value of the nodes
}
/***************************Translation Sliders*********************************/
// Called when the slider is slid. 
void Window::on_xTransSlider_valueChanged(float value)
{
	ui->xTransSlideLabel->setNum(value);	// Set the label value

											// Update the node value
	if (currentNode != NULL)
		currentNode->setTranslation(value,0);

	// Update the OpenGL window
	ui->myGLWidget->update();  // Note in this sample code it will not do anything. In yours it should 
}

void Window::on_yTransSlider_valueChanged(float value)
{
	ui->yTransSlideLabel->setNum(value);	// Set the label value
	
											// Update the node value
	if (currentNode != NULL)
		currentNode->setTranslation(0, value);

	// Update the OpenGL window
	ui->myGLWidget->update();
}

/***************************Scale Sliders*********************************/
void Window::on_xScaleSlider_valueChanged(float value) {

	ui->xScaleLabel->setNum(value);

	if (currentNode != NULL)
		currentNode->setScale(value,0);
}

void Window::on_yScaleSlider_valueChanged(float value)
{
	ui->yScaleLabel->setNum(value);

	if (currentNode != NULL)
		currentNode->setScale(0, value);
}

/***************************Rotation Sliders*********************************/
void Window::on_rotationDial_valueChanged(float angle)
{
	ui->rotationLabel->setNum(angle);

	if (currentNode != NULL)
		currentNode->setRotation(angle);
}

void Window::on_animalButton_clicked()
{
	ui->myGLWidget->DrawWindowBackground;
}

void Window::onColorChanged()
{
//	if (currentNode != NULL)
//		currentNode->setColor((float)ui->redSlider->value(), (float)ui->greenSlider->value(),
//		(float)ui->blueSlider->value());
	m_color.setRgb(ui->redSlider->value(), ui->greenSlider->value(),
		ui->blueSlider->value());
	QPalette pal = ui->display->palette();
	pal.setColor(QPalette::Window, m_color);
	ui->display->setPalette(pal);
	
	emit colorChanged(m_color);
}
