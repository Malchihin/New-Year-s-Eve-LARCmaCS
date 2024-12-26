// Copyright 2019 Dmitrii Iarosh

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

// http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#pragma once

#include <QGraphicsScene>
#include "field_default_constants.h"
#include "messages_robocup_ssl_wrapper.pb.h"
#include "robot.h"
#include "constants.h"
#include <QTimer>
#include "sharedRes.h"

class FieldScene : public QGraphicsScene
{
    Q_OBJECT
public:
    FieldScene(SharedRes * sharedRes, QObject *parent = 0);
    ~FieldScene();

public slots:
    void updateField(const QSharedPointer<QVector<QSharedPointer<SSL_WrapperPacket> > > & detection,
                     const QSharedPointer<SSL_WrapperPacket> & geometry);
    void ClearField();
    void updateFrame();

signals:
    void redrawScene();

private:
    SharedRes * mSharedRes;
    SSL_DetectionFrame mDetection;
    QTimer mDrawTimer;
#ifndef OLD_SSL_PROTO
    void updateFieldGeometry(const QSharedPointer<SSL_WrapperPacket> & packet);
#endif
    void updateGeometry(const SSL_GeometryFieldSize & fieldSize);
    void robotsInit();
    void loadFieldGeometry();
    void loadFieldGeometry(const SSL_GeometryFieldSize & fieldSize);
    void addRobot(const QSharedPointer<Robot> & robot);
    void updateRobots(const QSharedPointer<SSL_WrapperPacket> & packet);
    //Robots
    QVector<QSharedPointer<Robot> > robots;
    //balls
    QVector < QVector<QGraphicsEllipseItem*> > ballItems;
    //field
    QPainterPath field;
    QGraphicsPathItem * fieldItem = nullptr;
    //brushes and pens
    QBrush fieldBrush, ballBrush;
    QPen fieldPen, fieldLinePen, ballPen;
    bool shutdownSoccerView;

    void updateRobot(const SSL_DetectionRobot & robot, int team, unsigned int camID);
    void constructField();

    //gain size
    double ksize;

    //Field dimensions and geometry

#ifdef OLD_SSL_PROTO
    double referee_width;
    double goal_wall_width;
    double defense_radius;
    double defense_stretch;
    double free_kick_from_defense_dist;
    double penalty_spot_from_field_line_dist;
    double penalty_line_from_spot_dist;
#else
    QVector<SSL_FieldLineSegment> field_lines;
    QVector<SSL_FieldCicularArc> field_arcs;
    double penalty_area_width;
    double penalty_area_depth;
#endif
    double line_width;
    double field_length;
    double field_width;
    double boundary_width;
    double goal_width;
    double goal_depth;
    double center_circle_radius;

    // Function to draw a Christmas tree
    void drawChristmasTree();
};
