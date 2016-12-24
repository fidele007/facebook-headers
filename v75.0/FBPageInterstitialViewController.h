/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class FBTransientViewStateManager, NSString, FBUserSession, NSDictionary;

@interface FBPageInterstitialViewController : UIViewController {

	FBTransientViewStateManager* _viewStateManager;
	NSString* _potentialUsername;
	FBUserSession* _session;
	NSString* _initialTab;
	NSString* _actionSource;
	NSDictionary* _urlParams;

}
-(void)_renderPageVC:(id)arg1 ;
-(void)_fetchPageWithUsername:(id)arg1 ;
-(void)_handleError;
-(id)initWithSession:(id)arg1 potentialUsername:(id)arg2 initialTab:(id)arg3 actionSource:(id)arg4 urlParams:(id)arg5 ;
-(void)viewDidLoad;
-(void)_handleResponse:(id)arg1 ;
@end

