#include "maze.h"

Maze::Maze() {
  map = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
         {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
          0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
         {0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0,
          0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0},
         {0, 2, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0,
          0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0},
         {0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0,
          0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0},
         {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
          1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
         {0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0,
          0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0},
         {0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0,
          0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0},
         {0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0,
          0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0},
         {0, 0,  0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0,
          0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,  0},
         {-1, -1, -1, -1, -1, 0, 1, 0, 0, 0,  0,  0,  -1, 0,
          0,  -1, 0,  0,  0,  0, 0, 1, 0, -1, -1, -1, -1, -1},
         {-1, -1, -1, -1, -1, 0, 1, 0, 0, -1, -1, -1, -1, -1,
          -1, -1, -1, -1, -1, 0, 0, 1, 0, -1, -1, -1, -1, -1},
         {-1, -1, -1, -1, -1, 0, 1, 0, 0, -1, 0,  0,  0,  0,
          0,  0,  0,  0,  -1, 0, 0, 1, 0, -1, -1, -1, -1, -1},
         {0,  0,  0,  0, 0,  0, 1, 0, 0, -1, 0, -1, -1, -1,
          -1, -1, -1, 0, -1, 0, 0, 1, 0, 0,  0, 0,  0,  0},
         {-1, -1, -1, -1, -1, -1, 1,  -1, -1, -1, 0,  -1, -1, -1,
          -1, -1, -1, 0,  -1, -1, -1, 1,  -1, -1, -1, -1, -1, -1},
         {0,  0,  0,  0, 0,  0, 1, 0, 0, -1, 0, -1, -1, -1,
          -1, -1, -1, 0, -1, 0, 0, 1, 0, 0,  0, 0,  0,  0},
         {-1, -1, -1, -1, -1, 0, 1, 0, 0, -1, 0,  0,  0,  0,
          0,  0,  0,  0,  -1, 0, 0, 1, 0, -1, -1, -1, -1, -1},
         {-1, -1, -1, -1, -1, 0, 1, 0, 0, -1, -1, -1, -1, -1,
          -1, -1, -1, -1, -1, 0, 0, 1, 0, -1, -1, -1, -1, -1},
         {-1, -1, -1, -1, -1, 0, 1, 0, 0, -1, 0,  0,  0,  0,
          0,  0,  0,  0,  -1, 0, 0, 1, 0, -1, -1, -1, -1, -1},
         {0, 0, 0, 0, 0,  0, 1, 0, 0, -1, 0, 0, 0, 0,
          0, 0, 0, 0, -1, 0, 0, 1, 0, 0,  0, 0, 0, 0},
         {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
          0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
         {0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0,
          0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0},
         {0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0,
          0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0},
         {0,  2, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, -1,
          -1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 2, 0},
         {0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0,
          0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0},
         {0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0,
          0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0},
         {0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0,
          0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0},
         {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
          0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
         {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
          0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
         {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
          1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
         {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
}

QList<QPoint> Maze::WhereAreDots() {
  QList<QPoint> dots;
  for (int y = 0; y < height; y++) {
    for (int x = 0; x < width; x++) {
      if (map[y][x] == 1) {
        dots.append(QPoint(x, y));
      }
    }
  }
  return dots;
}

QList<QPoint> Maze::WhereArePellets() {
  QList<QPoint> pellets;
  for (int y = 0; y < height; y++) {
    for (int x = 0; x < width; x++) {
      if (map[y][x] == 2) {
        pellets.append(QPoint(x, y));
      }
    }
  }
  return pellets;
}

bool Maze::CheckBound(QPoint pos) {
  bool xBound = pos.x() >= 0 && pos.x() < (width - 1);
  bool yBound = pos.y() >= 0 && pos.y() < (height - 1);

  return xBound && yBound;
}

bool Maze::CheckWall(QPoint pos) { return map[pos.y()][pos.x()] != 0; }

bool Maze::CanMove(QPoint pos, QPoint direction) {
  QPoint nextPos = pos + direction;
  return CheckBound(nextPos) && CheckWall(nextPos);
}
