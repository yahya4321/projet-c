/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_windowajouter_reclamation (void)
{
  GtkWidget *windowajouter_reclamation;
  GtkWidget *fixed1;
  GtkWidget *entryid_reclamation;
  GtkWidget *entrycin_reclmation;
  GtkWidget *entrynom_reclamation;
  GtkWidget *entryprenom_reclamation;
  GtkObject *spinbuttonjour_reclamation_adj;
  GtkWidget *spinbuttonjour_reclamation;
  GtkObject *spinbuttonmois_reclamation_adj;
  GtkWidget *spinbuttonmois_reclamation;
  GtkObject *spinbuttonannee_reclamation_adj;
  GtkWidget *spinbuttonannee_reclamation;
  GtkWidget *entryreclamation;
  GtkWidget *labelnom_reclamation;
  GtkWidget *labelprenom_reclamation;
  GtkWidget *labelid;
  GtkWidget *labelcin;
  GtkWidget *labeltype_reclamation;
  GtkWidget *comboboxtype_reclamation;
  GtkWidget *labeldate_reclamation;
  GtkWidget *labeljour_reclamation;
  GtkWidget *labelmois_reclamation;
  GtkWidget *labelannee_reclamation;
  GtkWidget *labelsexe;
  GtkWidget *radiobuttonhomme_reclamation;
  GSList *radiobuttonhomme_reclamation_group = NULL;
  GtkWidget *radiobuttonfemme_reclamation;
  GtkWidget *labeleducation_reclamation;
  GtkWidget *checkbuttonprepa_reclamation;
  GtkWidget *label19;
  GtkWidget *checkbuttonbussiness_reclamation;
  GtkWidget *checkbuttoncycleding_reclamation;
  GtkWidget *buttonmodifier_reclamation;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label15;
  GtkWidget *image8;
  GtkWidget *labelreclamation;
  GtkWidget *buttonajouter_reclamation;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label13;
  GtkWidget *buttonafficher_reclamation;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label14;

  windowajouter_reclamation = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (windowajouter_reclamation), _("Ajouter"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (windowajouter_reclamation), fixed1);

  entryid_reclamation = gtk_entry_new ();
  gtk_widget_show (entryid_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), entryid_reclamation, 128, 64);
  gtk_widget_set_size_request (entryid_reclamation, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryid_reclamation), 8226);

  entrycin_reclmation = gtk_entry_new ();
  gtk_widget_show (entrycin_reclmation);
  gtk_fixed_put (GTK_FIXED (fixed1), entrycin_reclmation, 128, 104);
  gtk_widget_set_size_request (entrycin_reclmation, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrycin_reclmation), 8226);

  entrynom_reclamation = gtk_entry_new ();
  gtk_widget_show (entrynom_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), entrynom_reclamation, 128, 144);
  gtk_widget_set_size_request (entrynom_reclamation, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrynom_reclamation), 8226);

  entryprenom_reclamation = gtk_entry_new ();
  gtk_widget_show (entryprenom_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), entryprenom_reclamation, 368, 144);
  gtk_widget_set_size_request (entryprenom_reclamation, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryprenom_reclamation), 8226);

  spinbuttonjour_reclamation_adj = gtk_adjustment_new (1, 1, 31, 1, 10, 10);
  spinbuttonjour_reclamation = gtk_spin_button_new (GTK_ADJUSTMENT (spinbuttonjour_reclamation_adj), 1, 0);
  gtk_widget_show (spinbuttonjour_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), spinbuttonjour_reclamation, 136, 240);
  gtk_widget_set_size_request (spinbuttonjour_reclamation, 60, 27);

  spinbuttonmois_reclamation_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  spinbuttonmois_reclamation = gtk_spin_button_new (GTK_ADJUSTMENT (spinbuttonmois_reclamation_adj), 1, 0);
  gtk_widget_show (spinbuttonmois_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), spinbuttonmois_reclamation, 208, 240);
  gtk_widget_set_size_request (spinbuttonmois_reclamation, 60, 27);

  spinbuttonannee_reclamation_adj = gtk_adjustment_new (2020, 2020, 3000, 1, 10, 10);
  spinbuttonannee_reclamation = gtk_spin_button_new (GTK_ADJUSTMENT (spinbuttonannee_reclamation_adj), 1, 0);
  gtk_widget_show (spinbuttonannee_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), spinbuttonannee_reclamation, 280, 240);
  gtk_widget_set_size_request (spinbuttonannee_reclamation, 60, 27);

  entryreclamation = gtk_entry_new ();
  gtk_widget_show (entryreclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), entryreclamation, 352, 288);
  gtk_widget_set_size_request (entryreclamation, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryreclamation), 8226);

  labelnom_reclamation = gtk_label_new (_("Nom"));
  gtk_widget_show (labelnom_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), labelnom_reclamation, 80, 152);
  gtk_widget_set_size_request (labelnom_reclamation, 41, 17);

  labelprenom_reclamation = gtk_label_new (_("Prenom"));
  gtk_widget_show (labelprenom_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), labelprenom_reclamation, 304, 144);
  gtk_widget_set_size_request (labelprenom_reclamation, 56, 25);

  labelid = gtk_label_new (_("ID"));
  gtk_widget_show (labelid);
  gtk_fixed_put (GTK_FIXED (fixed1), labelid, 80, 64);
  gtk_widget_set_size_request (labelid, 48, 24);

  labelcin = gtk_label_new (_("CIN"));
  gtk_widget_show (labelcin);
  gtk_fixed_put (GTK_FIXED (fixed1), labelcin, 80, 112);
  gtk_widget_set_size_request (labelcin, 41, 17);

  labeltype_reclamation = gtk_label_new (_("Type"));
  gtk_widget_show (labeltype_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), labeltype_reclamation, 80, 192);
  gtk_widget_set_size_request (labeltype_reclamation, 41, 17);

  comboboxtype_reclamation = gtk_combo_box_new_text ();
  gtk_widget_show (comboboxtype_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), comboboxtype_reclamation, 128, 184);
  gtk_widget_set_size_request (comboboxtype_reclamation, 176, 32);
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxtype_reclamation), _("Service d'hebergement"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxtype_reclamation), _("Service de restauration"));

  labeldate_reclamation = gtk_label_new (_("Date"));
  gtk_widget_show (labeldate_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), labeldate_reclamation, 88, 240);
  gtk_widget_set_size_request (labeldate_reclamation, 41, 17);

  labeljour_reclamation = gtk_label_new (_("Jour"));
  gtk_widget_show (labeljour_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), labeljour_reclamation, 144, 224);
  gtk_widget_set_size_request (labeljour_reclamation, 41, 17);

  labelmois_reclamation = gtk_label_new (_("Mois"));
  gtk_widget_show (labelmois_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), labelmois_reclamation, 216, 224);
  gtk_widget_set_size_request (labelmois_reclamation, 41, 17);

  labelannee_reclamation = gtk_label_new (_("Annee"));
  gtk_widget_show (labelannee_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), labelannee_reclamation, 272, 216);
  gtk_widget_set_size_request (labelannee_reclamation, 64, 24);

  labelsexe = gtk_label_new (_("Sexe"));
  gtk_widget_show (labelsexe);
  gtk_fixed_put (GTK_FIXED (fixed1), labelsexe, 56, 368);
  gtk_widget_set_size_request (labelsexe, 49, 17);

  radiobuttonhomme_reclamation = gtk_radio_button_new_with_mnemonic (NULL, _("Homme"));
  gtk_widget_show (radiobuttonhomme_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), radiobuttonhomme_reclamation, 112, 360);
  gtk_widget_set_size_request (radiobuttonhomme_reclamation, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobuttonhomme_reclamation), radiobuttonhomme_reclamation_group);
  radiobuttonhomme_reclamation_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobuttonhomme_reclamation));

  radiobuttonfemme_reclamation = gtk_radio_button_new_with_mnemonic (NULL, _("Femme"));
  gtk_widget_show (radiobuttonfemme_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), radiobuttonfemme_reclamation, 208, 360);
  gtk_widget_set_size_request (radiobuttonfemme_reclamation, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobuttonfemme_reclamation), radiobuttonhomme_reclamation_group);
  radiobuttonhomme_reclamation_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobuttonfemme_reclamation));

  labeleducation_reclamation = gtk_label_new (_("Education"));
  gtk_widget_show (labeleducation_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), labeleducation_reclamation, 16, 424);
  gtk_widget_set_size_request (labeleducation_reclamation, 96, 32);

  checkbuttonprepa_reclamation = gtk_check_button_new_with_mnemonic (_("Prepa"));
  gtk_widget_show (checkbuttonprepa_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), checkbuttonprepa_reclamation, 128, 424);
  gtk_widget_set_size_request (checkbuttonprepa_reclamation, 118, 24);

  label19 = gtk_label_new_with_mnemonic (_("<span color=\"#117A65\"><u>ajout des donnees et la reclamation</u></span>"));
  gtk_widget_show (label19);
  gtk_fixed_put (GTK_FIXED (fixed1), label19, 184, 16);
  gtk_widget_set_size_request (label19, 304, 16);
  gtk_label_set_use_markup (GTK_LABEL (label19), TRUE);

  checkbuttonbussiness_reclamation = gtk_check_button_new_with_mnemonic (_("Bussiness"));
  gtk_widget_show (checkbuttonbussiness_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), checkbuttonbussiness_reclamation, 128, 488);
  gtk_widget_set_size_request (checkbuttonbussiness_reclamation, 118, 24);

  checkbuttoncycleding_reclamation = gtk_check_button_new_with_mnemonic (_("Cycle d'Ingenieur"));
  gtk_widget_show (checkbuttoncycleding_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), checkbuttoncycleding_reclamation, 128, 456);
  gtk_widget_set_size_request (checkbuttoncycleding_reclamation, 144, 24);

  buttonmodifier_reclamation = gtk_button_new ();
  gtk_widget_show (buttonmodifier_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), buttonmodifier_reclamation, 328, 64);
  gtk_widget_set_size_request (buttonmodifier_reclamation, 96, 40);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (buttonmodifier_reclamation), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label15 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label15);
  gtk_box_pack_start (GTK_BOX (hbox3), label15, FALSE, FALSE, 0);

  image8 = create_pixmap (windowajouter_reclamation, "claim accepted.png");
  gtk_widget_show (image8);
  gtk_fixed_put (GTK_FIXED (fixed1), image8, 344, 344);
  gtk_widget_set_size_request (image8, 256, 208);

  labelreclamation = gtk_label_new (_("Reclamation"));
  gtk_widget_show (labelreclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), labelreclamation, 248, 288);
  gtk_widget_set_size_request (labelreclamation, 96, 32);

  buttonajouter_reclamation = gtk_button_new ();
  gtk_widget_show (buttonajouter_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), buttonajouter_reclamation, 528, 280);
  gtk_widget_set_size_request (buttonajouter_reclamation, 96, 40);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (buttonajouter_reclamation), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label13 = gtk_label_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (label13);
  gtk_box_pack_start (GTK_BOX (hbox1), label13, FALSE, FALSE, 0);

  buttonafficher_reclamation = gtk_button_new ();
  gtk_widget_show (buttonafficher_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), buttonafficher_reclamation, 488, 64);
  gtk_widget_set_size_request (buttonafficher_reclamation, 96, 40);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (buttonafficher_reclamation), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-justify-fill", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label14 = gtk_label_new_with_mnemonic (_("Afficher"));
  gtk_widget_show (label14);
  gtk_box_pack_start (GTK_BOX (hbox2), label14, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) radiobuttonhomme_reclamation, "toggled",
                    G_CALLBACK (on_radiobuttonhomme_reclamation_toggled),
                    NULL);
  g_signal_connect ((gpointer) radiobuttonfemme_reclamation, "toggled",
                    G_CALLBACK (on_radiobuttonfemme_reclamation_toggled),
                    NULL);
  g_signal_connect ((gpointer) checkbuttonprepa_reclamation, "toggled",
                    G_CALLBACK (on_checkbuttonprepa_reclamation_toggled),
                    NULL);
  g_signal_connect ((gpointer) checkbuttonbussiness_reclamation, "toggled",
                    G_CALLBACK (on_checkbuttonbussiness_reclamation_toggled),
                    NULL);
  g_signal_connect ((gpointer) checkbuttoncycleding_reclamation, "toggled",
                    G_CALLBACK (on_checkbuttoncycleding_reclamation_toggled),
                    NULL);
  g_signal_connect ((gpointer) buttonmodifier_reclamation, "clicked",
                    G_CALLBACK (on_buttonmodifier_reclamation_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonajouter_reclamation, "clicked",
                    G_CALLBACK (on_buttonajouter_reclamation_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonafficher_reclamation, "clicked",
                    G_CALLBACK (on_buttonafficher_reclamation_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (windowajouter_reclamation, windowajouter_reclamation, "windowajouter_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, entryid_reclamation, "entryid_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, entrycin_reclmation, "entrycin_reclmation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, entrynom_reclamation, "entrynom_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, entryprenom_reclamation, "entryprenom_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, spinbuttonjour_reclamation, "spinbuttonjour_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, spinbuttonmois_reclamation, "spinbuttonmois_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, spinbuttonannee_reclamation, "spinbuttonannee_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, entryreclamation, "entryreclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, labelnom_reclamation, "labelnom_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, labelprenom_reclamation, "labelprenom_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, labelid, "labelid");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, labelcin, "labelcin");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, labeltype_reclamation, "labeltype_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, comboboxtype_reclamation, "comboboxtype_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, labeldate_reclamation, "labeldate_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, labeljour_reclamation, "labeljour_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, labelmois_reclamation, "labelmois_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, labelannee_reclamation, "labelannee_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, labelsexe, "labelsexe");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, radiobuttonhomme_reclamation, "radiobuttonhomme_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, radiobuttonfemme_reclamation, "radiobuttonfemme_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, labeleducation_reclamation, "labeleducation_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, checkbuttonprepa_reclamation, "checkbuttonprepa_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, label19, "label19");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, checkbuttonbussiness_reclamation, "checkbuttonbussiness_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, checkbuttoncycleding_reclamation, "checkbuttoncycleding_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, buttonmodifier_reclamation, "buttonmodifier_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, image3, "image3");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, label15, "label15");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, image8, "image8");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, labelreclamation, "labelreclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, buttonajouter_reclamation, "buttonajouter_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, image1, "image1");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, label13, "label13");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, buttonafficher_reclamation, "buttonafficher_reclamation");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, image2, "image2");
  GLADE_HOOKUP_OBJECT (windowajouter_reclamation, label14, "label14");

  return windowajouter_reclamation;
}

GtkWidget*
create_windowafficher_reclamation (void)
{
  GtkWidget *windowafficher_reclamation;
  GtkWidget *fixed2;
  GtkWidget *treeview_reclamation;
  GtkWidget *entryrecherche_reclamation;
  GtkWidget *label20;
  GtkWidget *image9;
  GtkWidget *labelcin_reclamation;
  GtkWidget *buttonrecherche_reclamation;
  GtkWidget *image4;
  GtkWidget *buttongotomodifier_reclamation;
  GtkWidget *buttonsupprimer_reclamation;
  GtkWidget *buttongotoserviceleplusreclame_reclamation;
  GtkWidget *buttongotoajouter;

  windowafficher_reclamation = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (windowafficher_reclamation), _("Afficher"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (windowafficher_reclamation), fixed2);

  treeview_reclamation = gtk_tree_view_new ();
  gtk_widget_show (treeview_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed2), treeview_reclamation, 8, 96);
  gtk_widget_set_size_request (treeview_reclamation, 736, 232);

  entryrecherche_reclamation = gtk_entry_new ();
  gtk_widget_show (entryrecherche_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed2), entryrecherche_reclamation, 264, 48);
  gtk_widget_set_size_request (entryrecherche_reclamation, 160, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryrecherche_reclamation), 8226);

  label20 = gtk_label_new_with_mnemonic (_("<span color=\"#117A65\"><u>afficher des reclamations</u></span>"));
  gtk_widget_show (label20);
  gtk_fixed_put (GTK_FIXED (fixed2), label20, 280, 8);
  gtk_widget_set_size_request (label20, 224, 33);
  gtk_label_set_use_markup (GTK_LABEL (label20), TRUE);

  image9 = create_pixmap (windowafficher_reclamation, "af1.png");
  gtk_widget_show (image9);
  gtk_fixed_put (GTK_FIXED (fixed2), image9, 0, 0);
  gtk_widget_set_size_request (image9, 152, 96);

  labelcin_reclamation = gtk_label_new (_("CIN"));
  gtk_widget_show (labelcin_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed2), labelcin_reclamation, 160, 56);
  gtk_widget_set_size_request (labelcin_reclamation, 120, 16);

  buttonrecherche_reclamation = gtk_button_new ();
  gtk_widget_show (buttonrecherche_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed2), buttonrecherche_reclamation, 440, 48);
  gtk_widget_set_size_request (buttonrecherche_reclamation, 40, 32);

  image4 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_container_add (GTK_CONTAINER (buttonrecherche_reclamation), image4);

  buttongotomodifier_reclamation = gtk_button_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (buttongotomodifier_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed2), buttongotomodifier_reclamation, 752, 160);
  gtk_widget_set_size_request (buttongotomodifier_reclamation, 136, 40);

  buttonsupprimer_reclamation = gtk_button_new_with_mnemonic (_("Supprimer"));
  gtk_widget_show (buttonsupprimer_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed2), buttonsupprimer_reclamation, 752, 216);
  gtk_widget_set_size_request (buttonsupprimer_reclamation, 136, 40);

  buttongotoserviceleplusreclame_reclamation = gtk_button_new_with_mnemonic (_("Tache Dashboard"));
  gtk_widget_show (buttongotoserviceleplusreclame_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed2), buttongotoserviceleplusreclame_reclamation, 752, 272);
  gtk_widget_set_size_request (buttongotoserviceleplusreclame_reclamation, 136, 40);

  buttongotoajouter = gtk_button_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (buttongotoajouter);
  gtk_fixed_put (GTK_FIXED (fixed2), buttongotoajouter, 752, 104);
  gtk_widget_set_size_request (buttongotoajouter, 136, 40);

  g_signal_connect ((gpointer) buttonrecherche_reclamation, "clicked",
                    G_CALLBACK (on_buttonrecherche_reclamation_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttongotomodifier_reclamation, "clicked",
                    G_CALLBACK (on_buttongotomodifier_reclamation_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonsupprimer_reclamation, "clicked",
                    G_CALLBACK (on_buttonsupprimer_reclamation_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttongotoserviceleplusreclame_reclamation, "clicked",
                    G_CALLBACK (on_buttongotoserviceleplusreclame_reclamation_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttongotoajouter, "clicked",
                    G_CALLBACK (on_buttongotoajouter_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (windowafficher_reclamation, windowafficher_reclamation, "windowafficher_reclamation");
  GLADE_HOOKUP_OBJECT (windowafficher_reclamation, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (windowafficher_reclamation, treeview_reclamation, "treeview_reclamation");
  GLADE_HOOKUP_OBJECT (windowafficher_reclamation, entryrecherche_reclamation, "entryrecherche_reclamation");
  GLADE_HOOKUP_OBJECT (windowafficher_reclamation, label20, "label20");
  GLADE_HOOKUP_OBJECT (windowafficher_reclamation, image9, "image9");
  GLADE_HOOKUP_OBJECT (windowafficher_reclamation, labelcin_reclamation, "labelcin_reclamation");
  GLADE_HOOKUP_OBJECT (windowafficher_reclamation, buttonrecherche_reclamation, "buttonrecherche_reclamation");
  GLADE_HOOKUP_OBJECT (windowafficher_reclamation, image4, "image4");
  GLADE_HOOKUP_OBJECT (windowafficher_reclamation, buttongotomodifier_reclamation, "buttongotomodifier_reclamation");
  GLADE_HOOKUP_OBJECT (windowafficher_reclamation, buttonsupprimer_reclamation, "buttonsupprimer_reclamation");
  GLADE_HOOKUP_OBJECT (windowafficher_reclamation, buttongotoserviceleplusreclame_reclamation, "buttongotoserviceleplusreclame_reclamation");
  GLADE_HOOKUP_OBJECT (windowafficher_reclamation, buttongotoajouter, "buttongotoajouter");

  return windowafficher_reclamation;
}

GtkWidget*
create_windowserviceleplusreclame (void)
{
  GtkWidget *windowserviceleplusreclame;
  GtkWidget *fixed3;
  GtkWidget *label21;
  GtkWidget *buttonserviceleplusreclame_reclamation;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image6;
  GtkWidget *label17;
  GtkWidget *image11;
  GtkWidget *buttongotoafficher2_reclamation;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image7;
  GtkWidget *label18;
  GtkWidget *labelserviceleplusreclame;

  windowserviceleplusreclame = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (windowserviceleplusreclame), _("Le service le plus reclam\303\251"));

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (windowserviceleplusreclame), fixed3);

  label21 = gtk_label_new_with_mnemonic (_("<span color=\"#117A65\"><u>service le plus reclam\303\250</u></span>"));
  gtk_widget_show (label21);
  gtk_fixed_put (GTK_FIXED (fixed3), label21, 248, 32);
  gtk_widget_set_size_request (label21, 248, 16);
  gtk_label_set_use_markup (GTK_LABEL (label21), TRUE);

  buttonserviceleplusreclame_reclamation = gtk_button_new ();
  gtk_widget_show (buttonserviceleplusreclame_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed3), buttonserviceleplusreclame_reclamation, 24, 96);
  gtk_widget_set_size_request (buttonserviceleplusreclame_reclamation, 192, 40);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (buttonserviceleplusreclame_reclamation), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image6 = gtk_image_new_from_stock ("gtk-goto-bottom", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox5), image6, FALSE, FALSE, 0);

  label17 = gtk_label_new_with_mnemonic (_("Service le plus reclam\303\251"));
  gtk_widget_show (label17);
  gtk_box_pack_start (GTK_BOX (hbox5), label17, FALSE, FALSE, 0);

  image11 = create_pixmap (windowserviceleplusreclame, "symboles-justice-e1575985260442.jpg");
  gtk_widget_show (image11);
  gtk_fixed_put (GTK_FIXED (fixed3), image11, 0, 152);
  gtk_widget_set_size_request (image11, 904, 592);

  buttongotoafficher2_reclamation = gtk_button_new ();
  gtk_widget_show (buttongotoafficher2_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed3), buttongotoafficher2_reclamation, 648, 88);
  gtk_widget_set_size_request (buttongotoafficher2_reclamation, 120, 48);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (buttongotoafficher2_reclamation), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image7 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox6), image7, FALSE, FALSE, 0);

  label18 = gtk_label_new_with_mnemonic (_("Retour"));
  gtk_widget_show (label18);
  gtk_box_pack_start (GTK_BOX (hbox6), label18, FALSE, FALSE, 0);

  labelserviceleplusreclame = gtk_label_new ("");
  gtk_widget_show (labelserviceleplusreclame);
  gtk_fixed_put (GTK_FIXED (fixed3), labelserviceleplusreclame, 232, 96);
  gtk_widget_set_size_request (labelserviceleplusreclame, 408, 40);

  g_signal_connect ((gpointer) buttonserviceleplusreclame_reclamation, "clicked",
                    G_CALLBACK (on_buttonserviceleplusreclame_reclamation_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttongotoafficher2_reclamation, "clicked",
                    G_CALLBACK (on_buttongotoafficher2_reclamation_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (windowserviceleplusreclame, windowserviceleplusreclame, "windowserviceleplusreclame");
  GLADE_HOOKUP_OBJECT (windowserviceleplusreclame, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (windowserviceleplusreclame, label21, "label21");
  GLADE_HOOKUP_OBJECT (windowserviceleplusreclame, buttonserviceleplusreclame_reclamation, "buttonserviceleplusreclame_reclamation");
  GLADE_HOOKUP_OBJECT (windowserviceleplusreclame, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (windowserviceleplusreclame, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (windowserviceleplusreclame, image6, "image6");
  GLADE_HOOKUP_OBJECT (windowserviceleplusreclame, label17, "label17");
  GLADE_HOOKUP_OBJECT (windowserviceleplusreclame, image11, "image11");
  GLADE_HOOKUP_OBJECT (windowserviceleplusreclame, buttongotoafficher2_reclamation, "buttongotoafficher2_reclamation");
  GLADE_HOOKUP_OBJECT (windowserviceleplusreclame, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (windowserviceleplusreclame, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (windowserviceleplusreclame, image7, "image7");
  GLADE_HOOKUP_OBJECT (windowserviceleplusreclame, label18, "label18");
  GLADE_HOOKUP_OBJECT (windowserviceleplusreclame, labelserviceleplusreclame, "labelserviceleplusreclame");

  return windowserviceleplusreclame;
}
