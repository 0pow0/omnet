//
// Generated file, do not edit! Created by nedtool 5.6 from stack/rlc/packet/LteRlcSdu.msg.
//

#ifndef __LTERLCSDU_M_H
#define __LTERLCSDU_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



class LteRlcSdu;
#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk

/**
 * Class generated from <tt>stack/rlc/packet/LteRlcSdu.msg:20</tt> by nedtool.
 * <pre>
 * class LteRlcSdu extends inet::FieldsChunk
 * {
 *     //\@customize(true);
 *     // TODO: size 0
 *     chunkLength = inet::B(1); // TODO: should be a tag;
 *     unsigned int snoMainPacket;                        // ID of packet (sequence number)
 *     unsigned int lengthMainPacket;
 * }
 * </pre>
 */
class LteRlcSdu : public ::inet::FieldsChunk
{
  protected:
    unsigned int snoMainPacket = 0;
    unsigned int lengthMainPacket = 0;

  private:
    void copy(const LteRlcSdu& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LteRlcSdu&);

  public:
    LteRlcSdu();
    LteRlcSdu(const LteRlcSdu& other);
    virtual ~LteRlcSdu();
    LteRlcSdu& operator=(const LteRlcSdu& other);
    virtual LteRlcSdu *dup() const override {return new LteRlcSdu(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned int getSnoMainPacket() const;
    virtual void setSnoMainPacket(unsigned int snoMainPacket);
    virtual unsigned int getLengthMainPacket() const;
    virtual void setLengthMainPacket(unsigned int lengthMainPacket);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const LteRlcSdu& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, LteRlcSdu& obj) {obj.parsimUnpack(b);}

#endif // ifndef __LTERLCSDU_M_H

