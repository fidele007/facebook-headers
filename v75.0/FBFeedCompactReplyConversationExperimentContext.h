/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBFeedCompactReplyConversationExperimentContext : FBExperimentContext {

	BOOL _show_done_button_on_keyboard;
	BOOL _show_more_reply_pager;
	BOOL _show_previous_reply_pager;
	BOOL _show_comment_like_button;
	NSString* _top_level_composer_visibility;
	BOOL _hide_reply_composer_when_story_not_compressed;
	NSString* _story_compression_criteria_bump_reasons;
	BOOL _hide_top_lvl_composer_when_story_compressed;
	BOOL _comment_author_name_and_body_text_on_same_line;
	NSString* _reply_composer_style;
	BOOL _show_compact_reply_conversation;
	BOOL _use_white_background_for_comments;
	BOOL _show_reply_composer;
	NSString* _reply_composer_visibility;

}

@property (assign,nonatomic) BOOL show_done_button_on_keyboard;                                //@synthesize show_done_button_on_keyboard=_show_done_button_on_keyboard - In the implementation block
@property (assign,nonatomic) BOOL show_more_reply_pager;                                       //@synthesize show_more_reply_pager=_show_more_reply_pager - In the implementation block
@property (assign,nonatomic) BOOL show_previous_reply_pager;                                   //@synthesize show_previous_reply_pager=_show_previous_reply_pager - In the implementation block
@property (assign,nonatomic) BOOL show_comment_like_button;                                    //@synthesize show_comment_like_button=_show_comment_like_button - In the implementation block
@property (nonatomic,copy) NSString * top_level_composer_visibility;                           //@synthesize top_level_composer_visibility=_top_level_composer_visibility - In the implementation block
@property (assign,nonatomic) BOOL hide_reply_composer_when_story_not_compressed;               //@synthesize hide_reply_composer_when_story_not_compressed=_hide_reply_composer_when_story_not_compressed - In the implementation block
@property (nonatomic,copy) NSString * story_compression_criteria_bump_reasons;                 //@synthesize story_compression_criteria_bump_reasons=_story_compression_criteria_bump_reasons - In the implementation block
@property (assign,nonatomic) BOOL hide_top_lvl_composer_when_story_compressed;                 //@synthesize hide_top_lvl_composer_when_story_compressed=_hide_top_lvl_composer_when_story_compressed - In the implementation block
@property (assign,nonatomic) BOOL comment_author_name_and_body_text_on_same_line;              //@synthesize comment_author_name_and_body_text_on_same_line=_comment_author_name_and_body_text_on_same_line - In the implementation block
@property (nonatomic,copy) NSString * reply_composer_style;                                    //@synthesize reply_composer_style=_reply_composer_style - In the implementation block
@property (assign,nonatomic) BOOL show_compact_reply_conversation;                             //@synthesize show_compact_reply_conversation=_show_compact_reply_conversation - In the implementation block
@property (assign,nonatomic) BOOL use_white_background_for_comments;                           //@synthesize use_white_background_for_comments=_use_white_background_for_comments - In the implementation block
@property (assign,nonatomic) BOOL show_reply_composer;                                         //@synthesize show_reply_composer=_show_reply_composer - In the implementation block
@property (nonatomic,copy) NSString * reply_composer_visibility;                               //@synthesize reply_composer_visibility=_reply_composer_visibility - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)comment_author_name_and_body_text_on_same_line;
-(BOOL)hide_reply_composer_when_story_not_compressed;
-(BOOL)hide_top_lvl_composer_when_story_compressed;
-(NSString *)reply_composer_style;
-(NSString *)reply_composer_visibility;
-(BOOL)show_comment_like_button;
-(BOOL)show_compact_reply_conversation;
-(BOOL)show_done_button_on_keyboard;
-(BOOL)show_more_reply_pager;
-(BOOL)show_previous_reply_pager;
-(BOOL)show_reply_composer;
-(NSString *)story_compression_criteria_bump_reasons;
-(NSString *)top_level_composer_visibility;
-(BOOL)use_white_background_for_comments;
-(void)setShow_done_button_on_keyboard:(BOOL)arg1 ;
-(void)setShow_more_reply_pager:(BOOL)arg1 ;
-(void)setShow_previous_reply_pager:(BOOL)arg1 ;
-(void)setShow_comment_like_button:(BOOL)arg1 ;
-(void)setTop_level_composer_visibility:(NSString *)arg1 ;
-(void)setHide_reply_composer_when_story_not_compressed:(BOOL)arg1 ;
-(void)setStory_compression_criteria_bump_reasons:(NSString *)arg1 ;
-(void)setHide_top_lvl_composer_when_story_compressed:(BOOL)arg1 ;
-(void)setComment_author_name_and_body_text_on_same_line:(BOOL)arg1 ;
-(void)setReply_composer_style:(NSString *)arg1 ;
-(void)setShow_compact_reply_conversation:(BOOL)arg1 ;
-(void)setUse_white_background_for_comments:(BOOL)arg1 ;
-(void)setShow_reply_composer:(BOOL)arg1 ;
-(void)setReply_composer_visibility:(NSString *)arg1 ;
@end

