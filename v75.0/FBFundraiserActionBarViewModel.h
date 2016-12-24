/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBFundraiserActionBarViewModel : NSObject {

	NSArray* _primaryItems;
	NSArray* _secondaryItems;
	NSArray* _shareItems;

}

@property (nonatomic,copy,readonly) NSArray * primaryItems;                //@synthesize primaryItems=_primaryItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * secondaryItems;              //@synthesize secondaryItems=_secondaryItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * shareItems;                  //@synthesize shareItems=_shareItems - In the implementation block
+(id)viewModelForCampaign:(id)arg1 toolbox:(id)arg2 ;
+(id)primaryEditItem;
+(id)primaryFollowItem:(BOOL)arg1 ;
+(id)primaryInviteItem:(BOOL)arg1 ;
+(id)primaryShareItem;
+(id)secondaryDeleteItem;
+(id)secondaryGotoPageItem;
+(id)secondaryFollowItem:(BOOL)arg1 ;
+(id)secondaryReportItem;
+(id)shareWritePostItem;
+(id)shareMessengerItem;
+(id)shareCopyLinkItem;
-(NSArray *)primaryItems;
-(NSArray *)secondaryItems;
-(NSArray *)shareItems;
-(id)initWithPrimaryItems:(id)arg1 secondaryItems:(id)arg2 shareItems:(id)arg3 ;
@end
