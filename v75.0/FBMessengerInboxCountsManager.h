/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMessengerInboxCountsFetcherDelegate.h>
#import <Facebook/FBMessengerInboxCountsMQTTServiceDelegate.h>
#import <Facebook/FBViewerContextClassProvidable.h>

@class FBMessengerInboxCountsFetcher, FBMessengerInboxCountsMQTTService, FBMessengerInboxCountsListenerAnnouncer, FBMessengerInboxCounts, NSString;

@interface FBMessengerInboxCountsManager : NSObject <FBMessengerInboxCountsFetcherDelegate, FBMessengerInboxCountsMQTTServiceDelegate, FBViewerContextClassProvidable> {

	FBMessengerInboxCountsFetcher* _inboxCountsFetcher;
	FBMessengerInboxCountsMQTTService* _inboxCountsMQTTService;
	FBMessengerInboxCountsListenerAnnouncer* _announcer;
	FBMessengerInboxCounts* _inboxCounts;

}

@property (nonatomic,copy) FBMessengerInboxCounts * inboxCounts;              //@synthesize inboxCounts=_inboxCounts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMessengerInboxCounts *)inboxCounts;
-(void)addMessengerInboxCountsListener:(id)arg1 ;
-(void)removeMessengerInboxCountsListener:(id)arg1 ;
-(void)forceFetch;
-(void)cancelForceFetch;
-(void)messengerInboxCountsService:(id)arg1 didReceiveInboxCounts:(id)arg2 ;
-(id)initWithInboxCountsFetcher:(id)arg1 inboxCountsMQTTService:(id)arg2 ;
-(void)_announceMessengerInboxCounts:(id)arg1 ;
-(void)messengerInboxCountsFetcher:(id)arg1 didReceiveInboxCounts:(id)arg2 ;
-(void)messengerInboxCountsFetcher:(id)arg1 didFailFetchWithError:(id)arg2 ;
-(void)setInboxCounts:(FBMessengerInboxCounts *)arg1 ;
-(void)dealloc;
@end
