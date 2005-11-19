#ifndef __VIKING_MENU_XML_H
#define __VIKING_MENU_XML_H

static const char *menu_xml =
	"<ui>"
	"  <menubar name='MainMenu'>"
	"    <menu action='File'>"
	"      <menuitem action='New'/>"
	"      <menuitem action='Open'/>"
	"      <menuitem action='Append'/>"
	"      <menuitem action='Acquire'/>"
	"      <menuitem action='Save'/>"
	"      <menuitem action='SaveAs'/>"
	"      <separator/>"
	"      <menuitem action='GenImg'/>"
	"      <menuitem action='GenImgDir'/>"
	"      <separator/>"
	"      <menuitem action='Exit'/>"
	"    </menu>"
	"    <menu action='View'>"
	"      <menuitem action='ModeUTM'/>"
	"      <menuitem action='ModeExpedia'/>"
	"      <menuitem action='ModeGoogle'/>"
	"      <menuitem action='ModeKH'/>"
	"      <menuitem action='ModeMercator'/>"
	"      <separator/>"
	"      <menuitem action='GotoLL'/>"
	"      <menuitem action='GotoUTM'/>"
	"      <separator/>"
	"      <menuitem action='ShowScale'/>"
	"      <menuitem action='SetBGColor'/>"
	"      <separator/>"
	"      <menuitem action='ZoomIn'/>"
	"      <menuitem action='ZoomOut'/>"
	"      <menuitem action='ZoomTo'/>"
	"      <menu action='SetZoom'>"
	"        <menuitem action='Zoom0.25'/>"
	"        <menuitem action='Zoom0.5'/>"
	"        <menuitem action='Zoom1'/>"
	"        <menuitem action='Zoom2'/>"
	"        <menuitem action='Zoom4'/>"
	"        <menuitem action='Zoom8'/>"
	"        <menuitem action='Zoom16'/>"
	"        <menuitem action='Zoom32'/>"
	"        <menuitem action='Zoom64'/>"
	"        <menuitem action='Zoom128'/>"
	"      </menu>"
	"      <separator/>"
	"      <menuitem action='BGJobs'/>"
	"    </menu>"
	"    <menu action='Layers'>"
	"      <menuitem action='Cut'/>"
	"      <menuitem action='Copy'/>"
	"      <menuitem action='Paste'/>"
	"      <menuitem action='Delete'/>"
	"      <menuitem action='DeleteAll'/>"
	"      <separator/>"
	"      <menuitem action='Properties'/>"
	"      <separator/>"
	"    </menu>"
	"    <menu action='Tools'>"
	"      <menuitem action='Zoom'/>"
	"      <menuitem action='Ruler'/>"
	"    </menu>"
	"  </menubar>"
	"  <toolbar name='MainToolbar'>"
	"    <placeholder name='FileToolItems'>"
	"      <toolitem name='New' action='New'/>"
	"      <toolitem name='Open' action='Open'/>"
	"      <toolitem name='Save' action='Save'/>"
	"      <toolitem name='Exit' action='Exit'/>"
	"      <separator/>"
	"    </placeholder>"
	"    <placeholder name='ToolItems'>"
	"    <toolitem action='Zoom'/>"
	"    <toolitem action='Ruler'/>"
	"    </placeholder>"
	"  </toolbar>"
	"</ui>"
;

#endif
