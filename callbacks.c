#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include "reclamation.h"
#include "callbacks.h"
#include "interface.h"
#include "support.h"
int x,y;

void
on_radiobuttonhomme_reclamation_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
		x=0;

}


void
on_buttonafficher_reclamation_clicked  (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *windowafficher_reclamation,*windowajouter_reclamation,*treeview_reclamation;
	windowafficher_reclamation=lookup_widget(objet_graphique,"windowafficher_reclamation");
	windowajouter_reclamation=lookup_widget(objet_graphique,"windowajouter_reclamation");
	gtk_widget_destroy(windowajouter_reclamation);
	windowafficher_reclamation=create_windowafficher_reclamation();
	gtk_widget_show(windowafficher_reclamation);
	treeview_reclamation=lookup_widget(windowafficher_reclamation,"treeview_reclamation");
	afficher_reclamation(treeview_reclamation,"reclamation.txt");
	

}


void
on_buttonajouter_reclamation_clicked   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	reclamation r;
	GtkWidget *id,*cin,*nom,*prenom,*type,*text_reclamation,*jour,*mois,*annee;
	id=lookup_widget(objet_graphique,"entryid_reclamation");
	cin=lookup_widget(objet_graphique,"entrycin_reclmation");
	nom=lookup_widget(objet_graphique,"entrynom_reclamation");
	prenom=lookup_widget(objet_graphique,"entryprenom_reclamation");
	type=lookup_widget(objet_graphique,"comboboxtype_reclamation");
	text_reclamation=lookup_widget(objet_graphique,"entryreclamation")
;
	jour=lookup_widget(objet_graphique,"spinbuttonjour_reclamation");
	mois=lookup_widget(objet_graphique,"spinbuttonmois_reclamation");
	annee=lookup_widget(objet_graphique,"spinbuttonannee_reclamation");

	strcpy(r.id,gtk_entry_get_text(GTK_ENTRY(id)));
	strcpy(r.cin,gtk_entry_get_text(GTK_ENTRY(cin)));
	strcpy(r.nom,gtk_entry_get_text(GTK_ENTRY(nom)));
	strcpy(r.prenom,gtk_entry_get_text(GTK_ENTRY(prenom)));
	strcpy(r.text_reclamation,gtk_entry_get_text(GTK_ENTRY(text_reclamation)));
	r.d.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
	r.d.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
	r.d.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));

	if(strcmp("Service d'hebergement",gtk_combo_box_get_active_text(GTK_COMBO_BOX(type)))==0)
		r.type=0;
	else
		r.type=1;
	r.sexe=x;
	r.education=y;
	ajouter_reclamation(r);
	
	
}


void
on_buttonmodifier_reclamation_clicked  (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	reclamation r;
	GtkWidget *id,*cin,*nom,*prenom,*type,*text_reclamation,*jour,*mois,*annee;
	id=lookup_widget(objet_graphique,"entryid_reclamation");
	cin=lookup_widget(objet_graphique,"entrycin_reclmation");
	nom=lookup_widget(objet_graphique,"entrynom_reclamation");
	prenom=lookup_widget(objet_graphique,"entryprenom_reclamation");
	type=lookup_widget(objet_graphique,"comboboxtype_reclamation");
	text_reclamation=lookup_widget(objet_graphique,"entryreclamation");
	jour=lookup_widget(objet_graphique,"spinbuttonjour_reclamation");
	mois=lookup_widget(objet_graphique,"spinbuttonmois_reclamation");
	annee=lookup_widget(objet_graphique,"spinbuttonannee_reclamation");
	strcpy(r.id,gtk_entry_get_text(GTK_ENTRY(id)));
	strcpy(r.cin,gtk_entry_get_text(GTK_ENTRY(cin)));
	strcpy(r.nom,gtk_entry_get_text(GTK_ENTRY(nom)));
	strcpy(r.prenom,gtk_entry_get_text(GTK_ENTRY(prenom)));
	strcpy(r.text_reclamation,gtk_entry_get_text(GTK_ENTRY(text_reclamation)));
	r.d.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
	r.d.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
	r.d.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));
	if(strcmp("Service d'hebergement",gtk_combo_box_get_active_text(GTK_COMBO_BOX(type)))==0)
		r.type=0;
	else
		r.type=1;
	r.sexe=x;
	r.education=y;
	modifier_reclamation(r);
}


void
on_radiobuttonfemme_reclamation_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
		x=1;

}


void
on_checkbuttonprepa_reclamation_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	if(gtk_toggle_button_get_active(togglebutton))
		y=0;

}


void
on_checkbuttoncycleding_reclamation_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	if(gtk_toggle_button_get_active(togglebutton))
		y=1;

}


void
on_checkbuttonbussiness_reclamation_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	if(gtk_toggle_button_get_active(togglebutton))
		y=2;

}


void
on_buttonrecherche_reclamation_clicked (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *cin,*treeview_reclamation;
	char cin1[20];
	cin=lookup_widget(objet_graphique,"entryrecherche_reclamation");
	treeview_reclamation=lookup_widget(objet_graphique,"treeview_reclamation");
	strcpy(cin1,gtk_entry_get_text(GTK_ENTRY(cin)));
	if(strcmp(cin1,"")!=0)
	{
		recherche_reclamation(cin1);
		afficher_reclamation(treeview_reclamation,"recherche.txt");
		remove("recherche.txt");
	}
	else
		afficher_reclamation(treeview_reclamation,"reclamation.txt");
	
	

}


void
on_buttongotoajouter_clicked           (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *windowafficher_reclamation,*windowajouter_reclamation,*treeview_reclamation;
	windowafficher_reclamation=lookup_widget(objet_graphique,"windowafficher_reclamation");
	windowajouter_reclamation=lookup_widget(objet_graphique,"windowajouter_reclamation");
	gtk_widget_destroy(windowafficher_reclamation);
	windowajouter_reclamation=create_windowajouter_reclamation();
	gtk_widget_show(windowajouter_reclamation);

}


void
on_buttongotomodifier_reclamation_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *windowajouter_reclamation,*windowafficher_reclamation;
	GtkTreeModel     *model;
        GtkTreeSelection *selection;
        GtkTreeIter iter;
        GtkWidget* treeview;
	
	
        gchar* id;
	gchar* cin;
	gchar* nom;
	gchar* prenom;
	gchar* text;
	gint sexe;
	gint education;
	gint jour;
	gint mois;
	gint annee;
	gint type;
	windowafficher_reclamation=lookup_widget(objet_graphique,"windowafficher_reclamation");
        treeview=lookup_widget(windowafficher_reclamation,"treeview_reclamation");
        selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(treeview));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {
		gtk_tree_model_get (model,&iter,0,&id,1,&cin,2,&nom,3,&prenom,4,&type,5,&jour,6,&mois,7,&annee,8,&text,9,&sexe,10,&education,-1);
		gtk_widget_destroy(windowafficher_reclamation);
		windowajouter_reclamation=lookup_widget(objet_graphique,"windowajouter_reclamation");
		windowajouter_reclamation=create_windowajouter_reclamation();
		gtk_widget_show(windowajouter_reclamation);
	        gtk_entry_set_text(GTK_ENTRY(lookup_widget(windowajouter_reclamation,"entryid_reclamation")),id);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(windowajouter_reclamation,"entrycin_reclmation")),cin);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(windowajouter_reclamation,"entrynom_reclamation")),nom);
		gtk_entry_set_text(GTK_ENTRY(lookup_widget(windowajouter_reclamation,"entryprenom_reclamation")),prenom);
		gtk_entry_set_text(GTK_ENTRY(lookup_widget(windowajouter_reclamation,"entryreclamation")),text);
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(windowajouter_reclamation,"spinbuttonjour_reclamation")),jour);
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(windowajouter_reclamation,"spinbuttonmois_reclamation")),mois);
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(windowajouter_reclamation,"spinbuttonannee_reclamation")),annee);
		gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowajouter_reclamation,"comboboxtype_reclamation")),type);

	}
}


void
on_buttonsupprimer_reclamation_clicked (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *windowajouter_reclamation,*windowafficher_reclamation;
	GtkTreeModel  *model;
        GtkTreeSelection *selection;
        GtkTreeIter iter;
        GtkWidget* treeview;
	
	
        gchar* id;
	
	windowafficher_reclamation=lookup_widget(objet_graphique,"windowafficher_reclamation");
        treeview=lookup_widget(windowafficher_reclamation,"treeview_reclamation");
        selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(treeview));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {
		gtk_tree_model_get (model,&iter,0,&id,-1);
		supprimer_reclamation(id);
		afficher_reclamation(treeview,"reclamation.txt");
		
	}
}


void
on_buttongotoserviceleplusreclame_reclamation_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *windowafficher_reclamation,*windowserviceleplusreclame;
	windowafficher_reclamation=lookup_widget(objet_graphique,"windowafficher_reclamation");
	windowserviceleplusreclame=lookup_widget(objet_graphique,"windowserviceleplusreclame");
	gtk_widget_destroy(windowafficher_reclamation);
	windowserviceleplusreclame=create_windowserviceleplusreclame();
	gtk_widget_show(windowserviceleplusreclame);
}


void
on_buttonserviceleplusreclame_reclamation_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	int r;
	GtkWidget *resultat;
	resultat=lookup_widget(objet_graphique,"labelserviceleplusreclame");
	r=serviceleplusreclame();
	if(r==0)
		gtk_label_set_text(GTK_LABEL(resultat),"Le service le plus reclamé est : Service d'hebergement");
	else
		gtk_label_set_text(GTK_LABEL(resultat),"Le service le plus reclamé est : Service de restauration");
}


void
on_buttongotoafficher2_reclamation_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *windowafficher_reclamation,*windowserviceleplusreclame,*treeview_reclamation;
	windowafficher_reclamation=lookup_widget(objet_graphique,"windowafficher_reclamation");
	windowserviceleplusreclame=lookup_widget(objet_graphique,"windowserviceleplusreclame");
	gtk_widget_destroy(windowserviceleplusreclame);
	windowafficher_reclamation=create_windowafficher_reclamation();
	gtk_widget_show(windowafficher_reclamation);
	treeview_reclamation=lookup_widget(windowafficher_reclamation,"treeview_reclamation");
	afficher_reclamation(treeview_reclamation,"reclamation.txt");
}




