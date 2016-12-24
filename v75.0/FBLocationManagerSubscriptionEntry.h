/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBLocationManagerSubscription.h>

@protocol FBCallPath;
@class FBLocationManager, FBTimer;

@interface FBLocationManagerSubscriptionEntry : NSObject <FBLocationManagerSubscription> {

	double _desiredAccuracy;
	/*^block*/id _block;
	FBLocationManager* _manager;
	FBTimer* _accurateFixTimeoutTimer;
	id<FBCallPath> _callPath;

}

@property (assign,nonatomic) double desiredAccuracy;                          //@synthesize desiredAccuracy=_desiredAccuracy - In the implementation block
@property (nonatomic,copy) id block;                                          //@synthesize block=_block - In the implementation block
@property (assign,nonatomic,__weak) FBLocationManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) FBTimer * accurateFixTimeoutTimer;               //@synthesize accurateFixTimeoutTimer=_accurateFixTimeoutTimer - In the implementation block
@property (nonatomic,retain) id<FBCallPath> callPath;                         //@synthesize callPath=_callPath - In the implementation block
-(void)setCallPath:(id<FBCallPath>)arg1 ;
-(id<FBCallPath>)callPath;
-(FBTimer *)accurateFixTimeoutTimer;
-(void)setAccurateFixTimeoutTimer:(FBTimer *)arg1 ;
-(FBLocationManager *)manager;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(double)desiredAccuracy;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)setManager:(FBLocationManager *)arg1 ;
-(void)unsubscribe;
@end
