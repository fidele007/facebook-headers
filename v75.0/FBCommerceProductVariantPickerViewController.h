/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <Facebook/FBCommercePickerOverlayViewDelegate.h>

@protocol FBCommerceProductVariantPickerViewControllerDelegate;
@class NSArray, NSDictionary, FBCommerceProductSection, UIPickerView, UITextField, FBCommercePickerOverlayView, NSString;

@interface FBCommerceProductVariantPickerViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate, FBCommercePickerOverlayViewDelegate> {

	unsigned long long _viewControllerType;
	long long _totalQuantity;
	NSArray* _variants;
	NSDictionary* _variantStatus;
	long long _variantIndex;
	FBCommerceProductSection* _section;
	id<FBCommerceProductVariantPickerViewControllerDelegate> _delegate;
	UIPickerView* _pickerView;
	UITextField* _textField;
	FBCommercePickerOverlayView* _overlayView;
	NSDictionary* _selectedVariant;
	long long _selectedQuantity;

}

@property (nonatomic,retain) UIPickerView * pickerView;                                                             //@synthesize pickerView=_pickerView - In the implementation block
@property (nonatomic,retain) UITextField * textField;                                                               //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) FBCommercePickerOverlayView * overlayView;                                             //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,copy) NSDictionary * selectedVariant;                                                          //@synthesize selectedVariant=_selectedVariant - In the implementation block
@property (assign,nonatomic) long long selectedQuantity;                                                            //@synthesize selectedQuantity=_selectedQuantity - In the implementation block
@property (assign,nonatomic,__weak) id<FBCommerceProductVariantPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)selectedQuantity;
-(NSDictionary *)selectedVariant;
-(void)doneTouched:(id)arg1 ;
-(void)didTapOnPickerOverlayView:(id)arg1 ;
-(id)initWithSection:(id)arg1 variantIndex:(long long)arg2 viewControllerType:(unsigned long long)arg3 ;
-(void)presentPicker:(id)arg1 ;
-(void)setSelectedVariant:(NSDictionary *)arg1 ;
-(void)setSelectedQuantity:(long long)arg1 ;
-(UIPickerView *)pickerView;
-(void)setPickerView:(UIPickerView *)arg1 ;
-(void)setDelegate:(id<FBCommerceProductVariantPickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(id)init;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(id<FBCommerceProductVariantPickerViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(UITextField *)textField;
-(void)setOverlayView:(FBCommercePickerOverlayView *)arg1 ;
-(FBCommercePickerOverlayView *)overlayView;
-(void)setTextField:(UITextField *)arg1 ;
-(void)_dismissPicker;
@end

