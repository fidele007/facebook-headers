/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMPMSQRDFilterDelegate.h>
#import <Facebook/FBCaptureCoordinatorFilterController.h>

@protocol FBCCMSQRDFilterDelegate;
@class FBMPMSQRDFilter, NSString;

@interface FBCCMSQRDFilterController : NSObject <FBMPMSQRDFilterDelegate, FBCaptureCoordinatorFilterController> {

	FBMPMSQRDFilter* _filter;
	id<FBCCMSQRDFilterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCCMSQRDFilterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFilter:(id)arg1 ;
-(void)msqrdFilter:(id)arg1 didChangeFaceDetectionState:(unsigned long long)arg2 ;
-(void)msqrdFilterFailedToConfigureFaceTracker:(id)arg1 ;
-(void)setDelegate:(id<FBCCMSQRDFilterDelegate>)arg1 ;
-(id<FBCCMSQRDFilterDelegate>)delegate;
@end

