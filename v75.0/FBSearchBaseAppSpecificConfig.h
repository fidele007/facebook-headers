/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSearchBaseAppSpecificConfigProtocol.h>

@class NSArray, NSString;

@interface FBSearchBaseAppSpecificConfig : NSObject <FBSearchBaseAppSpecificConfigProtocol> {

	BOOL _shouldCenterAlignVerifiedBadgeInNullState;
	BOOL _shouldUseFollowIconInsteadOfLikeIcon;
	BOOL _shouldAllowUnfollowing;
	BOOL _shouldAllowUserFollow;
	BOOL _shouldAllowUserSendFriendRequest;
	BOOL _shouldDisplayChevronAndSeparator;
	BOOL _seeMoreResultsDisabled;
	BOOL _shouldAllowSearchMessagingInlineAction;
	BOOL _shouldUseCustomizedIcon;
	BOOL _graphSearchEnablePublicPostsOnly;
	BOOL _graphSearchShowRecommendationsInNullState;
	BOOL _shouldEnableScrollableTabBar;
	BOOL _shouldSearchResultsContentBeCentered;
	BOOL _searchKeyboardShortcutsEnabled;
	NSArray* _graphSearchKeywordResultsFilterNamesArray;
	NSString* _simpleSearchNullServiceClassName;
	Class _styleConfigurationClass;
	unsigned long long _recentSearchesStyle;
	NSString* _searchFieldPlaceholderText;
	double _thumbComponentRightPadding;
	unsigned long long _searchMultiResultsViewStyle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL shouldCenterAlignVerifiedBadgeInNullState;                 //@synthesize shouldCenterAlignVerifiedBadgeInNullState=_shouldCenterAlignVerifiedBadgeInNullState - In the implementation block
@property (assign,nonatomic) BOOL shouldUseFollowIconInsteadOfLikeIcon;                      //@synthesize shouldUseFollowIconInsteadOfLikeIcon=_shouldUseFollowIconInsteadOfLikeIcon - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowUnfollowing;                                    //@synthesize shouldAllowUnfollowing=_shouldAllowUnfollowing - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowUserFollow;                                     //@synthesize shouldAllowUserFollow=_shouldAllowUserFollow - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowUserSendFriendRequest;                          //@synthesize shouldAllowUserSendFriendRequest=_shouldAllowUserSendFriendRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayChevronAndSeparator;                          //@synthesize shouldDisplayChevronAndSeparator=_shouldDisplayChevronAndSeparator - In the implementation block
@property (assign,nonatomic) BOOL seeMoreResultsDisabled;                                    //@synthesize seeMoreResultsDisabled=_seeMoreResultsDisabled - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableScrollableTabBar;                              //@synthesize shouldEnableScrollableTabBar=_shouldEnableScrollableTabBar - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowSearchMessagingInlineAction;                    //@synthesize shouldAllowSearchMessagingInlineAction=_shouldAllowSearchMessagingInlineAction - In the implementation block
@property (assign,nonatomic) BOOL shouldSearchResultsContentBeCentered;                      //@synthesize shouldSearchResultsContentBeCentered=_shouldSearchResultsContentBeCentered - In the implementation block
@property (assign,nonatomic) BOOL shouldUseCustomizedIcon;                                   //@synthesize shouldUseCustomizedIcon=_shouldUseCustomizedIcon - In the implementation block
@property (assign,nonatomic) BOOL graphSearchEnablePublicPostsOnly;                          //@synthesize graphSearchEnablePublicPostsOnly=_graphSearchEnablePublicPostsOnly - In the implementation block
@property (assign,nonatomic) unsigned long long recentSearchesStyle;                         //@synthesize recentSearchesStyle=_recentSearchesStyle - In the implementation block
@property (assign,nonatomic) BOOL graphSearchShowRecommendationsInNullState;                 //@synthesize graphSearchShowRecommendationsInNullState=_graphSearchShowRecommendationsInNullState - In the implementation block
@property (assign,nonatomic) BOOL searchKeyboardShortcutsEnabled;                            //@synthesize searchKeyboardShortcutsEnabled=_searchKeyboardShortcutsEnabled - In the implementation block
@property (assign,nonatomic) double thumbComponentRightPadding;                              //@synthesize thumbComponentRightPadding=_thumbComponentRightPadding - In the implementation block
@property (nonatomic,copy) NSArray * graphSearchKeywordResultsFilterNamesArray;              //@synthesize graphSearchKeywordResultsFilterNamesArray=_graphSearchKeywordResultsFilterNamesArray - In the implementation block
@property (nonatomic,copy) NSString * simpleSearchNullServiceClassName;                      //@synthesize simpleSearchNullServiceClassName=_simpleSearchNullServiceClassName - In the implementation block
@property (nonatomic,copy) NSString * searchFieldPlaceholderText;                            //@synthesize searchFieldPlaceholderText=_searchFieldPlaceholderText - In the implementation block
@property (nonatomic,retain) Class styleConfigurationClass;                                  //@synthesize styleConfigurationClass=_styleConfigurationClass - In the implementation block
@property (assign,nonatomic) unsigned long long searchMultiResultsViewStyle;                 //@synthesize searchMultiResultsViewStyle=_searchMultiResultsViewStyle - In the implementation block
+(id)applicationSpecificSearchConfig;
-(unsigned long long)recentSearchesStyle;
-(BOOL)graphSearchShowRecommendationsInNullState;
-(NSArray *)graphSearchKeywordResultsFilterNamesArray;
-(BOOL)shouldEnableScrollableTabBar;
-(unsigned long long)searchMultiResultsViewStyle;
-(void)setSeeMoreResultsDisabled:(BOOL)arg1 ;
-(BOOL)seeMoreResultsDisabled;
-(NSString *)simpleSearchNullServiceClassName;
-(double)thumbComponentRightPadding;
-(NSString *)searchFieldPlaceholderText;
-(BOOL)graphSearchEnablePublicPostsOnly;
-(BOOL)searchKeyboardShortcutsEnabled;
-(void)setShouldCenterAlignVerifiedBadgeInNullState:(BOOL)arg1 ;
-(void)setShouldUseFollowIconInsteadOfLikeIcon:(BOOL)arg1 ;
-(void)setShouldAllowUnfollowing:(BOOL)arg1 ;
-(void)setShouldAllowUserFollow:(BOOL)arg1 ;
-(void)setShouldAllowUserSendFriendRequest:(BOOL)arg1 ;
-(void)setShouldDisplayChevronAndSeparator:(BOOL)arg1 ;
-(void)setShouldUseCustomizedIcon:(BOOL)arg1 ;
-(void)setShouldAllowSearchMessagingInlineAction:(BOOL)arg1 ;
-(void)setGraphSearchEnablePublicPostsOnly:(BOOL)arg1 ;
-(void)setGraphSearchShowRecommendationsInNullState:(BOOL)arg1 ;
-(void)setGraphSearchKeywordResultsFilterNamesArray:(NSArray *)arg1 ;
-(void)setSimpleSearchNullServiceClassName:(NSString *)arg1 ;
-(void)setStyleConfigurationClass:(Class)arg1 ;
-(void)setShouldEnableScrollableTabBar:(BOOL)arg1 ;
-(void)setRecentSearchesStyle:(unsigned long long)arg1 ;
-(void)setShouldSearchResultsContentBeCentered:(BOOL)arg1 ;
-(void)setSearchKeyboardShortcutsEnabled:(BOOL)arg1 ;
-(void)setThumbComponentRightPadding:(double)arg1 ;
-(void)setSearchMultiResultsViewStyle:(unsigned long long)arg1 ;
-(BOOL)shouldCenterAlignVerifiedBadgeInNullState;
-(BOOL)shouldUseFollowIconInsteadOfLikeIcon;
-(BOOL)shouldAllowUnfollowing;
-(BOOL)shouldAllowUserFollow;
-(BOOL)shouldAllowUserSendFriendRequest;
-(BOOL)shouldDisplayChevronAndSeparator;
-(BOOL)shouldAllowSearchMessagingInlineAction;
-(BOOL)shouldSearchResultsContentBeCentered;
-(BOOL)shouldUseCustomizedIcon;
-(Class)styleConfigurationClass;
-(id)init;
-(void)setSearchFieldPlaceholderText:(NSString *)arg1 ;
@end

