/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBReactionBrickComponent.h>

@protocol FBReactionAction;
@class FBVideoHomeChannelLoggingData;

@interface FBVideoHomeSeeAllFooterComponent : CKCompositeComponent <FBReactionBrickComponent> {

	id<FBReactionAction> _footerAction;
	FBVideoHomeChannelLoggingData* _channelLoggingData;

}

@property (nonatomic,readonly) id<FBReactionAction> footerAction;                               //@synthesize footerAction=_footerAction - In the implementation block
@property (nonatomic,readonly) FBVideoHomeChannelLoggingData * channelLoggingData;              //@synthesize channelLoggingData=_channelLoggingData - In the implementation block
+(id)newWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 position:(unsigned long long)arg5 indexPath:(id)arg6 ;
-(void)_seeAllButtonDidTap:(id)arg1 ;
-(id<FBReactionAction>)footerAction;
-(FBVideoHomeChannelLoggingData *)channelLoggingData;
@end

