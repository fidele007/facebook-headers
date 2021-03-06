/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBViewCoordinator.h>

@class FBUserSession, NSArray, FBInspirationsPagedViewController, FBNuxController, FBNuxTooltip, NSString;

@interface FBInspirationsPagedViewCoordinator : NSObject <FBViewCoordinator> {

	FBUserSession* _session;
	NSArray* _childViewControllerFactories;
	FBInspirationsPagedViewController* _rootViewController;
	unsigned long long _initialPageIndex;
	id _initialPagePayload;
	FBNuxController* _cameraButtonNuxController;
	FBNuxTooltip* _cameraButtonNux;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupNotificationObservers;
-(id)initWithSession:(id)arg1 childViewControllerFactories:(id)arg2 ;
-(void)showPageAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setupNavigationBarDecorator:(id)arg1 navConfig:(id)arg2 ;
-(void)tearDownPagedViewController;
-(id)currentOrInitialVisiblePages;
-(void)_cameraNeedsOpen:(id)arg1 ;
-(void)_showCamera:(id)arg1 ;
-(void)_showInbox;
-(void)_showPageAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 payload:(id)arg3 ;
-(void)dealloc;
-(id)rootViewController;
-(void)setupViewControllers;
@end

