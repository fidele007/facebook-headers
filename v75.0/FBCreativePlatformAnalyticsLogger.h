/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBViewerContextClassProvidable.h>
#import <Facebook/FBCreativePlatformIncomingAppActionListener.h>
#import <Facebook/FBCreativePlatformOutgoingAppActionListener.h>

@class NSString;

@interface FBCreativePlatformAnalyticsLogger : NSObject <FBViewerContextClassProvidable, FBCreativePlatformIncomingAppActionListener, FBCreativePlatformOutgoingAppActionListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didPerformIncomingAppAction:(id)arg1 ;
-(void)didFailToPerformIncomingAppAction:(id)arg1 withError:(id)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didPerformOutgoingAppAction:(id)arg1 ;
-(void)didFailToPerformOutgoingAppAction:(id)arg1 withError:(id)arg2 ;
@end

