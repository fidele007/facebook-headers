/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoEditingViewControllerDelegate <NSObject>
@required
-(void)videoEditingViewController:(id)arg1 didChangeTrimRange:(SCD_Struct_FB101)arg2;
-(void)videoEditingViewController:(id)arg1 didChangeMuteState:(BOOL)arg2;
-(void)videoEditingViewController:(id)arg1 didChangeCropOriginWidthProportion:(double)arg2 cropOriginHeightProportion:(double)arg3;
-(void)videoEditingViewController:(id)arg1 didChangeFilterConfig:(id)arg2;
-(void)videoEditingViewController:(id)arg1 didChangeHDUploadSelection:(BOOL)arg2;
-(void)videoEditingViewControllerDidChangeToTrimView:(id)arg1;
-(void)videoEditingViewControllerDidChangeToSoundView:(id)arg1;
-(void)videoEditingViewControllerDidChangeToCropView:(id)arg1;
-(void)videoEditingViewControllerDidChangeToFilterView:(id)arg1;
-(void)videoEditingViewControllerDidChangeToCoverView:(id)arg1;

@end

