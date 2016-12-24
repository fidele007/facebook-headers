/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBViewerContextClassProvidable.h>

@class FBUserSession, FBCreativePlatformIncomingAppActionListenerAnnouncer, NSString;

@interface FBCreativePlatformIncomingAppActionHandler : NSObject <FBViewerContextClassProvidable> {

	FBUserSession* _session;
	FBCreativePlatformIncomingAppActionListenerAnnouncer* _announcer;

}

@property (nonatomic,readonly) FBCreativePlatformIncomingAppActionListenerAnnouncer * announcer;              //@synthesize announcer=_announcer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBCreativePlatformIncomingAppActionListenerAnnouncer *)announcer;
-(id)initWithSession:(id)arg1 errorHandler:(id)arg2 analyticsLogger:(id)arg3 simpleLogger:(id)arg4 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handleAction:(id)arg1 withNavigationCoordinator:(id)arg2 providerMap:(id)arg3 ;
@end
