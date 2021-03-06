/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponentController.h>

@class FBThrowbackScatteredPhotoPanHelper;

@interface FBThrowbackScatteredPhotosComponentController : CKComponentController {

	BOOL _hasAppeared;
	FBThrowbackScatteredPhotoPanHelper* _panHelper;
	CGSize _centerSizeUsedForLayout;
	vector<CGPoint, std::__1::allocator<CGPoint> >* _childCenters;

}

@property (assign,nonatomic) vector<CGPoint childCenters;                 //@synthesize childCenters=_childCenters - In the implementation block
@property (assign,nonatomic) CGSize centerSizeUsedForLayout;              //@synthesize centerSizeUsedForLayout=_centerSizeUsedForLayout - In the implementation block
-(void)didMount;
-(void)componentTreeWillAppear;
-(vector<CGPoint)childCenters;
-(CGSize)centerSizeUsedForLayout;
-(void)setCenterSizeUsedForLayout:(CGSize)arg1 ;
-(void)setChildCenters:(vector<CGPoint)arg1 ;
-(void)updateComponentOnAppearanceWithMode:(unsigned long long)arg1 ;
-(void)resetPhotoPositions;
@end

