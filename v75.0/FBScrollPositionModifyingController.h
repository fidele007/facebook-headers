/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBScrollPositionModifyingController <NSObject>
@required
-(double)fb_maxContentOffsetY;
-(double)fb_minContentOffsetY;
-(FBScrollViewState*)scrollViewState;
-(CGRect*)scrollViewConvertRect:(CGRect)arg1 toView:(id)arg2;
-(CGRect*)scrollViewConvertRect:(CGRect)arg1 fromView:(id)arg2;
-(CGPoint*)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2;

@end

