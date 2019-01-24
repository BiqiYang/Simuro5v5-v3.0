#pragma once
/*
 * ƽ̨��صĻ�����Ϣ���Լ�ƽ̨�ṩ�����ݽṹ
 */
const int PLAYERS_PER_SIDE = 5;

const long FREE_BALL = 1;
const long PLACE_KICK = 2;
const long PENALTY_KICK = 3;
const long FREE_KICK = 4;
const long GOAL_KICK = 5;

// whosBall
const long ANYONES_BALL = 0;
const long BLUE_BALL = 1;
const long YELLOW_BALL = 2;

// global variables
const double FTOP = 77.2392;
const double FBOT = 6.3730;
const double GTOPY = 49.6801;
const double GBOTY = 33.9320;
const double GRIGHT = 97.3632;
const double GLEFT = 2.8748;
const double FRIGHTX = 93.4259;
const double FLEFTX = 6.8118;

typedef struct {
    double x, y, z;// x �� y Ϊ����ֵ
} Vector3D;

typedef struct {
    long left, right, top, bottom;
} Bounds;

typedef struct {
    Vector3D pos;// ����������
    double rotation;// �����˷����
    double velocityLeft, velocityRight;// �������������ٶ�
} Robot;

typedef struct {
    Vector3D pos;// �����˵�����λ��
    double rotation;// �����˵�ǰ��ת��
} OpponentRobot;

typedef struct {
    Vector3D pos;  // С�������λ��
} Ball;

typedef struct {
    Robot home[PLAYERS_PER_SIDE];        //�ҷ�����������
    OpponentRobot opp[PLAYERS_PER_SIDE];//�з�����������
    Ball currentBall;               //��ǰС���λ��
    int gameState;                        //��ǰ������״̬
    int whosBall;                        //��˭������
} Environment;                        //������Ϣ
