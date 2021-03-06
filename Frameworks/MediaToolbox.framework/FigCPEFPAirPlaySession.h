/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigCPEFPAirPlaySession : NSObject {
    NSDictionary *_contentInfo;
    unsigned long _fairPlayContext;
    struct FPStreamOpaque_ { } *_fairPlaySession;
    BOOL _invalid;
    NSString *_mediaControlUUID;
    struct OpaqueFigEndpointPlaybackSession { } *_playbackSession;
    NSDictionary *_protectionInfo;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    unsigned long _vodkaVersion;
}

- (void)authorizeItemCompletionHandler_objc:(struct { id x1; id /* block */ x2; }*)arg1 picData:(struct __CFData { }*)arg2 playerGUID:(struct __CFString { }*)arg3 error:(long)arg4;
- (void)beginSessionWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)createPicRequestWithError:(id*)arg1;
- (void)dealloc;
- (void)endSession;
- (void)finalize;
- (id)initWithFairPlayContext:(unsigned long)arg1 contentInfo:(id)arg2 routeInfo:(id)arg3 playbackSession:(struct OpaqueFigEndpointPlaybackSession { }*)arg4 mediaControlUUID:(id)arg5;
- (id)initWithFairPlayContext:(unsigned long)arg1 protectionInfo:(id)arg2 routeInfo:(id)arg3 playbackSession:(struct OpaqueFigEndpointPlaybackSession { }*)arg4 mediaControlUUID:(id)arg5;
- (id)initWithFairPlayContext:(unsigned long)arg1 routeInfo:(id)arg2 playbackSession:(struct OpaqueFigEndpointPlaybackSession { }*)arg3 mediaControlUUID:(id)arg4;
- (id)legacySinfs;
- (id)mediaControlParamsWithStoreResponse:(id)arg1;
- (id)sicWithPic:(id)arg1;

@end
