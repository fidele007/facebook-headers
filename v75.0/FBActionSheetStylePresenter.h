/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBActionSheetStylePresenter <NSObject>
@property (assign,nonatomic,__weak) id<FBActionSheetStylePresenterDelegate> delegate; 
@required
-(void)presentFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3;
-(void)setDelegate:(id)arg1;
-(id<FBActionSheetStylePresenterDelegate>)delegate;
-(void)dismissAnimated:(BOOL)arg1;
-(id)initWithButtons:(id)arg1;

@end

