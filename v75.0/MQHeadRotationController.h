/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class MQEffectBase;

@interface MQHeadRotationController : NSObject {

	MQEffectBase* _effect;

}

@property (assign,nonatomic,__weak) MQEffectBase * effect;              //@synthesize effect=_effect - In the implementation block
-(void)setEffect:(MQEffectBase *)arg1 ;
-(MQFloatVector3)rotation;
-(MQEffectBase *)effect;
-(MQFloatVector3)normalize:(MQFloatVector3)arg1 ;
@end

