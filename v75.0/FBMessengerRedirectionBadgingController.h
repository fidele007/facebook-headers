/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBViewerContextClassProvidable.h>

@class NSUserDefaults, NSNotificationCenter, FBMessengerRedirectionBadgingControllerListenerAnnouncer, NSString;

@interface FBMessengerRedirectionBadgingController : NSObject <FBViewerContextClassProvidable> {

	NSUserDefaults* _userDefaults;
	NSNotificationCenter* _notificationCenter;
	FBMessengerRedirectionBadgingControllerListenerAnnouncer* _announcer;

}

@property (assign,nonatomic) BOOL shouldBadgeWithRedirectionErrorIndicator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setShouldBadgeWithRedirectionErrorIndicator:(BOOL)arg1 ;
-(void)addMessengerRedirectionBadgeControllingListener:(id)arg1 ;
-(void)removeMessengerRedirectionBadgeControllingListener:(id)arg1 ;
-(BOOL)shouldBadgeWithRedirectionErrorIndicator;
-(void)_stopObservingApplicationLifecycleEvents;
-(void)_startObservingApplicationLifecycleEvents;
-(void)_applicationDidEnterBackgroundHandler;
-(id)initWithUserDefaults:(id)arg1 notificationCenter:(id)arg2 announcer:(id)arg3 ;
-(void)_recordAppVisitationSinceErrorBadgeIfNecessary;
-(void)_dismissBadgeIfAppVisitationLimitReached;
-(void)dealloc;
@end
