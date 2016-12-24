/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/RCTInvalidating.h>

@class RCTBridge, FBTransparentView, FBTransparentWindow, UIView, NSString;

@interface RKModalFullscreenHost : NSObject <RCTInvalidating> {

	RCTBridge* _bridge;
	FBTransparentView* _modalContentView;
	FBTransparentWindow* _hostWindow;

}

@property (nonatomic,__weak,readonly) UIView * contentView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)notifyForBoundsChange:(CGRect)arg1 ;
-(id)initWithBridge:(id)arg1 ;
-(void)removeSubview:(id)arg1 ;
-(void)insertSubview:(id)arg1 atIndex:(long long)arg2 ;
-(void)invalidate;
-(UIView *)contentView;
@end
