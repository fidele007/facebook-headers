/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBEventPermalinkChunkedDownloaderDelegate;
@class NSString, FBUserSession, FBScenePath, FBMemEvent;

@interface FBEventPermalinkChunkedDownloader : NSObject {

	id _headDownloadRequest;
	id _torsoDownloadRequest;
	NSString* _eventFBID;
	FBUserSession* _session;
	FBScenePath* _scenePath;
	FBMemEvent* _downloadedHead;
	id<FBEventPermalinkChunkedDownloaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBEventPermalinkChunkedDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_headerQuery;
-(void)_handleCachedHeadResponse:(id)arg1 willDownloadFreshResponse:(BOOL)arg2 ;
-(void)_handleDownloadedHeadResponse:(id)arg1 error:(id)arg2 ;
-(id)_torsoQuery;
-(void)_handleDownloadedTorsoResponse:(id)arg1 error:(id)arg2 ;
-(id)initWithEventFBID:(id)arg1 session:(id)arg2 scenePath:(id)arg3 ;
-(void)fetchHead;
-(void)fetchTorso;
-(void)setDelegate:(id<FBEventPermalinkChunkedDownloaderDelegate>)arg1 ;
-(id<FBEventPermalinkChunkedDownloaderDelegate>)delegate;
@end

