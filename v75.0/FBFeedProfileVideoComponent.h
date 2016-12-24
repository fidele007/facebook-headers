/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBMemVideo, NSArray, FBFeedToolbox, FBVideoPlayerComponent, FBUserSession;

@interface FBFeedProfileVideoComponent : CKCompositeComponent {

	FBMemVideo* _video;
	NSArray* _trackingCodes;
	FBFeedToolbox* _toolbox;
	FBVideoPlayerComponent* _videoComponent;
	unsigned long long _options;
	FBUserSession* _session;

}

@property (nonatomic,readonly) FBVideoPlayerComponent * videoComponent;              //@synthesize videoComponent=_videoComponent - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                           //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                              //@synthesize session=_session - In the implementation block
+(id)newWithVideo:(id)arg1 size:(double)arg2 toolbox:(id)arg3 ;
-(FBVideoPlayerComponent *)videoComponent;
-(unsigned long long)options;
-(FBUserSession *)session;
@end
