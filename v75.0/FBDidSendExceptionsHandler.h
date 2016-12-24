/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBDidSendExceptionsHandlerProtocol.h>

@class UIColor, NSString;

@interface FBDidSendExceptionsHandler : NSObject <FBDidSendExceptionsHandlerProtocol> {

	UIColor* _backgroundColor;
	BOOL _shouldShowCrashReportsUploadToast;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showCrashReportsUploadToastIfNeeded;
-(void)_fb_applicationDidBecomeActive;
-(void)_showCrashReportsUploadToast;
-(void)exceptionHandlerHasUploadedCrashReportsToServer;
-(BOOL)shouldShowCrashReportsUploadToast;
-(void)dealloc;
-(id)init;
-(id)initWithBackgroundColor:(id)arg1 ;
@end
