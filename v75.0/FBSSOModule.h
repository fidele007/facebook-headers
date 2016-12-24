/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED.h>

@class FBSSOController, FBSSOViewController;

@interface FBSSOModule : FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED {

	FBSSOController* _ssoController;
	FBSSOViewController* _ssoViewController;

}
-(BOOL)canOpenLoggedOutURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
-(id)supportedURLSchemes;
-(BOOL)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 appLinksInfo:(id)arg4 withNavigationCoordinator:(id)arg5 ;
-(id)supportedKeys;
-(id)initWithSession:(id)arg1 providerMap:(id)arg2 ;
-(void)onAppSessionControllerDidLogIn;
-(void)_doSSO:(id)arg1 sourceApplication:(id)arg2 navigationCoordinator:(id)arg3 ;
-(void)dealloc;
-(id)ID;
@end
