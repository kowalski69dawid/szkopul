#include <gtk/gtk.h>
 
int main (int argc, char *argv[]) {
    GtkWidget *okno;
 
    gtk_init (&argc, &argv);
 
    okno = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_widget_show (okno);
 
    gtk_main ();
 
    return 0;
}
