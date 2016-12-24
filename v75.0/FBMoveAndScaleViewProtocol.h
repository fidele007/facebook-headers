/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, NSArray;


@protocol FBMoveAndScaleViewProtocol <NSObject>
@property (assign,nonatomic,__weak) id<FBMoveAndScaleViewDelegate> delegate; 
@property (assign,nonatomic) double topLayoutGuideLength; 
@property (nonatomic,readonly) UIView * asUIView; 
@property (nonatomic,copy,readonly) NSArray * initialCropPoints; 
@property (assign,nonatomic) CGSize minimumCroppedSize; 
@required
-(void)swapInHighResolutionImage:(id)arg1;
-(void)setTopLayoutGuideLength:(double)arg1;
-(double)topLayoutGuideLength;
-(UIView *)asUIView;
-(void)zoomToCropSquareAnimated:(BOOL)arg1;
-(id)getCurrentCropPoints;
-(NSArray *)initialCropPoints;
-(void)setMinimumCroppedSize:(CGSize)arg1;
-(CGSize)minimumCroppedSize;
-(void)hideCropConstraintView;
-(void)hideBottomBar:(BOOL)arg1;
-(BOOL)isBottomBarHidden;
-(void)setDelegate:(id)arg1;
-(id<FBMoveAndScaleViewDelegate>)delegate;

@end
