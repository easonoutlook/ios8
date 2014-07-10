/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class MFMessageStore, MFMimePart, NSArray, NSString, NSURL;

@interface MFMessage : NSObject <NSCopying>
{
    MFMessageStore *_store;
    unsigned int _preferredEncoding;
    NSString *_senderAddressComment;
    unsigned int _dateSentInterval;
    unsigned int _dateReceivedInterval;
    unsigned long long _generationNumber;
    NSString *_subject;
    NSArray *_to;
    NSArray *_cc;
    NSArray *_bcc;
    NSArray *_sender;
    NSString *_contentType;
    long long _messageIDHeaderHash;
    long long _conversationID;
    NSString *_summary;
    NSString *_externalID;
    MFMimePart *_parentPart;
    NSURL *_messageURL;
    NSString *_cachedMessageIDHeader;
    unsigned int _calculatedAttachmentInfo:1;
    unsigned short _numberOfAttachments;
}

+ (void)setMessageClassForStore:(id)arg1;
+ (id)messageWithRFC822Data:(id)arg1 withParentPart:(id)arg2;
+ (id)messageWithRFC822Data:(id)arg1;
+ (Class)dataMessageStoreToUse;
@property(retain, nonatomic) MFMimePart *parentPart; // @synthesize parentPart=_parentPart;
- (id)additionalHeadersForForward;
- (id)additionalHeadersForReply;
- (_Bool)isLibraryMessage;
- (_Bool)canBeDeleted;
- (id)bestAlternativeInPart:(id)arg1;
- (id)defaultAlternativeInPart:(id)arg1;
- (long long)generationCompare:(id)arg1;
- (unsigned long long)generationNumber;
- (void)setGenerationNumber:(unsigned long long)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(_Bool)arg2 isEncrypted:(_Bool)arg3;
- (void)calculateAttachmentInfoFromBody:(id)arg1;
- (void)_calculateAttachmentInfoFromBody:(id)arg1;
- (id)dataPathForMimePart:(id)arg1;
- (_Bool)fetchDataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 withConsumer:(id)arg3 isComplete:(_Bool *)arg4 downloadIfNecessary:(_Bool)arg5;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4 didDownload:(_Bool *)arg5;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 isComplete:(_Bool *)arg3;
- (id)dataForMimePart:(id)arg1;
- (id)headerDataDownloadIfNecessary:(_Bool)arg1;
- (id)headerData;
- (id)bodyDataIsComplete:(_Bool *)arg1 isPartial:(_Bool *)arg2 downloadIfNecessary:(_Bool)arg3;
- (id)bodyDataIsComplete:(_Bool *)arg1 isPartial:(_Bool *)arg2;
- (id)bodyDataIsComplete:(_Bool *)arg1;
- (id)bodyData;
- (id)persistentID;
- (id)attachmentStorageLocation;
- (id)path;
- (unsigned int)uid;
- (id)remoteID;
- (void)setMessageInfoFromMessage:(id)arg1;
- (void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 messageIDHash:(long long)arg8 conversationIDHash:(long long)arg9 summary:(id)arg10 withOptions:(unsigned int)arg11;
- (void)setMessageInfo:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceivedTimeIntervalSince1970:(double)arg6 dateSentTimeIntervalSince1970:(double)arg7 messageIDHash:(long long)arg8 conversationID:(long long)arg9 summary:(id)arg10;
- (id)uniqueArray:(id)arg1 withStore:(id)arg2;
- (id)summary;
- (void)setExternalID:(id)arg1;
- (id)externalID;
- (void)setConversationID:(long long)arg1;
- (void)setMessageIDHash:(long long)arg1;
- (long long)conversationID;
- (void)setBcc:(id)arg1;
- (id)bccIfCached;
- (id)bcc;
- (void)setCc:(id)arg1;
- (id)ccIfCached;
- (id)cc;
- (void)setTo:(id)arg1;
- (id)toIfCached;
- (id)to;
- (id)senderAddressComment;
- (void)setSender:(id)arg1;
- (id)firstSender;
- (id)sendersIfCached;
- (id)senders;
- (void)setContentType:(id)arg1;
- (id)contentType;
- (void)setDateSentTimeIntervalSince1970:(double)arg1;
- (double)dateSentAsTimeIntervalSince1970;
- (_Bool)needsDateReceived;
- (double)dateReceivedAsTimeIntervalSince1970;
- (void)setDateReceivedTimeIntervalSince1970:(double)arg1;
- (id)dateSent;
- (id)dateReceived;
- (void)setSubject:(id)arg1;
- (id)subjectIfCached;
- (id)subject;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (void)_setDateSentFromHeaders:(id)arg1;
- (void)_setDateReceivedFromHeaders:(id)arg1;
- (id)_copyDateFromDateHeaderInHeaders:(id)arg1;
- (id)_copyDateFromReceivedHeadersInHeaders:(id)arg1;
- (_Bool)_doesDateAppearToBeSane:(id)arg1;
- (void)setPreferredEncoding:(unsigned int)arg1;
- (unsigned int)preferredEncoding;
- (_Bool)calculatedNumberOfAttachments;
- (unsigned short)numberOfAttachments;
- (_Bool)isMessageContentsLocallyAvailable;
- (long long)_messageIDHeaderHashIvar;
- (id)messageIDHeaderInFortyBytesOrLess;
- (void)setMessageIDHeader:(id)arg1;
- (id)messageIDHeader;
- (long long)messageIDHash;
- (id)messageURL;
- (void)setMessageURL:(id)arg1;
- (id)messageID;
- (id)preferredEmailAddressToReplyWith;
- (unsigned long long)messageSize;
- (void)dealloc;
- (id)dataConsumerForMimePart:(id)arg1;
- (void)setMessageData:(id)arg1 isPartial:(_Bool)arg2;
- (id)messageData;
- (id)messageDataIsComplete:(_Bool *)arg1 downloadIfNecessary:(_Bool)arg2;
- (_Bool)messageData:(id *)arg1 messageSize:(unsigned long long *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;
- (id)messageBodyIfAvailableUpdatingFlags:(_Bool)arg1;
- (id)messageBodyUpdatingFlags:(_Bool)arg1;
- (id)messageBodyIfAvailable;
- (id)messageBody;
- (id)headersIfAvailable;
- (id)headers;
- (void)setMessageStore:(id)arg1;
- (id)messageStore;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
