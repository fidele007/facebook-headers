/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBScriptMessageHandling.h>
#import <Facebook/FBBrowserExtensionCallbackHandling.h>
#import <Facebook/FBBrowserExtensionHandling.h>

@protocol FBBrowserExtensionDelegate;
@class FBUserSession, NSString;

@interface FBBrowserExtensionInitializeCallbackHandler : NSObject <FBScriptMessageHandling, FBBrowserExtensionCallbackHandling, FBBrowserExtensionHandling> {

	FBUserSession* _session;
	id<FBBrowserExtensionDelegate> _delegate;
	NSString* _callbackHandlerName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lazyCreatorForSession:(id)arg1 delegateBlock:(/*^block*/id)arg2 ;
+(id)supportedMessageNames;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 ;
-(void)handleScriptMessageFromWebView:(id)arg1 messageOrigin:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5 ;
-(void)invokeJSScriptCallbackWithResult:(BOOL)arg1 returnParams:(id)arg2 messageName:(id)arg3 messageParams:(id)arg4 startWebsiteURL:(id)arg5 webView:(id)arg6 ;
-(void)invokeJSScriptCallbackWithError:(unsigned long long)arg1 errorMessage:(id)arg2 messageName:(id)arg3 messageParams:(id)arg4 startWebsiteURL:(id)arg5 webView:(id)arg6 ;
-(id)_javascriptStringForCallback:(id)arg1 callbackID:(id)arg2 result:(BOOL)arg3 returnParams:(id)arg4 ;
@end

