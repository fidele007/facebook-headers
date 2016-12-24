/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBVideoPlayerContainer <NSObject>
@property (nonatomic,readonly) unsigned long long layoutIdiom; 
@property (nonatomic,copy,readonly) NSString * groupTokenID; 
@property (assign,nonatomic) long long playbackSetting; 
@property (nonatomic,copy,readonly) NSString * hostingVideoID; 
@required
-(id)videoPlaybackController;
-(void)didDisplay;
-(void)stopPlayingVideo;
-(void)didUpdatePresentedVideoVisibleRatio:(double)arg1;
-(void)createAndSetViewController:(/*^block*/id)arg1;
-(void)representViewControllerWithBlock:(/*^block*/id)arg1;
-(void)createAndPresentViewController:(/*^block*/id)arg1 source:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 options:(id)arg4;
-(unsigned long long)layoutIdiom;
-(NSString *)groupTokenID;
-(long long)playbackSetting;
-(void)setPlaybackSetting:(long long)arg1;
-(NSString *)hostingVideoID;
-(BOOL)isPresented;

@end
