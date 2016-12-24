/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface MomentsPhotoOverlayPromotionExperimentContext : FBExperimentContext {

	long long _moments_photo_overlay_promotion_cap_window_in_hours;
	long long _moments_photo_overlay_promotion_impression_cap;

}

@property (assign,nonatomic) long long moments_photo_overlay_promotion_cap_window_in_hours;              //@synthesize moments_photo_overlay_promotion_cap_window_in_hours=_moments_photo_overlay_promotion_cap_window_in_hours - In the implementation block
@property (assign,nonatomic) long long moments_photo_overlay_promotion_impression_cap;                   //@synthesize moments_photo_overlay_promotion_impression_cap=_moments_photo_overlay_promotion_impression_cap - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)moments_photo_overlay_promotion_cap_window_in_hours;
-(long long)moments_photo_overlay_promotion_impression_cap;
-(void)setMoments_photo_overlay_promotion_cap_window_in_hours:(long long)arg1 ;
-(void)setMoments_photo_overlay_promotion_impression_cap:(long long)arg1 ;
@end

