/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED.h>
#import <Facebook/FBCreativePlatformIncomingAppActionListener.h>

@class FBCreativePlatformIncomingAppAction, FBCreativePlatformIncomingAppActionHandler, FBCreativePlatformOutgoingAppActionHandler, FBCreativePlatformAppListService, NSString;

@interface FBCreativePlatformModule : FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED <FBCreativePlatformIncomingAppActionListener> {

	FBCreativePlatformIncomingAppAction* _currentAction;

}

@property (nonatomic,readonly) FBCreativePlatformIncomingAppActionHandler * incomingAppActionHandler; 
@property (nonatomic,readonly) FBCreativePlatformOutgoingAppActionHandler * outgoingAppActionHandler; 
@property (nonatomic,readonly) FBCreativePlatformAppListService * appListService; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)moduleForSession:(id)arg1 ;
-(id)supportedURLSchemes;
-(BOOL)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 appLinksInfo:(id)arg4 withNavigationCoordinator:(id)arg5 ;
-(id)initWithSession:(id)arg1 providerMap:(id)arg2 ;
-(void)didPerformIncomingAppAction:(id)arg1 ;
-(void)didFailToPerformIncomingAppAction:(id)arg1 withError:(id)arg2 ;
-(FBCreativePlatformIncomingAppActionHandler *)incomingAppActionHandler;
-(id)supportedURLSchemesForSchemePrefix:(id)arg1 withVersions:(id)arg2 ;
-(FBCreativePlatformOutgoingAppActionHandler *)outgoingAppActionHandler;
-(FBCreativePlatformAppListService *)appListService;
-(id)ID;
@end
