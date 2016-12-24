/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBForceTouchHandler.h>

@protocol FBNavigationCoordinator;
@class FBExperimentManager, FBURLHandlerWebViewProvider, NSString;

@interface FBURLForceTouchHandler : NSObject <FBForceTouchHandler> {

	FBExperimentManager* _experimentManager;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBURLHandlerWebViewProvider* _webViewControllerProvider;
	unsigned long long _webViewPresentationMethod;
	unsigned long long _webViewPresentationOptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewControllerForPreviewingContext:(id)arg1 intent:(id)arg2 ;
-(void)commitViewController:(id)arg1 previewingContext:(id)arg2 ;
-(id)initWithExperimentManager:(id)arg1 navigationCoordinator:(id)arg2 webViewControllerProvider:(id)arg3 ;
@end
