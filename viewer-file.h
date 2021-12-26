/*
 * Copyright/Licensing information.
 */

/* inclusion guard */
#pragma once

#include <glib-object.h>

/*
 * Potentially, include other headers on which this header depends.
 */

G_BEGIN_DECLS

/*
 * Type declaration.
 */
#define VIEWER_TYPE_FILE viewer_file_get_type()
G_DECLARE_DERIVABLE_TYPE (ViewerFile, viewer_file, VIEWER, FILE, GObject)

struct _ViewerFileClass
{
  GObjectClass parent_class;

  /* Class virtual function fields. */
  void (* open) (ViewerFile  *file,
                 GError     **error);

  /* Padding to allow adding up to 12 new virtual functions without
   * breaking ABI. */
  gpointer padding[12];
};

/*
 * Method definitions.
 */
ViewerFile *viewer_file_new (void);

G_END_DECLS
