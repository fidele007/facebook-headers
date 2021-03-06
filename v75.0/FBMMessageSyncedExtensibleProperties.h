/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMMessageReactions, FBMThreadLiveLocation;

@interface FBMMessageSyncedExtensibleProperties : FBValueObject <NSCopying> {

	FBMMessageReactions* _reactions;
	FBMThreadLiveLocation* _liveLocation;

}

@property (nonatomic,copy,readonly) FBMMessageReactions * reactions;                   //@synthesize reactions=_reactions - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadLiveLocation * liveLocation;              //@synthesize liveLocation=_liveLocation - In the implementation block
-(FBMMessageReactions *)reactions;
-(id)initWithReactions:(id)arg1 liveLocation:(id)arg2 ;
-(FBMThreadLiveLocation *)liveLocation;
@end

