/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBScrollViewSwipeBasedDismissalManagerDelegate <NSObject>
@optional
-(BOOL)scrollViewSwipeBasedDismissalManagerShouldBeginSwipingContainerView:(id)arg1 withDirection:(long long)arg2;
-(void)scrollViewSwipeBasedDismissalManagerWillBeginContainerResetAnimation:(id)arg1;
-(void)scrollViewSwipeBasedDismissalManager:(id)arg1 didEndContainerResetWithAnimation:(BOOL)arg2;
-(void)scrollViewSwipeBasedDismissalManagerDidBeginSwipingContainerView:(id)arg1;
-(void)scrollViewSwipeBasedDismissalManager:(id)arg1 didUpdateContainerTranslationProgress:(double)arg2;

@required
-(void)scrollViewSwipeBasedDismissalManager:(id)arg1 didDetectDismissalGestureWithDirection:(unsigned long long)arg2 fromView:(id)arg3;

@end
