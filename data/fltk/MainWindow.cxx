// generated by Fast Light User Interface Designer (fluid) version 1.0309

#include <vendor/libintl.h>
#include <data/fltk/MainWindow.h>
UserInterface::UserInterface(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) 
{
	this->align(Fl_Align(FL_ALIGN_CLIP|FL_ALIGN_INSIDE));
	{ 
		Fl_Table* o = new Fl_Table(
			5, 
			35, 
			200, 
			180, 
			gettext("\320\242\320\265\321\205\320\275\320\276\320\273\320\276\320\263\320\270\320\270")
			);
		
	  o->end();
	} // Fl_Table* o
	{ 
		Fl_Table* o = new Fl_Table(
			210, 
			35, 
			200, 
			180, 
			gettext("\320\230\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\321\213")
			);
		  o->end();
	} // Fl_Table* o
	{ 
		Fl_Table* o = new Fl_Table(
		415, 
		35, 
		200, 
		180, 
		gettext("\320\227\320\260\320\277\321\207\320\260\321\201\321\202\320\270")
		);
	  o->end();
	} // Fl_Table* o
	{ 
		Fl_Table* o = new Fl_Table(
			620, 
			35, 
			200, 
			180, 
			gettext("\320\227\320\275\320\260\320\275\320\270\321\217")
			);
	  o->end();
	} // Fl_Table* o
	{ 
		Fl_Table* o = new Fl_Table(
			5, 
			265, 
			200, 
			110, 
			gettext("\320\242\321\200\320\265\320\261\321\203\320\265\320\274\321\213\320\265 \320\275\320\260\320\262\321\213\320\272\320\270")
			);
	  o->end();
	} // Fl_Table* o
	{ 
		Fl_Table* o = new Fl_Table(
			620, 
			270, 
			200, 
			105, 
			gettext("\320\241\320\277\320\265\321\206\320\270\320\260\320\273\321\214\320\275\320\276\321\201\321\202\320\270")
			);
	  o->end();
	} // Fl_Table* o
	{ 
		new Fl_Button(
			215, 
			230, 
			130, 
			25, 
			gettext("\320\235\320\276\320\262\321\213\320\271 \320\275\320\260\320\262\321\213\320\272")
			);
	} // Fl_Button* o
	{ 
		new Fl_Button(
			325, 
			300, 
			170, 
			25, 
			gettext("\320\235\320\260\320\271\321\202\320\270 \321\201\320\277\320\265\321\206\320\270\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214")
			);
	} // Fl_Button* o
	{ 
		new Fl_Button(
			345, 
			230, 
			130, 
			25, 
			gettext("\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\275\320\260\320\262\321\213\320\272")
			);
	} // Fl_Button* o
	{ 
		new Fl_Button(
			475, 
			230, 
			130, 
			25, 
			gettext("\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\275\320\260\320\262\321\213\320\272")
			);
	} // Fl_Button* o
	position(X, Y);
	end();
}
