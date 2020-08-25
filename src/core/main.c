//
// Created by neizfsb on 24.08.2020.
//

#include "../minilibx_opengl_20191021/mlx.h"

int main()
{
    void *mlx;
    void *win;

    int x = -1;
    int y = -1;

    mlx = mlx_init();
    win = mlx_new_window(mlx, 640, 480, "tets");
    mlx_loop(mlx);
}