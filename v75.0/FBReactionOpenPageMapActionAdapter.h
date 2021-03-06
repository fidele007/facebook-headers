/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBReactionBaseActionAdapter.h>
#import <Facebook/FBLocationMapViewControllerDelegate.h>

@protocol FBQueriedReactionStoryActionFieldsProtocol;
@class UIView, FBReactionContext, FBLocationMapViewController, FBMemModelObject, FBMemPage, NSString;

@interface FBReactionOpenPageMapActionAdapter : FBReactionBaseActionAdapter <FBLocationMapViewControllerDelegate> {

	UIView* _actionView;
	FBReactionContext* _reactionContext;
	FBLocationMapViewController* _mapViewController;
	FBMemModelObject*<FBQueriedReactionStoryActionFieldsProtocol> _action;
	FBMemPage* _page;
	NSString* _style;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performActionWithExtras:(id)arg1 ;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 action:(id)arg4 ;
-(void)displayDirectionsToLocation:(CLLocationCoordinate2D)arg1 locationName:(id)arg2 ;
-(BOOL)performMagicTap;
-(void)_openPageMap;
-(id)_loggingExtras;
@end

