// File: crn_texture_file_types.h
// See Copyright Notice and license at the end of inc/crnlib.h
#pragma once
#include "../inc/crnlib.h"
#include "crn_vec.h"
#include "crn_pixel_format.h"
#include "crn_export.h"

namespace crnlib {
struct texture_file_types {
  enum format {
    cFormatInvalid = -1,

    cFormatDDS,
    cFormatCRN,
    cFormatKTX,

    cNumMipmappedFileFormats,

    cFormatTGA = cNumMipmappedFileFormats,
    cFormatPNG,
    cFormatJPG,
    cFormatJPEG,
    cFormatBMP,
    cFormatGIF,
    cFormatTIF,
    cFormatTIFF,
    cFormatPPM,
    cFormatPGM,
    cFormatPSD,
    cFormatJP2,

    cNumRegularFileFormats,

    cNumImageFileFormats = cNumRegularFileFormats - cNumMipmappedFileFormats,

    // Not really a file format
    cFormatClipboard = cNumRegularFileFormats,
    cFormatDragDrop,

    cNumFileFormats
  };

  CRN_EXPORT static const char* get_extension(format fmt);

  CRN_EXPORT static format determine_file_format(const char* pFilename);

  CRN_EXPORT static bool supports_mipmaps(format fmt);
  CRN_EXPORT static bool supports_alpha(format fmt);
};

enum texture_type {
  cTextureTypeUnknown = 0,
  cTextureTypeRegularMap,
  cTextureTypeNormalMap,
  cTextureTypeVerticalCrossCubemap,
  cTextureTypeCubemap,

  cNumTextureTypes
};

CRN_EXPORT const char* get_texture_type_desc(texture_type t);

}  // namespace crnlib
