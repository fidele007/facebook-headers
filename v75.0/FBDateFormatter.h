/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBClock;
@interface FBDateFormatter : NSObject {

	id<FBClock> _clock;

}

@property (nonatomic,retain) id<FBClock> clock;              //@synthesize clock=_clock - In the implementation block
+(id)formatterWithBuilderBlock:(/*^block*/id)arg1 ;
+(id)formatterByComposingFormatter:(id)arg1 withFormatter:(id)arg2 usingFormatBlock:(/*^block*/id)arg3 ;
+(id)formatterForBehavior:(int)arg1 ;
-(id)formatDate:(id)arg1 relativeToDate:(id)arg2 timeZone:(id)arg3 ;
-(id)init;
-(id<FBClock>)clock;
-(void)setClock:(id<FBClock>)arg1 ;
-(id)formatDate:(id)arg1 ;
@end

