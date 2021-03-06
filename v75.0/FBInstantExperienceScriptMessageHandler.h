/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBScriptMessageHandling.h>

@protocol FBBrowserExtensionDelegate;
@class FBDictionaryRegistry, FBUserSession, FBMemPlatformInstantExperienceFeatureEnabledList, FBBrowserExtensionScriptMessageHandler, NSString;

@interface FBInstantExperienceScriptMessageHandler : NSObject <FBScriptMessageHandling> {

	FBDictionaryRegistry* _scriptMessageHandlerRegistry;
	FBUserSession* _session;
	/*^block*/id _delegateBlock;
	FBMemPlatformInstantExperienceFeatureEnabledList* _featureEnabledList;
	FBBrowserExtensionScriptMessageHandler* _commonScriptHandler;
	id<FBBrowserExtensionDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)unregisterSupportedMessagesForSession:(id)arg1 ;
+(id)supportedMessageNames;
-(id)initWithSession:(id)arg1 delegateBlock:(/*^block*/id)arg2 featureEnabledList:(id)arg3 ;
-(void)_registerInstantExperienceExtensions;
-(void)handleScriptMessageFromWebView:(id)arg1 messageOrigin:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5 ;
-(void)_registerInstantExperienceExtension:(id)arg1 messageNames:(id)arg2 registry:(id)arg3 ;
@end

