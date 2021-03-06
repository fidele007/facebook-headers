/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBStreamingEventPinnedModel <NSObject>
@property (assign,nonatomic,__weak) id<FBStreamingEventPinnedModelDelegate> delegate; 
@property (nonatomic,copy,readonly) NSString * currentPinEventID; 
@required
-(id)initWithSession:(id)arg1 videoID:(id)arg2 scenePath:(id)arg3;
-(void)setMediaTime:(double)arg1;
-(NSString *)currentPinEventID;
-(void)setDelegate:(id)arg1;
-(id<FBStreamingEventPinnedModelDelegate>)delegate;
-(void)startObserving;
-(void)stopObserving;

@end

