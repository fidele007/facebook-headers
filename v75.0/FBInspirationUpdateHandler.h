/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBInspirationUpdateHandler.h>

@protocol FBInspirationUpdateHandler <NSObject>
@required
-(void)handleInspirationUpdate:(id)arg1;
-(void)removeListener:(id)arg1;
-(void)addListener:(id)arg1;

@end


@class FBInspirationStateUpdateManager, FBInspirationUpdateActionManager, FBInspirationLogger, NSString;

@interface FBInspirationUpdateHandler : NSObject <FBInspirationUpdateHandler> {

	/*^block*/id _forwardingHandler;
	FBInspirationStateUpdateManager* _updateManager;
	FBInspirationUpdateActionManager* _updateActionManager;
	FBInspirationLogger* _logger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithForwardingHandler:(/*^block*/id)arg1 session:(id)arg2 ;
-(void)handleInspirationUpdate:(id)arg1 ;
-(void)setCancelActionHandler:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

