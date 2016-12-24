/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBExceptionHandler;


@protocol FBAppModule <NSObject,FBMenuItemHandler>
@property (nonatomic,retain) FBExceptionHandler * exceptionHandler; 
@optional
-(BOOL)canOpenLoggedOutURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
-(BOOL)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 appLinksInfo:(id)arg4 withNavigationCoordinator:(id)arg5;
-(void)cleanupSession;
-(FBExceptionHandler *)exceptionHandler;
-(void)setExceptionHandler:(id)arg1;

@required
+(id)instanceForSession:(id)arg1 providerMap:(id)arg2;
-(id)URLSegues;
-(id)supportedURLSchemes;
-(id)ID;

@end

