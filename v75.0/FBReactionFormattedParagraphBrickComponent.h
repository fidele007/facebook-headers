/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBReactionBrickComponent.h>

@protocol FBQueriedReactionUnitFieldsProtocol, FBNavigationCoordinator, FBIntentHandler;
@class FBMemModelObject, FBReactionContext;

@interface FBReactionFormattedParagraphBrickComponent : CKCompositeComponent <FBReactionBrickComponent> {

	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	FBReactionContext* _reactionContext;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;

}
+(id)newWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 position:(unsigned long long)arg5 indexPath:(id)arg6 ;
+(id)_spotlightAttributedText:(id)arg1 ;
-(void)didTapRichText:(id)arg1 context:(id)arg2 ;
-(void)_presentPageViewWithPageId:(id)arg1 ;
-(void)_presentWebViewWithUrl:(id)arg1 ;
@end

