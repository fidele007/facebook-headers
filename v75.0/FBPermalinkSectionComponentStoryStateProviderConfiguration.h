/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemFeedStory, NSString, NSArray;

@interface FBPermalinkSectionComponentStoryStateProviderConfiguration : FBValueObject <NSCopying> {

	FBMemFeedStory* _feedStory;
	NSString* _feedStoryGraphAPIID;
	NSString* _feedStoryGraphQLID;
	NSArray* _parentTrackingCodes;
	NSString* _viewerFBID;

}

@property (nonatomic,copy,readonly) FBMemFeedStory * feedStory;                  //@synthesize feedStory=_feedStory - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedStoryGraphAPIID;              //@synthesize feedStoryGraphAPIID=_feedStoryGraphAPIID - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedStoryGraphQLID;               //@synthesize feedStoryGraphQLID=_feedStoryGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * parentTrackingCodes;               //@synthesize parentTrackingCodes=_parentTrackingCodes - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewerFBID;                       //@synthesize viewerFBID=_viewerFBID - In the implementation block
-(FBMemFeedStory *)feedStory;
-(NSString *)viewerFBID;
-(NSString *)feedStoryGraphAPIID;
-(NSString *)feedStoryGraphQLID;
-(NSArray *)parentTrackingCodes;
-(id)initWithFeedStory:(id)arg1 feedStoryGraphAPIID:(id)arg2 feedStoryGraphQLID:(id)arg3 parentTrackingCodes:(id)arg4 viewerFBID:(id)arg5 ;
@end

