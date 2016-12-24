/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBScriptMessageHandling.h>
#import <Facebook/FBBrowserExtensionHandling.h>

@protocol FBBrowserExtensionDelegate;
@class NSString;

@interface FBBrowserExtensionMessengerPlatformShareHandler : NSObject <FBScriptMessageHandling, FBBrowserExtensionHandling> {

	id<FBBrowserExtensionDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lazyCreatorForSession:(id)arg1 delegateBlock:(/*^block*/id)arg2 ;
+(id)supportedMessageNames;
-(void)handleScriptMessageFromWebView:(id)arg1 messageOrigin:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5 ;
-(void)_handleBeginShareFlowWithWebView:(id)arg1 websiteURL:(id)arg2 messageName:(id)arg3 messageParams:(id)arg4 ;
-(void)_handleBeginShareFlowSuccessWithMessageName:(id)arg1 messageParams:(id)arg2 websiteURL:(id)arg3 webView:(id)arg4 ;
-(void)_handleBeginShareFlowFailureWithErrorCode:(unsigned long long)arg1 errorMessage:(id)arg2 messageName:(id)arg3 messageParams:(id)arg4 websiteURL:(id)arg5 webView:(id)arg6 ;
-(id)initWithDelegate:(id)arg1 ;
@end

