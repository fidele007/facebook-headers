/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMemPageCardController.h>
#import <Facebook/FBCardViewProvider.h>

@protocol FBServiceTransactionMutating;
@class FBMemPageWelcomeHomeCardCell, NSString;

@interface FBMemPageWelcomeHomeCardController : FBMemPageCardController <FBCardViewProvider> {

	FBMemPageWelcomeHomeCardCell* _cardCell;
	NSString* _userFirstName;
	id<FBServiceTransactionMutating> _token;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<FBPageCardProtocol> cardView; 
-(id)initWithPage:(id)arg1 analyticsUUID:(id)arg2 delegate:(id)arg3 userSession:(id)arg4 actionSource:(id)arg5 sourceID:(id)arg6 toolbox:(id)arg7 scenePath:(id)arg8 timelineHeaderTableView:(id)arg9 ;
-(void)_fetchName;
-(BOOL)isViewerResidenceOwner;
-(UIView*<FBPageCardProtocol>)cardView;
@end
