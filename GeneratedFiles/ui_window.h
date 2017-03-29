/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <myglwidget.h>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QTreeView *treeView;
    MyGLWidget *myGLWidget;
    QGroupBox *TransformsBox;
    QGridLayout *gridLayout_3;
    QWidget *display;
    QVBoxLayout *xyTranslation;
    QLabel *XTransDescriptionLabel;
    QHBoxLayout *xTransBox;
    QSlider *xTransSlider;
    QLabel *xTransSlideLabel;
    QLabel *YTransDescriptionLabel;
    QHBoxLayout *yTransBox;
    QSlider *yTransSlider;
    QLabel *yTransSlideLabel;
    QPushButton *spawnButton;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_3;
    QSlider *blueSlider;
    QSlider *greenSlider;
    QLabel *label_2;
    QSlider *redSlider;
    QSpinBox *redSpinBox;
    QSpinBox *greenSpinBox;
    QSpinBox *blueSpinBox;
    QVBoxLayout *xyScale;
    QLabel *xScaleDescriptionLabel;
    QHBoxLayout *horizontalLayout_8;
    QSlider *xScaleSlider;
    QLabel *xScaleLabel;
    QLabel *yScaleDescriptionLabel;
    QHBoxLayout *horizontalLayout_9;
    QSlider *yScaleSlider;
    QLabel *yScaleLabel;
    QSlider *timelineSlider;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *animSpinBox;
    QLabel *animLabel;
    QVBoxLayout *Rotation;
    QLabel *RotDescriptionLabel;
    QDial *rotationDial;
    QHBoxLayout *horizontalLayout_5;
    QLabel *rotationLabel;
    QPushButton *renderButton;
    QPushButton *animButton;

    void setupUi(QWidget *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QStringLiteral("Window"));
        Window->resize(1028, 899);
        gridLayout = new QGridLayout(Window);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        treeView = new QTreeView(Window);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setMinimumSize(QSize(400, 480));

        horizontalLayout->addWidget(treeView);

        myGLWidget = new MyGLWidget(Window);
        myGLWidget->setObjectName(QStringLiteral("myGLWidget"));
        myGLWidget->setMinimumSize(QSize(480, 480));

        horizontalLayout->addWidget(myGLWidget);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        TransformsBox = new QGroupBox(Window);
        TransformsBox->setObjectName(QStringLiteral("TransformsBox"));
        gridLayout_3 = new QGridLayout(TransformsBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        display = new QWidget(TransformsBox);
        display->setObjectName(QStringLiteral("display"));
        display->setMinimumSize(QSize(100, 100));
        display->setAutoFillBackground(true);

        gridLayout_3->addWidget(display, 7, 1, 1, 1);

        xyTranslation = new QVBoxLayout();
        xyTranslation->setSpacing(6);
        xyTranslation->setObjectName(QStringLiteral("xyTranslation"));
        XTransDescriptionLabel = new QLabel(TransformsBox);
        XTransDescriptionLabel->setObjectName(QStringLiteral("XTransDescriptionLabel"));

        xyTranslation->addWidget(XTransDescriptionLabel);

        xTransBox = new QHBoxLayout();
        xTransBox->setSpacing(6);
        xTransBox->setObjectName(QStringLiteral("xTransBox"));
        xTransSlider = new QSlider(TransformsBox);
        xTransSlider->setObjectName(QStringLiteral("xTransSlider"));
        xTransSlider->setMaximumSize(QSize(500, 16777215));
        xTransSlider->setOrientation(Qt::Horizontal);

        xTransBox->addWidget(xTransSlider);

        xTransSlideLabel = new QLabel(TransformsBox);
        xTransSlideLabel->setObjectName(QStringLiteral("xTransSlideLabel"));

        xTransBox->addWidget(xTransSlideLabel);


        xyTranslation->addLayout(xTransBox);

        YTransDescriptionLabel = new QLabel(TransformsBox);
        YTransDescriptionLabel->setObjectName(QStringLiteral("YTransDescriptionLabel"));

        xyTranslation->addWidget(YTransDescriptionLabel);

        yTransBox = new QHBoxLayout();
        yTransBox->setSpacing(6);
        yTransBox->setObjectName(QStringLiteral("yTransBox"));
        yTransSlider = new QSlider(TransformsBox);
        yTransSlider->setObjectName(QStringLiteral("yTransSlider"));
        yTransSlider->setMaximumSize(QSize(500, 16777215));
        yTransSlider->setOrientation(Qt::Horizontal);

        yTransBox->addWidget(yTransSlider);

        yTransSlideLabel = new QLabel(TransformsBox);
        yTransSlideLabel->setObjectName(QStringLiteral("yTransSlideLabel"));
        yTransSlideLabel->setMaximumSize(QSize(500, 16777215));

        yTransBox->addWidget(yTransSlideLabel);


        xyTranslation->addLayout(yTransBox);


        gridLayout_3->addLayout(xyTranslation, 4, 0, 1, 1);

        spawnButton = new QPushButton(TransformsBox);
        spawnButton->setObjectName(QStringLiteral("spawnButton"));
        spawnButton->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(spawnButton, 1, 2, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(TransformsBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 2, 1, 1);

        label_3 = new QLabel(TransformsBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 3, 2, 1, 1);

        blueSlider = new QSlider(TransformsBox);
        blueSlider->setObjectName(QStringLiteral("blueSlider"));
        blueSlider->setMaximum(255);
        blueSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(blueSlider, 3, 0, 1, 1);

        greenSlider = new QSlider(TransformsBox);
        greenSlider->setObjectName(QStringLiteral("greenSlider"));
        greenSlider->setMaximum(255);
        greenSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(greenSlider, 2, 0, 1, 1);

        label_2 = new QLabel(TransformsBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 2, 2, 1, 1);

        redSlider = new QSlider(TransformsBox);
        redSlider->setObjectName(QStringLiteral("redSlider"));
        redSlider->setMaximum(255);
        redSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(redSlider, 0, 0, 1, 1);

        redSpinBox = new QSpinBox(TransformsBox);
        redSpinBox->setObjectName(QStringLiteral("redSpinBox"));
        redSpinBox->setMaximum(255);

        gridLayout_2->addWidget(redSpinBox, 0, 1, 1, 1);

        greenSpinBox = new QSpinBox(TransformsBox);
        greenSpinBox->setObjectName(QStringLiteral("greenSpinBox"));
        greenSpinBox->setMaximum(255);

        gridLayout_2->addWidget(greenSpinBox, 2, 1, 1, 1);

        blueSpinBox = new QSpinBox(TransformsBox);
        blueSpinBox->setObjectName(QStringLiteral("blueSpinBox"));
        blueSpinBox->setMaximum(255);

        gridLayout_2->addWidget(blueSpinBox, 3, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 7, 0, 1, 1);

        xyScale = new QVBoxLayout();
        xyScale->setSpacing(6);
        xyScale->setObjectName(QStringLiteral("xyScale"));
        xScaleDescriptionLabel = new QLabel(TransformsBox);
        xScaleDescriptionLabel->setObjectName(QStringLiteral("xScaleDescriptionLabel"));

        xyScale->addWidget(xScaleDescriptionLabel);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        xScaleSlider = new QSlider(TransformsBox);
        xScaleSlider->setObjectName(QStringLiteral("xScaleSlider"));
        xScaleSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(xScaleSlider);

        xScaleLabel = new QLabel(TransformsBox);
        xScaleLabel->setObjectName(QStringLiteral("xScaleLabel"));

        horizontalLayout_8->addWidget(xScaleLabel);


        xyScale->addLayout(horizontalLayout_8);

        yScaleDescriptionLabel = new QLabel(TransformsBox);
        yScaleDescriptionLabel->setObjectName(QStringLiteral("yScaleDescriptionLabel"));

        xyScale->addWidget(yScaleDescriptionLabel);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        yScaleSlider = new QSlider(TransformsBox);
        yScaleSlider->setObjectName(QStringLiteral("yScaleSlider"));
        yScaleSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(yScaleSlider);

        yScaleLabel = new QLabel(TransformsBox);
        yScaleLabel->setObjectName(QStringLiteral("yScaleLabel"));

        horizontalLayout_9->addWidget(yScaleLabel);


        xyScale->addLayout(horizontalLayout_9);


        gridLayout_3->addLayout(xyScale, 4, 2, 1, 1);

        timelineSlider = new QSlider(TransformsBox);
        timelineSlider->setObjectName(QStringLiteral("timelineSlider"));
        timelineSlider->setMaximumSize(QSize(100, 16777215));
        timelineSlider->setMinimum(1);
        timelineSlider->setMaximum(8);
        timelineSlider->setValue(1);
        timelineSlider->setSliderPosition(1);
        timelineSlider->setTracking(true);
        timelineSlider->setOrientation(Qt::Horizontal);
        timelineSlider->setInvertedAppearance(false);

        gridLayout_3->addWidget(timelineSlider, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        animSpinBox = new QSpinBox(TransformsBox);
        animSpinBox->setObjectName(QStringLiteral("animSpinBox"));
        animSpinBox->setMinimum(1);
        animSpinBox->setMaximum(8);

        horizontalLayout_2->addWidget(animSpinBox);

        animLabel = new QLabel(TransformsBox);
        animLabel->setObjectName(QStringLiteral("animLabel"));
        animLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(animLabel);


        gridLayout_3->addLayout(horizontalLayout_2, 4, 1, 1, 1);

        Rotation = new QVBoxLayout();
        Rotation->setSpacing(6);
        Rotation->setObjectName(QStringLiteral("Rotation"));
        Rotation->setSizeConstraint(QLayout::SetFixedSize);
        RotDescriptionLabel = new QLabel(TransformsBox);
        RotDescriptionLabel->setObjectName(QStringLiteral("RotDescriptionLabel"));

        Rotation->addWidget(RotDescriptionLabel);

        rotationDial = new QDial(TransformsBox);
        rotationDial->setObjectName(QStringLiteral("rotationDial"));

        Rotation->addWidget(rotationDial, 0, Qt::AlignLeft);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        rotationLabel = new QLabel(TransformsBox);
        rotationLabel->setObjectName(QStringLiteral("rotationLabel"));
        rotationLabel->setMaximumSize(QSize(500, 16777215));
        rotationLabel->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_5->addWidget(rotationLabel);


        Rotation->addLayout(horizontalLayout_5);


        gridLayout_3->addLayout(Rotation, 1, 0, 1, 1);

        renderButton = new QPushButton(TransformsBox);
        renderButton->setObjectName(QStringLiteral("renderButton"));
        renderButton->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(renderButton, 7, 2, 1, 1);

        animButton = new QPushButton(TransformsBox);
        animButton->setObjectName(QStringLiteral("animButton"));

        gridLayout_3->addWidget(animButton, 1, 1, 1, 1);


        gridLayout->addWidget(TransformsBox, 1, 0, 1, 1, Qt::AlignTop);


        retranslateUi(Window);
        QObject::connect(xScaleSlider, SIGNAL(valueChanged(int)), Window, SLOT(update()));
        QObject::connect(xTransSlider, SIGNAL(valueChanged(int)), Window, SLOT(update()));
        QObject::connect(spawnButton, SIGNAL(clicked()), Window, SLOT(update()));
        QObject::connect(redSlider, SIGNAL(valueChanged(int)), redSpinBox, SLOT(setValue(int)));
        QObject::connect(greenSlider, SIGNAL(valueChanged(int)), greenSpinBox, SLOT(setValue(int)));
        QObject::connect(blueSlider, SIGNAL(valueChanged(int)), blueSpinBox, SLOT(setValue(int)));
        QObject::connect(redSpinBox, SIGNAL(valueChanged(int)), redSlider, SLOT(setValue(int)));
        QObject::connect(greenSpinBox, SIGNAL(valueChanged(int)), greenSlider, SLOT(setValue(int)));
        QObject::connect(blueSpinBox, SIGNAL(valueChanged(int)), blueSlider, SLOT(setValue(int)));
        QObject::connect(renderButton, SIGNAL(clicked()), Window, SLOT(update()));
        QObject::connect(rotationDial, SIGNAL(valueChanged(int)), rotationLabel, SLOT(setNum(int)));
        QObject::connect(xTransSlider, SIGNAL(valueChanged(int)), xTransSlideLabel, SLOT(setNum(int)));
        QObject::connect(yTransSlider, SIGNAL(valueChanged(int)), yTransSlideLabel, SLOT(setNum(int)));
        QObject::connect(xScaleSlider, SIGNAL(valueChanged(int)), xScaleLabel, SLOT(setNum(int)));
        QObject::connect(yScaleSlider, SIGNAL(valueChanged(int)), yScaleLabel, SLOT(setNum(int)));
        QObject::connect(yScaleSlider, SIGNAL(valueChanged(int)), Window, SLOT(update()));
        QObject::connect(yTransSlider, SIGNAL(valueChanged(int)), Window, SLOT(update()));
        QObject::connect(rotationDial, SIGNAL(valueChanged(int)), Window, SLOT(update()));
        QObject::connect(timelineSlider, SIGNAL(sliderMoved(int)), Window, SLOT(update()));
        QObject::connect(timelineSlider, SIGNAL(sliderMoved(int)), animLabel, SLOT(setNum(int)));
        QObject::connect(blueSlider, SIGNAL(valueChanged(int)), Window, SLOT(update()));
        QObject::connect(redSlider, SIGNAL(valueChanged(int)), Window, SLOT(update()));
        QObject::connect(greenSlider, SIGNAL(valueChanged(int)), Window, SLOT(update()));
        QObject::connect(redSpinBox, SIGNAL(valueChanged(QString)), Window, SLOT(update()));
        QObject::connect(greenSpinBox, SIGNAL(valueChanged(QString)), Window, SLOT(update()));
        QObject::connect(blueSpinBox, SIGNAL(valueChanged(QString)), Window, SLOT(update()));
        QObject::connect(renderButton, SIGNAL(clicked()), myGLWidget, SLOT(update()));
        QObject::connect(timelineSlider, SIGNAL(valueChanged(int)), animLabel, SLOT(setNum(int)));
        QObject::connect(timelineSlider, SIGNAL(valueChanged(int)), animSpinBox, SLOT(setValue(int)));
        QObject::connect(animSpinBox, SIGNAL(valueChanged(int)), timelineSlider, SLOT(setValue(int)));
        QObject::connect(animButton, SIGNAL(clicked()), Window, SLOT(update()));

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QWidget *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "Window", Q_NULLPTR));
        TransformsBox->setTitle(QApplication::translate("Window", "Transformations", Q_NULLPTR));
        XTransDescriptionLabel->setText(QApplication::translate("Window", "Translation in X", Q_NULLPTR));
        xTransSlideLabel->setText(QApplication::translate("Window", "TextLabel", Q_NULLPTR));
        YTransDescriptionLabel->setText(QApplication::translate("Window", "Translation in Y", Q_NULLPTR));
        yTransSlideLabel->setText(QApplication::translate("Window", "TextLabel", Q_NULLPTR));
        spawnButton->setText(QApplication::translate("Window", "Spawn Animal", Q_NULLPTR));
        label->setText(QApplication::translate("Window", "Red", Q_NULLPTR));
        label_3->setText(QApplication::translate("Window", "Blue", Q_NULLPTR));
        label_2->setText(QApplication::translate("Window", "Green", Q_NULLPTR));
        xScaleDescriptionLabel->setText(QApplication::translate("Window", "Scale in X", Q_NULLPTR));
        xScaleLabel->setText(QApplication::translate("Window", "TextLabel", Q_NULLPTR));
        yScaleDescriptionLabel->setText(QApplication::translate("Window", "Scale in Y", Q_NULLPTR));
        yScaleLabel->setText(QApplication::translate("Window", "TextLabel", Q_NULLPTR));
        animLabel->setText(QApplication::translate("Window", "1", Q_NULLPTR));
        RotDescriptionLabel->setText(QApplication::translate("Window", "Rotation in Degrees", Q_NULLPTR));
        rotationLabel->setText(QApplication::translate("Window", "TextLabel", Q_NULLPTR));
        renderButton->setText(QApplication::translate("Window", "Render", Q_NULLPTR));
        animButton->setText(QApplication::translate("Window", "animate", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
