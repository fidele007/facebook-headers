/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBFeedTopicFollowingExperimentContext : FBExperimentContext {

	BOOL _include_topic_posts_in_news_feed_query;
	BOOL _render_story_in_card;
	BOOL _enabled;
	BOOL _invert_story_order;
	BOOL _query_for_followable_topics;
	BOOL _use_condensed_header;
	NSString* _topic_header_prefix;

}

@property (assign,nonatomic) BOOL include_topic_posts_in_news_feed_query;              //@synthesize include_topic_posts_in_news_feed_query=_include_topic_posts_in_news_feed_query - In the implementation block
@property (assign,nonatomic) BOOL render_story_in_card;                                //@synthesize render_story_in_card=_render_story_in_card - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                             //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL invert_story_order;                                  //@synthesize invert_story_order=_invert_story_order - In the implementation block
@property (assign,nonatomic) BOOL query_for_followable_topics;                         //@synthesize query_for_followable_topics=_query_for_followable_topics - In the implementation block
@property (assign,nonatomic) BOOL use_condensed_header;                                //@synthesize use_condensed_header=_use_condensed_header - In the implementation block
@property (nonatomic,copy) NSString * topic_header_prefix;                             //@synthesize topic_header_prefix=_topic_header_prefix - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)include_topic_posts_in_news_feed_query;
-(BOOL)invert_story_order;
-(BOOL)query_for_followable_topics;
-(BOOL)render_story_in_card;
-(NSString *)topic_header_prefix;
-(BOOL)use_condensed_header;
-(void)setInclude_topic_posts_in_news_feed_query:(BOOL)arg1 ;
-(void)setRender_story_in_card:(BOOL)arg1 ;
-(void)setInvert_story_order:(BOOL)arg1 ;
-(void)setQuery_for_followable_topics:(BOOL)arg1 ;
-(void)setUse_condensed_header:(BOOL)arg1 ;
-(void)setTopic_header_prefix:(NSString *)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
@end

