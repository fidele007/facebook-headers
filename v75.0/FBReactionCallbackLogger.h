/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionLogging.h>

@protocol FBReactionCallbackLoggerDelegate;
@class NSString;

@interface FBReactionCallbackLogger : NSObject <FBReactionLogging> {

	id<FBReactionCallbackLoggerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBReactionCallbackLoggerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logUserInteraction:(id)arg1 withExtras:(id)arg2 forReactionUnit:(id)arg3 ;
-(void)setDelegate:(id<FBReactionCallbackLoggerDelegate>)arg1 ;
-(id<FBReactionCallbackLoggerDelegate>)delegate;
@end

