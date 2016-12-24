/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemFeedStory, NSString, NSURL, NSArray, NSSet, NSNumber, NSDictionary;

@interface FBPermalinkStoryManagerConfiguration : FBValueObject <NSCopying> {

	BOOL _alwaysRefreshFeedbackTarget;
	FBMemFeedStory* _feedStory;
	NSString* _feedStoryGraphQLID;
	NSString* _feedStoryGraphAPIID;
	NSURL* _fallbackURL;
	NSString* _analyticsModule;
	NSArray* _parentTrackingCodes;
	NSSet* _highlightedWords;
	unsigned long long _layoutIdiom;
	NSString* _viewerFBID;
	NSString* _notificationType;
	NSNumber* _relevantReactionKey;
	NSDictionary* _extraAnalyticsData;

}

@property (nonatomic,copy,readonly) FBMemFeedStory * feedStory;                     //@synthesize feedStory=_feedStory - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedStoryGraphQLID;                  //@synthesize feedStoryGraphQLID=_feedStoryGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedStoryGraphAPIID;                 //@synthesize feedStoryGraphAPIID=_feedStoryGraphAPIID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fallbackURL;                            //@synthesize fallbackURL=_fallbackURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;                     //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,copy,readonly) NSArray * parentTrackingCodes;                  //@synthesize parentTrackingCodes=_parentTrackingCodes - In the implementation block
@property (nonatomic,copy,readonly) NSSet * highlightedWords;                       //@synthesize highlightedWords=_highlightedWords - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutIdiom;                      //@synthesize layoutIdiom=_layoutIdiom - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewerFBID;                          //@synthesize viewerFBID=_viewerFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationType;                    //@synthesize notificationType=_notificationType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * relevantReactionKey;                 //@synthesize relevantReactionKey=_relevantReactionKey - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraAnalyticsData;              //@synthesize extraAnalyticsData=_extraAnalyticsData - In the implementation block
@property (nonatomic,readonly) BOOL alwaysRefreshFeedbackTarget;                    //@synthesize alwaysRefreshFeedbackTarget=_alwaysRefreshFeedbackTarget - In the implementation block
-(unsigned long long)layoutIdiom;
-(NSString *)analyticsModule;
-(FBMemFeedStory *)feedStory;
-(NSString *)viewerFBID;
-(NSSet *)highlightedWords;
-(NSNumber *)relevantReactionKey;
-(NSDictionary *)extraAnalyticsData;
-(NSString *)feedStoryGraphAPIID;
-(NSString *)feedStoryGraphQLID;
-(NSArray *)parentTrackingCodes;
-(id)initWithFeedStory:(id)arg1 feedStoryGraphQLID:(id)arg2 feedStoryGraphAPIID:(id)arg3 fallbackURL:(id)arg4 analyticsModule:(id)arg5 parentTrackingCodes:(id)arg6 highlightedWords:(id)arg7 layoutIdiom:(unsigned long long)arg8 viewerFBID:(id)arg9 notificationType:(id)arg10 relevantReactionKey:(id)arg11 extraAnalyticsData:(id)arg12 alwaysRefreshFeedbackTarget:(BOOL)arg13 ;
-(BOOL)alwaysRefreshFeedbackTarget;
-(NSString *)notificationType;
-(NSURL *)fallbackURL;
@end

