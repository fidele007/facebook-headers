/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBDelightsKeyframesAnimationController, FBMobileConfigContextManager, FBDelightsNYE2017FeatureGating;

@interface FBDelightsEventHandler : NSObject {

	FBDelightsKeyframesAnimationController* _animationController;
	FBMobileConfigContextManager* _mobileConfigContextManager;
	FBDelightsNYE2017FeatureGating* _nye2017FeatureGating;

}
-(void)didPublishNewStoryWithMessage:(id)arg1 analyticsModule:(id)arg2 ;
-(void)didPublishCommentWithMessage:(id)arg1 analyticsModule:(id)arg2 ;
-(void)_startPostAnimationDelightsWithDelay:(double)arg1 ;
-(void)_startCommentAnimationDelightsWithDelay:(double)arg1 ;
-(void)didTapHighlightOnPostWithModule:(id)arg1 ;
-(void)didTapHighlightOnCommentWithModule:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

