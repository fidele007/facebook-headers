/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, FBMemFeedStory, NSString;

@interface FBIntentTarget : NSObject {

	NSMutableDictionary* _optional;

}

@property (nonatomic,copy,readonly) FBMemFeedStory * feedStory; 
@property (nonatomic,copy,readonly) NSString * feedStoryID; 
@property (nonatomic,readonly) NSMutableDictionary * optional;               //@synthesize optional=_optional - In the implementation block
+(id)intentTargetWithTarget:(id)arg1 feedStory:(id)arg2 ;
+(id)intentTargetWithTarget:(id)arg1 storyID:(id)arg2 ;
+(id)URLMapping;
+(id)_mapForURL:(id)arg1 ;
+(id)intentTargetFromURL:(id)arg1 ;
-(FBMemFeedStory *)feedStory;
-(id)fallbackURLs;
-(NSMutableDictionary *)optional;
-(NSString *)feedStoryID;
-(BOOL)isSportsPlaysIntentTarget;
-(id)init;
@end

