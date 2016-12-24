/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionBaseUnitComponentAdapter.h>
#import <Facebook/FBReactionExpandableUnitChildProtocol.h>

@protocol FBQueriedReactionUnitComponentFieldsProtocol;
@class FBMemModelObject, FBReactionContext, UIView, NSString;

@interface FBReactionPlaceBlurbUnitComponentAdapter : FBReactionBaseUnitComponentAdapter <FBReactionExpandableUnitChildProtocol> {

	FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> _unitComponent;
	FBReactionContext* _reactionContext;
	UIView* _componentView;

}

@property (assign,nonatomic,__weak) id<FBReactionExpandableViewDelegate> expandableDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)performMagicTap;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 position:(unsigned long long)arg5 indexPath:(id)arg6 ;
-(id)componentView;
-(void)hideExpandActionIfBelowMaxLines;
-(double)getUnexpandedHeight;
-(void)setExpandableDelegate:(id<FBReactionExpandableViewDelegate>)arg1 ;
-(id<FBReactionExpandableViewDelegate>)expandableDelegate;
-(void)expand;
@end

