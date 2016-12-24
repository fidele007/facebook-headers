/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFeedSecondaryActionHandler.h>

@protocol FBGoodwillPinnedUnitSecondaryActionHandlerDelegate;
@class FBUserSession, NSString;

@interface FBGoodwillPinnedUnitSecondaryActionHandler : NSObject <FBFeedSecondaryActionHandler> {

	FBUserSession* _session;
	id<FBGoodwillPinnedUnitSecondaryActionHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBGoodwillPinnedUnitSecondaryActionHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * handlerName; 
-(id)actionsForFeedUnit:(id)arg1 element:(id)arg2 trackingCodes:(id)arg3 context:(id)arg4 ;
-(void)setDelegate:(id<FBGoodwillPinnedUnitSecondaryActionHandlerDelegate>)arg1 ;
-(id<FBGoodwillPinnedUnitSecondaryActionHandlerDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end

