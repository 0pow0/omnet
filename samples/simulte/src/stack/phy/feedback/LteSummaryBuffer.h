
/*
 * LteSummaryBuffer.h
 *
 *  Created on: Oct 13, 2019
 *      Author: q
 */

#ifndef STACK_PHY_FEEDBACK_LTESUMMARYBUFFER_H_
#define STACK_PHY_FEEDBACK_LTESUMMARYBUFFER_H_

#include <list>
#include "stack/phy/feedback/LteSummaryBuffer.h"
#include "stack/phy/feedback/LteFeedback.h"

class SIMULTE_API LteSummaryBuffer
{
  protected:
    //! Buffer dimension
    unsigned char bufferSize_;
    //! The buffer
    std::list<LteFeedback> buffer_;
    //! Number of codewords.
    double totCodewords_;
    //! Number of bands.
    double totBands_;
    //! Cumulative summary feedback.
    LteSummaryFeedback cumulativeSummary_;
    void createSummary(LteFeedback fb);

  public:

    LteSummaryBuffer(unsigned char dim, unsigned char cw, unsigned int b, omnetpp::simtime_t lb, omnetpp::simtime_t ub) :
        bufferSize_(dim), totCodewords_(cw), totBands_(b), cumulativeSummary_(cw, b, lb, ub)
    { }

    //! Put a feedback into the buffer and update current summary feedback
    void put(LteFeedback fb)
    {
        if (bufferSize_ > 0)
        {
            buffer_.push_back(fb);
        }
        if (buffer_.size() > bufferSize_)
        {
            buffer_.pop_front();
        }
        createSummary(fb);
    }

    //! Get the current summary feedback
    LteSummaryFeedback get() const
    {
        return cumulativeSummary_;
    }
};



#endif /* STACK_PHY_FEEDBACK_LTESUMMARYBUFFER_H_ */
