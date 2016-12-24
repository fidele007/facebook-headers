/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComposerDatePickerViewControllerDelegate.h>
#import <Facebook/FBComposerPickerController.h>

@protocol FBComposerUpdateHandler;
@class FBComposerDatePickerViewController, NSString;

@interface FBComposerDatePickerController : NSObject <FBComposerDatePickerViewControllerDelegate, FBComposerPickerController> {

	FBComposerDatePickerViewController* _datePickerViewController;
	id<FBComposerUpdateHandler> _updateHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)presentableViewControllerWithNavigationPayload:(id)arg1 ;
-(unsigned long long)popoverStyle;
-(CGSize)popoverContentSizeForOrientation:(long long)arg1 ;
-(void)dismissPopoverController;
-(void)datePickerControllerDidFinish:(id)arg1 withEventStartDate:(id)arg2 eventEndDate:(id)arg3 isCurrentWork:(BOOL)arg4 isGraduated:(BOOL)arg5 ;
-(id)initWithUpdateHandler:(id)arg1 earliestDateAllowed:(id)arg2 lifeEventType:(unsigned long long)arg3 lifeEventDate:(id)arg4 ;
-(void)dealloc;
@end
