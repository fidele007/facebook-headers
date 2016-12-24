/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFacecastBroadcastNuxModelDelegate;
@class FBUserSession, NSMutableArray, FBMemVideo;

@interface FBFacecastBroadcastNuxModel : NSObject {

	FBUserSession* _session;
	NSMutableArray* _eventsToTrigger;
	NSMutableArray* _eventsToDismiss;
	BOOL _loaded;
	id<FBFacecastBroadcastNuxModelDelegate> _delegate;
	FBMemVideo* _nuxVideo;

}

@property (assign,nonatomic,__weak) id<FBFacecastBroadcastNuxModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBMemVideo * nuxVideo;                                              //@synthesize nuxVideo=_nuxVideo - In the implementation block
-(void)_updateNuxMemModel:(id)arg1 ;
-(void)updateNuxVideoPlaybackTime:(double)arg1 ;
-(FBMemVideo *)nuxVideo;
-(void)setDelegate:(id<FBFacecastBroadcastNuxModelDelegate>)arg1 ;
-(id<FBFacecastBroadcastNuxModelDelegate>)delegate;
-(void)load;
-(id)initWithSession:(id)arg1 ;
@end
