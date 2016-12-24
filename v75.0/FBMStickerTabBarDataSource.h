/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMStickerTabBarDataSource.h>

@protocol FBMStickerTabBarDataSource <NSObject>
@required
-(unsigned long long)numberOfTabsInStickerTabBar:(id)arg1;
-(id)stickerTabBar:(id)arg1 buttonForTabAtIndex:(unsigned long long)arg2;

@end


@protocol FBStickerResourceManager, FBStickerUserSettings;
@class NSArray, FBServiceTransactionTokenManager, NSString;

@interface FBMStickerTabBarDataSource : NSObject <FBMStickerTabBarDataSource> {

	id<FBStickerResourceManager> _stickerResourceManager;
	id<FBStickerUserSettings> _userSettings;
	NSArray* _stickerTabItems;
	unsigned long long _recentsTabIndex;
	unsigned long long _searchTabIndex;
	unsigned long long _storeTabIndex;
	FBServiceTransactionTokenManager* _tokenManager;
	BOOL _searchEnabled;
	BOOL _storeTabIncluded;
	NSArray* _stickerPacks;

}

@property (nonatomic,copy) NSArray * stickerPacks;                  //@synthesize stickerPacks=_stickerPacks - In the implementation block
@property (assign,nonatomic) BOOL searchEnabled;                    //@synthesize searchEnabled=_searchEnabled - In the implementation block
@property (assign,nonatomic) BOOL storeTabIncluded;                 //@synthesize storeTabIncluded=_storeTabIncluded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStickerResourceManager:(id)arg1 userSettings:(id)arg2 ;
-(unsigned long long)searchTabIndex;
-(unsigned long long)storePackTabIndex;
-(unsigned long long)tabIndexForStickerPack:(id)arg1 ;
-(void)setStickerPacks:(NSArray *)arg1 ;
-(unsigned long long)recentsTabIndex;
-(NSArray *)stickerPacks;
-(unsigned long long)numberOfPagesInStickerPresenter:(id)arg1 ;
-(id)stickerPackAtTabIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfTabsInStickerTabBar:(id)arg1 ;
-(id)stickerTabBar:(id)arg1 buttonForTabAtIndex:(unsigned long long)arg2 ;
-(void)_generateStickerTabItems;
-(BOOL)storeTabIncluded;
-(void)setStoreTabIncluded:(BOOL)arg1 ;
-(void)dealloc;
-(void)setSearchEnabled:(BOOL)arg1 ;
-(BOOL)searchEnabled;
@end

