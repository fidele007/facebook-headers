/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface TigonNSURLCompletionHandlersMap : NSObject {

	NSMutableDictionary* _handlersMap;
	NSString* _identifierPrefix;

}
-(BOOL)canHandleEventsForBackgroundURLSession:(id)arg1 ;
-(void)addHandler:(/*^block*/id)arg1 forIdentifier:(id)arg2 ;
-(id)initWithIdentifierPrefix:(id)arg1 ;
-(void)removeAndInvokeHandlerForIdentifier:(id)arg1 ;
-(void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

