/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBNewAccountRegistrationStepViewController.h>

@protocol FBNewAccountRegistrationStepViewControllerDelegate;
@class FBNewAccountRegistrationData, NSArray, FBNewAccountRegistrationStepView, FBNewAccountRegistrationBirthdayView, NSString;

@interface FBNewAccountRegistrationBirthdayStepViewController : UIViewController <FBNewAccountRegistrationStepViewController> {

	FBNewAccountRegistrationBirthdayView* _birthdayView;
	id<FBNewAccountRegistrationStepViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) long long minimumAge; 
@property (nonatomic,readonly) long long maximumAge; 
@property (nonatomic,readonly) FBNewAccountRegistrationStepView * stepView; 
@property (assign,nonatomic,__weak) id<FBNewAccountRegistrationStepViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBNewAccountRegistrationData * registrationData; 
@property (nonatomic,copy,readonly) NSArray * registrationDataPropertyNames; 
-(long long)minimumAge;
-(long long)maximumAge;
-(void)_handleDateSelection:(id)arg1 ;
-(void)_didTapDateTextField:(id)arg1 ;
-(FBNewAccountRegistrationStepView *)stepView;
-(int)validateRegistrationData:(id)arg1 ;
-(id)errorTextForType:(int)arg1 ;
-(id)serverValidationErrorCodes;
-(void)setRegistrationData:(FBNewAccountRegistrationData *)arg1 ;
-(NSArray *)registrationDataPropertyNames;
-(void)setDelegate:(id<FBNewAccountRegistrationStepViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBNewAccountRegistrationStepViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)becomeFirstResponder;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(FBNewAccountRegistrationData *)registrationData;
@end

