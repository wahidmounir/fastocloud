/*  Copyright (C) 2014-2021 FastoGT. All right reserved.
    This file is part of fastocloud.
    fastocloud is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    fastocloud is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with fastocloud.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// for element_id_t

#include "stream/stypes.h"

#include "base/output_uri.h"

namespace fastocloud {
namespace stream {
namespace elements {
class Element;

namespace sink {

Element* build_output(const OutputUri& output, element_id_t sink_id, bool is_vod, bool is_cod);

}  // namespace sink
}  // namespace elements
}  // namespace stream
}  // namespace fastocloud
