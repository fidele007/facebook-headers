/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <Facebook/Facebook-Structs.h>
@class NSObject;

@interface FNFPlayerTimeObserver : NSObject {

	BOOL _fireOnceAtExactTime;
	BOOL _followMasterClock;
	BOOL _suspended;
	/*^block*/id _block;
	NSObject*<OS_dispatch_source> _timer;
	SCD_Struct_FB100 _interval;

}

@property (assign,nonatomic) SCD_Struct_FB100 interval;                        //@synthesize interval=_interval - In the implementation block
@property (nonatomic,copy) id block;                                           //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;              //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) BOOL fireOnceAtExactTime;                         //@synthesize fireOnceAtExactTime=_fireOnceAtExactTime - In the implementation block
@property (assign,nonatomic) BOOL followMasterClock;                           //@synthesize followMasterClock=_followMasterClock - In the implementation block
@property (assign,nonatomic) BOOL suspended;                                   //@synthesize suspended=_suspended - In the implementation block
-(BOOL)fireOnceAtExactTime;
-(void)setFireOnceAtExactTime:(BOOL)arg1 ;
-(BOOL)followMasterClock;
-(void)setFollowMasterClock:(BOOL)arg1 ;
-(BOOL)suspended;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setInterval:(SCD_Struct_FB100)arg1 ;
-(SCD_Struct_FB100)interval;
-(void)setSuspended:(BOOL)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
@end

