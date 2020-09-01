// File: corpus_gen.h
// See Copyright Notice and license at the end of inc/crnlib.h
#pragma once

#include "crn_command_line_params.h"
#include "crn_image.h"

namespace crn
{
    class corpus_gen
    {
    public:
        corpus_gen();

        bool generate(const char* pCmd_line);

    private:
        void sort_blocks(crnlib::image_u8& img);
    };
} // namespace crn
