/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString;


@protocol FBSearchBaseAppSpecificConfigProtocol <NSObject>
@property (assign,nonatomic) BOOL shouldCenterAlignVerifiedBadgeInNullState; 
@property (assign,nonatomic) BOOL shouldUseFollowIconInsteadOfLikeIcon; 
@property (assign,nonatomic) BOOL shouldAllowUnfollowing; 
@property (assign,nonatomic) BOOL shouldAllowUserFollow; 
@property (assign,nonatomic) BOOL shouldAllowUserSendFriendRequest; 
@property (assign,nonatomic) BOOL shouldDisplayChevronAndSeparator; 
@property (assign,nonatomic) BOOL seeMoreResultsDisabled; 
@property (assign,nonatomic) BOOL shouldEnableScrollableTabBar; 
@property (assign,nonatomic) BOOL shouldAllowSearchMessagingInlineAction; 
@property (assign,nonatomic) BOOL shouldSearchResultsContentBeCentered; 
@property (assign,nonatomic) BOOL shouldUseCustomizedIcon; 
@property (assign,nonatomic) BOOL graphSearchEnablePublicPostsOnly; 
@property (assign,nonatomic) unsigned long long recentSearchesStyle; 
@property (assign,nonatomic) BOOL graphSearchShowRecommendationsInNullState; 
@property (assign,nonatomic) BOOL searchKeyboardShortcutsEnabled; 
@property (assign,nonatomic) double thumbComponentRightPadding; 
@property (nonatomic,copy) NSArray * graphSearchKeywordResultsFilterNamesArray; 
@property (nonatomic,copy) NSString * simpleSearchNullServiceClassName; 
@property (nonatomic,copy) NSString * searchFieldPlaceholderText; 
@property (nonatomic,retain) Class styleConfigurationClass; 
@property (assign,nonatomic) unsigned long long searchMultiResultsViewStyle; 
@required
-(unsigned long long)recentSearchesStyle;
-(BOOL)graphSearchShowRecommendationsInNullState;
-(NSArray *)graphSearchKeywordResultsFilterNamesArray;
-(BOOL)shouldEnableScrollableTabBar;
-(unsigned long long)searchMultiResultsViewStyle;
-(void)setSeeMoreResultsDisabled:(BOOL)arg1;
-(BOOL)seeMoreResultsDisabled;
-(NSString *)simpleSearchNullServiceClassName;
-(double)thumbComponentRightPadding;
-(NSString *)searchFieldPlaceholderText;
-(BOOL)graphSearchEnablePublicPostsOnly;
-(BOOL)searchKeyboardShortcutsEnabled;
-(void)setShouldCenterAlignVerifiedBadgeInNullState:(BOOL)arg1;
-(void)setShouldUseFollowIconInsteadOfLikeIcon:(BOOL)arg1;
-(void)setShouldAllowUnfollowing:(BOOL)arg1;
-(void)setShouldAllowUserFollow:(BOOL)arg1;
-(void)setShouldAllowUserSendFriendRequest:(BOOL)arg1;
-(void)setShouldDisplayChevronAndSeparator:(BOOL)arg1;
-(void)setShouldUseCustomizedIcon:(BOOL)arg1;
-(void)setShouldAllowSearchMessagingInlineAction:(BOOL)arg1;
-(void)setGraphSearchEnablePublicPostsOnly:(BOOL)arg1;
-(void)setGraphSearchShowRecommendationsInNullState:(BOOL)arg1;
-(void)setGraphSearchKeywordResultsFilterNamesArray:(id)arg1;
-(void)setSimpleSearchNullServiceClassName:(id)arg1;
-(void)setStyleConfigurationClass:(Class)arg1;
-(void)setShouldEnableScrollableTabBar:(BOOL)arg1;
-(void)setRecentSearchesStyle:(unsigned long long)arg1;
-(void)setShouldSearchResultsContentBeCentered:(BOOL)arg1;
-(void)setSearchKeyboardShortcutsEnabled:(BOOL)arg1;
-(void)setThumbComponentRightPadding:(double)arg1;
-(void)setSearchMultiResultsViewStyle:(unsigned long long)arg1;
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
-(void)setSearchFieldPlaceholderText:(id)arg1;

@end

