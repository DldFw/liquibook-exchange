// Copyright (c) 2009, 2011 Object Computing, Inc.
// All rights reserved.
// See the file license.txt for licensing information.
#ifdef _MSC_VER
# pragma once
#endif
#ifndef SEGMENTBODY_FWD_H
#define SEGMENTBODY_FWD_H
#ifndef QUICKFAST_HEADERS
#error Please include <Application/QuickFAST.h> preferably as a precompiled header file.
#endif //QUICKFAST_HEADERS

namespace QuickFAST{
  namespace Codecs{
    class SegmentBody;
    /// @brief A smart pointer to a SegmentBody.
    typedef boost::shared_ptr<SegmentBody> SegmentBodyPtr;
    /// @brief A smart pointer to a const SegmentBody.
    typedef boost::shared_ptr<const SegmentBody> SegmentBodyCPtr;
  }
}
#endif // SEGMENTBODY_FWD_H
