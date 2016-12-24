/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>
#import <Facebook/FBReactionBrickComponent.h>

@protocol FBQueriedReactionUnitComponentFieldsProtocol;
@class FBReactionContext, FBMemModelObject;

@interface FBReactionPostPivotBrickComponent : CKComponent <FBReactionBrickComponent> {

	FBReactionContext* _reactionContext;
	FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> _unitComponent;

}
+(id)newWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 position:(unsigned long long)arg5 indexPath:(id)arg6 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(id)facepileComponentWithReactionContext:(id)arg1 reactionUnitComponent:(id)arg2 componentWidth:(double)arg3 ;
-(id)textComponentWithReactionUnitComponent:(id)arg1 ;
@end
