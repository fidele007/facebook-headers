/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBReactionBrickComponent.h>

@protocol FBQueriedReactionUnitFieldsProtocol, FBQueriedReactionUnitComponentFieldsProtocol;
@class FBReactionContext, FBMemModelObject, NSArray;

@interface FBReactionCrisisResponseBrickComponent : CKCompositeComponent <FBReactionBrickComponent> {

	FBReactionContext* _reactionContext;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> _brick;
	NSArray* _buttonWithActions;
	unsigned long long _currentState;

}
+(id)newWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 position:(unsigned long long)arg5 indexPath:(id)arg6 ;
+(id)buttonWithActionsFromActions:(id)arg1 unit:(id)arg2 reactionContext:(id)arg3 ;
+(id)buttonComponentWithText:(id)arg1 titleColor:(id)arg2 backgroundColor:(id)arg3 style:(unsigned long long)arg4 action:(SEL)arg5 ;
+(id)bottomComponentWithText:(id)arg1 textColor:(id)arg2 undoText:(id)arg3 buttonComponents:(id)arg4 iconImage:(id)arg5 reactionContext:(id)arg6 ;
+(id)textComponentWithAttributedString:(id)arg1 color:(id)arg2 weight:(unsigned long long)arg3 tapAction:(SEL)arg4 ;
+(id)initialState;
-(void)didTapPositiveButton;
-(void)didTapNegativeButton;
-(void)_markSelfSafe;
-(void)_markSelfNotInTheArea;
-(void)_unmarkSelfSafe;
-(void)_markSelfInTheArea;
-(void)footerActionButtonTapped:(id)arg1 ;
-(void)didTapUndoButton;
@end

