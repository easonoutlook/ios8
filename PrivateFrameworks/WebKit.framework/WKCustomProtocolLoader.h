/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDelegate-Protocol.h"

@class NSURLConnection;

// Not exported
@interface WKCustomProtocolLoader : NSObject <NSURLConnectionDelegate>
{
    struct CustomProtocolManagerProxy *_customProtocolManagerProxy;
    unsigned long long _customProtocolID;
    struct RefPtr<IPC::Connection> _connection;
    unsigned long long _storagePolicy;
    NSURLConnection *_urlConnection;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)dealloc;
-     // Error parsing type: @48@0:8^{CustomProtocolManagerProxy=^^?^{ChildProcessProxy}^{WebContext}{HashMap<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKCustomProtocolLoader> > >={HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKCustomProtocolLoader> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> >=^{KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> >}iiii}}}16Q24@32^{Connection={atomic<int>=Ai}^{Client}B{atomic<unsigned long long>=AQ}BB^?B{RefPtr<WorkQueue>=^{WorkQueue}}^{RunLoop}{HashMap<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> >, IPC::StringReference::Hash, WTF::HashTraits<IPC::StringReference>, WTF::HashTraits<std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > > >={HashTable<IPC::StringReference, WTF::KeyValuePair<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > > >, IPC::StringReference::Hash, WTF::HashMap<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> >, IPC::StringReference::Hash, WTF::HashTraits<IPC::StringReference>, WTF::HashTraits<std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > > >::KeyValuePairTraits, WTF::HashTraits<IPC::StringReference> >=^{KeyValuePair<IPC::StringReference, std::__1::pair<WTF::RefPtr<WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > >}iiii}}IIIB{Mutex={_opaque_pthread_mutex_t=q[56c]}}{Deque<std::__1::unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> > >=QQ{VectorBuffer<std::__1::unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> >, 0>=^{unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> >}II}}{Mutex={_opaque_pthread_mutex_t=q[56c]}}{Deque<std::__1::unique_ptr<IPC::MessageEncoder, std::__1::default_delete<IPC::MessageEncoder> > >=QQ{VectorBuffer<std::__1::unique_ptr<IPC::MessageEncoder, std::__1::default_delete<IPC::MessageEncoder> >, 0>=^{unique_ptr<IPC::MessageEncoder, std::__1::default_delete<IPC::MessageEncoder> >}II}}{condition_variable={_opaque_pthread_cond_t=q[40c]}}{mutex={_opaque_pthread_mutex_t=q[56c]}}{HashMap<std::__1::pair<std::__1::pair<IPC::StringReference, IPC::StringReference>, unsigned long long>, std::__1::unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> >, WTF::PairHash<std::__1::pair<IPC::StringReference, IPC::StringReference>, unsigned long long>, WTF::HashTraits<std::__1::pair<std::__1::pair<IPC::StringReference, IPC::StringReference>, unsigned long long> >, WTF::HashTraits<std::__1::unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> > > >={HashTable<std::__1::pair<std::__1::pair<IPC::StringReference, IPC::StringReference>, unsigned long long>, WTF::KeyValuePair<std::__1::pair<std::__1::pair<IPC::StringReference, IPC::StringReference>, unsigned long long>, std::__1::unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<std::__1::pair<std::__1::pair<IPC::StringReference, IPC::StringReference>, unsigned long long>, std::__1::unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> > > >, WTF::PairHash<std::__1::pair<IPC::StringReference, IPC::StringReference>, unsigned long long>, WTF::HashMap<std::__1::pair<std::__1::pair<IPC::StringReference, IPC::StringReference>, unsigned long long>, std::__1::unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> >, WTF::PairHash<std::__1::pair<IPC::StringReference, IPC::StringReference>, unsigned long long>, WTF::HashTraits<std::__1::pair<std::__1::pair<IPC::StringReference, IPC::StringReference>, unsigned long long> >, WTF::HashTraits<std::__1::unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> > > >::KeyValuePairTraits, WTF::HashTraits<std::__1::pair<std::__1::pair<IPC::StringReference, IPC::StringReference>, unsigned long long> > >=^{KeyValuePair<std::__1::pair<std::__1::pair<IPC::StringReference, IPC::StringReference>, unsigned long long>, std::__1::unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> > >}iiii}}{RefPtr<IPC::Connection::SyncMessageState>=^{SyncMessageState}}{Mutex={_opaque_pthread_mutex_t=q[56c]}}B{Vector<IPC::Connection::PendingSyncReply, 0, WTF::CrashOnOverflow>=^{PendingSyncReply}II}{HashMap<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<IPC::Connection::SecondaryThreadPendingSyncReply *> >={HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *> >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<IPC::Connection::SecondaryThreadPendingSyncReply *> >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> >=^{KeyValuePair<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *>}iiii}}I@I@@}40, name: initWithCustomProtocolManagerProxy:customProtocolID:request:connection:

@end

