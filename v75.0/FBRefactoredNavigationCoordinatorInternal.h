/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController;


@protocol FBRefactoredNavigationCoordinatorInternal
@property (nonatomic,__weak,readonly) UIViewController * modalPresentingViewController; 
@required
-(BOOL)openViewController:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 popoverInfo:(id)arg4 animated:(BOOL)arg5 completion:(/*^block*/id)arg6 whenClosed:(/*^block*/id)arg7;
-(void)dismissOpenedViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(UIViewController *)modalPresentingViewController;
-(BOOL)hasNonStackModalViewController;

@end

