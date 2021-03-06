/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamListener.h>
#import <Facebook/FBGraphQLConnectionControllerLoadListener.h>
#import <Facebook/FBGraphQLConnectionControllerNetworkListener.h>

@protocol FBCancelable, FBFeedHeadPrefetcherDelegate;
@class NSString;

@interface FBFeedHeadPrefetcher : NSObject <FBStreamListener, FBGraphQLConnectionControllerLoadListener, FBGraphQLConnectionControllerNetworkListener> {

	BOOL _sleepingAfterHeadFetch;
	BOOL _crossedBottomScrollThreshold;
	double _lastRecordedDistanceFromTop;
	id<FBCancelable> _reenablingBlockCanceler;
	id<FBFeedHeadPrefetcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFeedHeadPrefetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 didFinishLoading:(unsigned long long)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4 userInfo:(id)arg5 ;
-(void)graphQLConnectionController:(id)arg1 didBeginLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didCompleteLoad:(id)arg2 ;
-(void)_graphQLPagedDownloaderSuccessfullyDownloadedEdges:(long long)arg1 loadType:(unsigned long long)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didReceiveEdgesFromNetworkLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didLoadEdgesFromNetworkLoad:(id)arg2 ;
-(void)_pausePrefetcherFor:(double)arg1 ;
-(void)scrollViewDidScrollWithDistanceFromTop:(double)arg1 ;
-(void)handleFeedPostPublish;
-(void)setDelegate:(id<FBFeedHeadPrefetcherDelegate>)arg1 ;
-(id<FBFeedHeadPrefetcherDelegate>)delegate;
@end

