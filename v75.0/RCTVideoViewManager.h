/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/RCTViewManager.h>
#import <Facebook/RCTVideoViewDelegate.h>

@class NSString;

@interface RCTVideoViewManager : RCTViewManager <RCTVideoViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)moduleName;
+(id)propConfig_src;
+(id)propConfig_isPaused;
+(id)propConfig_volume;
+(id)propConfig_startPosition;
+(id)propConfig_resizeMode;
+(id)propConfig_onProgress;
+(id)propConfig_onStateChange;
+(id)__rct_export__520;
+(void)load;
-(id)constantsToExport;
-(void)videoViewStateDidChange:(id)arg1 ;
-(void)videoViewCurrentTimeDidChange:(id)arg1 time:(SCD_Struct_FB100)arg2 duration:(float)arg3 ;
-(void)seek:(id)arg1 toTime:(double)arg2 ;
-(id)view;
@end

