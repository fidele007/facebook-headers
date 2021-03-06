/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/MNPSAppointmentDeclineViewDelegate.h>

@protocol MNPSAppointmentDeclineViewControllerDelegate;
@class FBProfServicesBookingDataModel, NSString;

@interface MNPSAppointmentDeclineViewController : UIViewController <MNPSAppointmentDeclineViewDelegate> {

	id<MNPSAppointmentDeclineViewControllerDelegate> _delegate;
	FBProfServicesBookingDataModel* _dataModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)fb_contentViewClass;
+(id)fb_eventName;
-(void)_didTapDone;
-(id)initWithDataModel:(id)arg1 delegate:(id)arg2 isModal:(BOOL)arg3 ;
-(void)declineViewDidChange:(id)arg1 ;
-(void)declineViewDidTap:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
@end

