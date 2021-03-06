/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface FBFeedAwesomizerProfileListCardSortSheetModel : NSObject {

	long long _cardType;
	long long _sortMode;
	long long _filterMode;
	UIColor* _themeColor;

}

@property (nonatomic,readonly) long long cardType;                //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,readonly) long long sortMode;                //@synthesize sortMode=_sortMode - In the implementation block
@property (nonatomic,readonly) long long filterMode;              //@synthesize filterMode=_filterMode - In the implementation block
@property (nonatomic,readonly) UIColor * themeColor;              //@synthesize themeColor=_themeColor - In the implementation block
-(UIColor *)themeColor;
-(long long)sortMode;
-(id)initWithCardType:(long long)arg1 sortMode:(long long)arg2 filterMode:(long long)arg3 themeColor:(id)arg4 ;
-(long long)cardType;
-(long long)filterMode;
@end

