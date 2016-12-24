/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBCanvasVideoManagerListenerAnnouncer, NSMutableSet;

@interface FBCanvasVideoManagerState : NSObject {

	FBCanvasVideoManagerListenerAnnouncer* _announcer;
	NSMutableSet* _currentPlayingVideoIDs;
	id _primaryVideoID;

}

@property (nonatomic,readonly) FBCanvasVideoManagerListenerAnnouncer * announcer;              //@synthesize announcer=_announcer - In the implementation block
@property (nonatomic,readonly) NSMutableSet * currentPlayingVideoIDs;                          //@synthesize currentPlayingVideoIDs=_currentPlayingVideoIDs - In the implementation block
@property (nonatomic,retain) id primaryVideoID;                                                //@synthesize primaryVideoID=_primaryVideoID - In the implementation block
-(FBCanvasVideoManagerListenerAnnouncer *)announcer;
-(void)setPrimaryVideoID:(id)arg1 ;
-(id)primaryVideoID;
-(NSMutableSet *)currentPlayingVideoIDs;
-(id)init;
@end

