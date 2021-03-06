/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBReactionHeaderComponent.h>

@protocol FBReactionAction, FBQueriedReactionUnitFieldsProtocol;
@class FBMemModelObject, FBReactionContext;

@interface FBReactionIconMessageStoryHeaderComponent : CKCompositeComponent <FBReactionHeaderComponent> {

	id<FBReactionAction> _action;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	FBReactionContext* _reactionContext;

}

@property (nonatomic,readonly) FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> unit;              //@synthesize unit=_unit - In the implementation block
@property (nonatomic,readonly) FBReactionContext * reactionContext;                                      //@synthesize reactionContext=_reactionContext - In the implementation block
+(id)newWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 ;
-(FBReactionContext *)reactionContext;
-(void)tapped;
-(void)_preloadSecondayActionImages;
-(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)unit;
@end

