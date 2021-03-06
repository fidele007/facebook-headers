/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentHandler.h>

@protocol FBIntentHandler;
@class FBUserSession, NSDictionary, FBPopoverActionSheet, NSString, FBInstantShoppingDocumentView;

@interface FBInstantShoppingIntentHandler : NSObject <FBIntentHandler> {

	FBUserSession* _session;
	id<FBIntentHandler> _fallbackIntentHandler;
	NSDictionary* _analyticsInfo;
	FBPopoverActionSheet* _actionSheet;
	NSString* _catalogID;
	FBInstantShoppingDocumentView* _hostingView;

}

@property (assign,nonatomic,__weak) FBInstantShoppingDocumentView * hostingView;              //@synthesize hostingView=_hostingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleIntent:(id)arg1 ;
-(FBInstantShoppingDocumentView *)hostingView;
-(void)setHostingView:(FBInstantShoppingDocumentView *)arg1 ;
-(id)initWithSession:(id)arg1 analyticsInfo:(id)arg2 catalogID:(id)arg3 fallbackIntentHandler:(id)arg4 ;
-(void)_showConfirmationViewWithText:(id)arg1 ;
-(void)_showCustomNoticeWithText:(id)arg1 style:(id)arg2 ;
-(void)handleAction:(id)arg1 ;
@end

