/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNMessageSendState;

@interface MNMessageSendStateTransitionResult : NSObject <NSCopying> {

	unsigned long long _subtype;
	BOOL _finished_succeeded;
	MNMessageSendState* _toBeContinued_toState;

}
+(id)finishedWithSucceeded:(BOOL)arg1 ;
+(id)toBeContinuedWithToState:(id)arg1 ;
+(id)invalid;
-(void)matchFinished:(/*^block*/id)arg1 toBeContinued:(/*^block*/id)arg2 invalid:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

