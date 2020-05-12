#include <stdlib.h>
#include <stdio.h>
#include <gtk/gtk.h>

static GtkWidget *screen, *btn[13];

int main(int argc, char **argv) {
    GtkWidget *window, *grid, *calculate;
    gtk_init(&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window), grid);

    screen = gtk_label_new("\nJUST A GUI\n");
    gtk_grid_attach(GTK_GRID(grid), screen, 0, 0, 4, 1);

    btn[0] = gtk_button_new_with_label("1");
    gtk_grid_attach(GTK_GRID(grid),btn[0],0,1,1,1);

    btn[1] = gtk_button_new_with_label("2");
    gtk_grid_attach(GTK_GRID(grid),btn[1],1,1,1,1);

    btn[2] = gtk_button_new_with_label("3");
    gtk_grid_attach(GTK_GRID(grid),btn[2],2,1,1,1);

    btn[3] = gtk_button_new_with_label("+");
    gtk_grid_attach(GTK_GRID(grid),btn[3],3,1,1,1);


    btn[4] = gtk_button_new_with_label("4");
    gtk_grid_attach(GTK_GRID(grid),btn[4],0,2,1,1);

    btn[5] = gtk_button_new_with_label("5");
    gtk_grid_attach(GTK_GRID(grid),btn[5],1,2,1,1);

    btn[6] = gtk_button_new_with_label("6");
    gtk_grid_attach(GTK_GRID(grid),btn[6],2,2,1,1);

    btn[7] = gtk_button_new_with_label("-");
    gtk_grid_attach(GTK_GRID(grid),btn[7],3,2,1,1);


    btn[8] = gtk_button_new_with_label("4");
    gtk_grid_attach(GTK_GRID(grid),btn[8],0,3,1,1);

    btn[9] = gtk_button_new_with_label("5");
    gtk_grid_attach(GTK_GRID(grid),btn[9],1,3,1,1);

    btn[10] = gtk_button_new_with_label("6");
    gtk_grid_attach(GTK_GRID(grid),btn[10],2,3,1,1);

    btn[11] = gtk_button_new_with_label("=");
    gtk_grid_attach(GTK_GRID(grid),btn[11],3,3,1,2);


    btn[12] = gtk_button_new_with_label("0");
    gtk_grid_attach(GTK_GRID(grid),btn[12],0,4,2,1);

    btn[13] = gtk_button_new_with_label(".");
    gtk_grid_attach(GTK_GRID(grid),btn[13],2,4,1,1);

    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}
