/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>

@class FBReactionEventBlocksItemComponentConfig;

@interface FBReactionEventBlocksItemComponent : CKComponent {

	FBReactionEventBlocksItemComponentConfig* _config;

}
+(id)newWithEvent:(id)arg1 reactionContext:(id)arg2 hasBottomDivider:(BOOL)arg3 reactionUnit:(id)arg4 ;
-(void)tapped;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end

