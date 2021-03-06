/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Facebook/CKComponentHostingViewDelegate.h>
#import <Facebook/FBPickerStateListener.h>

@class UIView, CKComponentHostingView, FBPickerSubcomponentModel, NSString;

@interface FBPickerViewControllerView : UIView <CKComponentHostingViewDelegate, FBPickerStateListener> {

	UIView* _contentView;
	CKComponentHostingView* _subcomponentHostingView;
	FBPickerSubcomponentModel* _subcomponentModel;

}

@property (nonatomic,copy) UIView * contentView;                                          //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy) CKComponentHostingView * subcomponentHostingView;              //@synthesize subcomponentHostingView=_subcomponentHostingView - In the implementation block
@property (nonatomic,copy) FBPickerSubcomponentModel * subcomponentModel;                 //@synthesize subcomponentModel=_subcomponentModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(void)pickerFinishedWithDesiredResult:(id)arg1 ;
-(void)pickerUpdatedToState:(id)arg1 ;
-(id)initWithContentView:(id)arg1 headerComponentBlock:(/*^block*/id)arg2 pickerHeaderToolbox:(id)arg3 initialState:(id)arg4 ;
-(CKComponentHostingView *)subcomponentHostingView;
-(void)setSubcomponentHostingView:(CKComponentHostingView *)arg1 ;
-(FBPickerSubcomponentModel *)subcomponentModel;
-(void)setSubcomponentModel:(FBPickerSubcomponentModel *)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
@end

