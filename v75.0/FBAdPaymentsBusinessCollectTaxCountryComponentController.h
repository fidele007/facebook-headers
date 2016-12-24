/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPopoverControllerDelegate.h>
#import <Facebook/FBAdPaymentsMountComponentController.h>

@protocol FBAdPaymentsMountComponentControllerDelegate;
@class FBUserSession, FBAdPaymentsBusinessCollectTaxCountryView, NSArray, FBActionSheetButtonItem, NSString, FBPopoverActionSheet;

@interface FBAdPaymentsBusinessCollectTaxCountryComponentController : NSObject <FBPopoverControllerDelegate, FBAdPaymentsMountComponentController> {

	FBUserSession* _session;
	FBAdPaymentsBusinessCollectTaxCountryView* _componentView;
	NSArray* _taxCountryList;
	NSArray* _actionItems;
	FBActionSheetButtonItem* _selectedActionItem;
	id<FBAdPaymentsMountComponentControllerDelegate> _delegate;
	NSString* _componentIdentifier;
	FBPopoverActionSheet* _popoverActionSheet;

}

@property (nonatomic,retain) FBPopoverActionSheet * popoverActionSheet;                                     //@synthesize popoverActionSheet=_popoverActionSheet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAdPaymentsMountComponentControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * componentIdentifier;                                                  //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
-(FBPopoverActionSheet *)popoverActionSheet;
-(void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(id)componentView;
-(void)setPopoverActionSheet:(FBPopoverActionSheet *)arg1 ;
-(id)initWithSession:(id)arg1 componentIdentifier:(id)arg2 ;
-(NSString *)componentIdentifier;
-(BOOL)resignFirstRespodner;
-(void)setComponentIdentifier:(NSString *)arg1 ;
-(void)_didActionItemClicked:(id)arg1 ;
-(void)_selectActionItem:(id)arg1 ;
-(void)dismissTaxCountryList;
-(id)selectedTaxCountryCode;
-(void)showTaxCountryList;
-(void)setDelegate:(id<FBAdPaymentsMountComponentControllerDelegate>)arg1 ;
-(id<FBAdPaymentsMountComponentControllerDelegate>)delegate;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
@end

