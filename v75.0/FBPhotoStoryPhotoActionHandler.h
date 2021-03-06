/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPhotoActionSheetControllerDelegate.h>
#import <Facebook/FBPhotoActionSheetOptionsProvider.h>

@protocol FBNavigationCoordinator;
@class FBPhotoActionSheetController, NSString, FBPhotoMakeProfilePicHandler, FBPhotoStoryPhotoDisplayingComponentStore, UIViewController, FBUserSession;

@interface FBPhotoStoryPhotoActionHandler : NSObject <FBPhotoActionSheetControllerDelegate, FBPhotoActionSheetOptionsProvider> {

	FBPhotoActionSheetController* _actionSheetController;
	NSString* _analyticsModule;
	FBPhotoMakeProfilePicHandler* _makeProfilePicHandler;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBPhotoStoryPhotoDisplayingComponentStore* _photoDisplayingComponentStore;
	UIViewController* _presentingViewController;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)actionSheetController:(id)arg1 imageContentsForPhoto:(id)arg2 ;
-(id)actionSheetControllerPresentingViewController:(id)arg1 ;
-(BOOL)actionSheetController:(id)arg1 delegateHandleActionSheetOption:(unsigned long long)arg2 forPhoto:(id)arg3 ;
-(unsigned long long)actionSheetController:(id)arg1 actionSheetOptionsForPhoto:(id)arg2 ;
-(id)initWithAnalyticsModule:(id)arg1 navigationCoordinator:(id)arg2 photoDisplayingComponentStore:(id)arg3 presentingViewController:(id)arg4 session:(id)arg5 ;
-(void)presentPhotoActionSheetForPhoto:(id)arg1 atPoint:(CGPoint)arg2 inView:(id)arg3 ;
@end

