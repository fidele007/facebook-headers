/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITextField.h>
#import <Facebook/FBPhoneCountryCodesPickerViewControllerDelegate.h>

@protocol FBNavigationCoordinator, FBLeadGenZipCodeViewDelegate;
@class UIButton, UILabel, FBDrawnShapeView, NSString;

@interface FBLeadGenZipCodeView : UITextField <FBPhoneCountryCodesPickerViewControllerDelegate> {

	UIButton* _hiddenButton;
	UILabel* _countryLabel;
	FBDrawnShapeView* _downChevron;
	NSString* _countryCode;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBLeadGenZipCodeViewDelegate> _countrySelectionDelegate;

}

@property (nonatomic,copy) NSString * countryCode;                                                          //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * zipCode; 
@property (nonatomic,retain) id<FBNavigationCoordinator> navigationCoordinator;                             //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<FBLeadGenZipCodeViewDelegate> countrySelectionDelegate;              //@synthesize countrySelectionDelegate=_countrySelectionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(void)setNavigationCoordinator:(id<FBNavigationCoordinator>)arg1 ;
-(NSString *)zipCode;
-(void)countryPicker:(id)arg1 didSelectCountryWithCountryCode:(id)arg2 ;
-(void)dismissCountryPicker:(id)arg1 ;
-(void)setZipCode:(NSString *)arg1 ;
-(void)tapCountryPicker;
-(void)setCountrySelectionDelegate:(id<FBLeadGenZipCodeViewDelegate>)arg1 ;
-(id<FBLeadGenZipCodeViewDelegate>)countrySelectionDelegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
@end
