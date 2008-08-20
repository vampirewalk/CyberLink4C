/************************************************************
*
*	CyberLink for C
*
*	Copyright (C) Satoshi Konno 2005
*
*	File: cdidl.c
*
*	Revision:
*       05/11/05
*               - first release.
*
************************************************************/

#include <cybergarage/upnp/media/cdidl.h>

/****************************************
* Constants
****************************************/

#define CG_UPNP_DMS_DIDL_NAME "DIDL-Lite"
#define CG_UPNP_DMS_DIDL_XMLNS "xmlns"
#define CG_UPNP_DMS_DIDL_XMLNS_URL "urn:schemas-upnp-org:metadata-1-0/DIDL-Lite/"
#define CG_UPNP_DMS_DIDL_XMLNS_DC "xmlns:dc"
#define CG_UPNP_DMS_DIDL_XMLNS_DC_URL "http://purl.org/dc/elements/1.1/"
#define CG_UPNP_DMS_DIDL_XMLNS_UPNP "xmlns:upnp"
#define CG_UPNP_DMS_DIDL_XMLNS_UPNP_URL "urn:schemas-upnp-org:metadata-1-0/upnp/"

/****************************************
* cg_upnp_media_didl_node_new
****************************************/

CgXmlNode *cg_upnp_media_didl_node_new()
{
	CgXmlNode *node;
	
	node = cg_xml_node_new();

	cg_xml_node_setname(node, CG_UPNP_DMS_DIDL_NAME);
	cg_xml_node_setattribute(node, CG_UPNP_DMS_DIDL_XMLNS, CG_UPNP_DMS_DIDL_XMLNS_URL);
	cg_xml_node_setattribute(node, CG_UPNP_DMS_DIDL_XMLNS_DC, CG_UPNP_DMS_DIDL_XMLNS_DC_URL);
	cg_xml_node_setattribute(node, CG_UPNP_DMS_DIDL_XMLNS_UPNP, CG_UPNP_DMS_DIDL_XMLNS_UPNP_URL);

	return node;
}

