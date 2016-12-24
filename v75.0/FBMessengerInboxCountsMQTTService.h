/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAppService.h>
#import <Facebook/FBViewerContextClassProvidable.h>

@protocol FBMessengerInboxCountsMQTTServiceDelegate;
@class FBUserSession, FBMQTTManager, FBMQTTListener, NSString;

@interface FBMessengerInboxCountsMQTTService : NSObject <FBAppService, FBViewerContextClassProvidable> {

	FBUserSession* _session;
	FBMQTTManager* _mqttManager;
	FBMQTTListener* _inboxListener;
	id<FBMessengerInboxCountsMQTTServiceDelegate> _delegate;

}

@property (nonatomic,readonly) FBMQTTListener * inboxListener;                                           //@synthesize inboxListener=_inboxListener - In the implementation block
@property (assign,nonatomic,__weak) id<FBMessengerInboxCountsMQTTServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startAppService;
-(void)stopAppService;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_inboxMQTTListenerBlock:(id)arg1 ;
-(void)_startMQTTInboxListeningIfNecessary;
-(void)_stopMQTTInboxListeningIfNecessary;
-(FBMQTTListener *)inboxListener;
-(void)setDelegate:(id<FBMessengerInboxCountsMQTTServiceDelegate>)arg1 ;
-(id<FBMessengerInboxCountsMQTTServiceDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end

