/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID;


@protocol FBMusicPlayer <NSObject>
@property (nonatomic,readonly) NSUUID * playerID; 
@property (nonatomic,readonly) long long musicState; 
@required
-(void)play:(id)arg1 withFade:(BOOL)arg2 andStartTime:(double)arg3;
-(void)stopWithFade:(BOOL)arg1;
-(void)play:(id)arg1 withFade:(BOOL)arg2;
-(long long)musicState;
-(void)stop;
-(void)resume;
-(void)setURL:(id)arg1;
-(void)pause;
-(void)seekToTime:(double)arg1;
-(void)removeListener:(id)arg1;
-(void)addListener:(id)arg1;
-(NSUUID *)playerID;
-(void)play:(id)arg1;

@end

