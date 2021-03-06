/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBReactionBrickComponent.h>

@protocol FBReactionAction;
@class FBReactionContext;

@interface FBReactionImageBlockBrickComponent : CKCompositeComponent <FBReactionBrickComponent> {

	id<FBReactionAction> _action;
	id<FBReactionAction> _auxAction;
	FBReactionContext* _reactionContext;

}
+(id)newWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 position:(unsigned long long)arg5 indexPath:(id)arg6 ;
+(id)auxActionForStyle:(id)arg1 UnitComponent:(id)arg2 ;
+(CGSize)profileImageSizeForStyle:(id)arg1 ;
+(UIEdgeInsets)contentInsetsForStyle:(id)arg1 renderIdiom:(unsigned long long)arg2 ;
+(id)imageBlockUrlForStyle:(id)arg1 unitComponent:(id)arg2 ;
+(id)titleForUnitComponent:(id)arg1 ;
+(id)titleFontForStyle:(id)arg1 renderIdiom:(unsigned long long)arg2 ;
+(id)titleColorForStyle:(id)arg1 ;
+(unsigned long long)titleMaxNumberOfLinesForStyle:(id)arg1 ;
+(unsigned long long)primarySubtitleTextStyleForStyle:(id)arg1 renderIdiom:(unsigned long long)arg2 ;
+(id)secondarySubtitleForStyle:(id)arg1 unitComponent:(id)arg2 ;
+(BOOL)showAuxButtonVerticalBorderWithAuxAction:(id)arg1 style:(id)arg2 renderIdiom:(unsigned long long)arg3 ;
+(BOOL)showBottomSeparatorWithStyle:(id)arg1 ;
+(id)auxActionComponentForAction:(id)arg1 auxActionButtonShouldSelected:(BOOL)arg2 unitComponent:(id)arg3 style:(id)arg4 session:(id)arg5 feedComponentToolbox:(id)arg6 ;
+(id)secondarySubtitlePrependStringForUnitComponent:(id)arg1 ;
+(id)initialState;
-(void)imageBlockTapped;
-(void)auxButtonTapped;
@end

