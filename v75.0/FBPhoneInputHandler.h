/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Facebook/FBPhoneCountryCodesPickerViewControllerDelegate.h>
#import <Facebook/FBPhoneInputViewDelegate.h>

@protocol FBPhoneInputHandlerDelegate, FBPhoneNumberFactory, FBPhoneNumberMetadata, FBNavigationCoordinator;
@class FBPhoneInputView, NSString, UIViewController;

@interface FBPhoneInputHandler : NSObject <UITextFieldDelegate, FBPhoneCountryCodesPickerViewControllerDelegate, FBPhoneInputViewDelegate> {

	FBPhoneInputView* _phoneInputView;
	NSString* _isoCountryCode;
	id<FBPhoneInputHandlerDelegate> _delegate;
	UIViewController* _viewController;
	id<FBPhoneNumberFactory> _phoneNumberFactory;
	id<FBPhoneNumberMetadata> _phoneNumberMetadata;
	id<FBNavigationCoordinator> _navigationCoordinator;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;                       //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) id<FBPhoneNumberFactory> phoneNumberFactory;                    //@synthesize phoneNumberFactory=_phoneNumberFactory - In the implementation block
@property (nonatomic,retain) id<FBPhoneNumberMetadata> phoneNumberMetadata;                  //@synthesize phoneNumberMetadata=_phoneNumberMetadata - In the implementation block
@property (nonatomic,copy) NSString * isoCountryCode;                                        //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,retain) id<FBNavigationCoordinator> navigationCoordinator;              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,retain) FBPhoneInputView * phoneInputView;                              //@synthesize phoneInputView=_phoneInputView - In the implementation block
@property (nonatomic,retain) id<FBPhoneNumber> phoneNumber; 
@property (assign,nonatomic,__weak) id<FBPhoneInputHandlerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(void)setNavigationCoordinator:(id<FBNavigationCoordinator>)arg1 ;
-(FBPhoneInputView *)phoneInputView;
-(void)setPhoneInputView:(FBPhoneInputView *)arg1 ;
-(id)initWithViewController:(id)arg1 factory:(id)arg2 metadata:(id)arg3 ;
-(id)initWithNavigationCoordinator:(id)arg1 factory:(id)arg2 metadata:(id)arg3 ;
-(void)countryPicker:(id)arg1 didSelectCountryWithCountryCode:(id)arg2 ;
-(void)dismissCountryPicker:(id)arg1 ;
-(void)setPhoneNumberMetadata:(id<FBPhoneNumberMetadata>)arg1 ;
-(id<FBPhoneNumberMetadata>)phoneNumberMetadata;
-(id)initWithViewController:(id)arg1 factory:(id)arg2 metadata:(id)arg3 navigationCoordinator:(id)arg4 ;
-(void)setPhoneNumberFactory:(id<FBPhoneNumberFactory>)arg1 ;
-(void)_presentCountryPicker;
-(void)phoneInputViewDidTapCountryLabel:(id)arg1 ;
-(id<FBPhoneNumberFactory>)phoneNumberFactory;
-(void)setDelegate:(id<FBPhoneInputHandlerDelegate>)arg1 ;
-(id<FBPhoneInputHandlerDelegate>)delegate;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(id<FBPhoneNumber>)phoneNumber;
-(NSString *)isoCountryCode;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(void)setPhoneNumber:(id<FBPhoneNumber>)arg1 ;
@end

