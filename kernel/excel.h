/*
  +----------------------------------------------------------------------+
  | Vtiful Extension                                                     |
  +----------------------------------------------------------------------+
  | Copyright (c) 2017-2017 The Viest                                    |
  +----------------------------------------------------------------------+
  | http://www.viest.me                                                  |
  +----------------------------------------------------------------------+
  | Author: viest <dev@service.viest.me>                                 |
  +----------------------------------------------------------------------+
*/

#ifndef VTIFUL_EXCEL_H
#define VTIFUL_EXCEL_H

#define V_EXCEL_HANDLE "handle"
#define V_EXCEL_FIL "fileName"
#define V_EXCEL_COF "config"
#define V_EXCEL_PAT "path"

extern zend_class_entry *vtiful_excel_ce;

VTIFUL_STARTUP_FUNCTION(excel);

#endif
