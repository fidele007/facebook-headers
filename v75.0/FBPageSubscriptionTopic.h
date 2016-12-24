/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface FBPageSubscriptionTopic : FBValueObject <NSCopying> {

	NSString* _label;
	NSString* _imageURLString;
	NSString* _topicId;
	NSNumber* _subscribed;

}

@property (nonatomic,copy,readonly) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageURLString;              //@synthesize imageURLString=_imageURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * topicId;                     //@synthesize topicId=_topicId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * subscribed;                  //@synthesize subscribed=_subscribed - In the implementation block
-(id)initWithLabel:(id)arg1 imageURLString:(id)arg2 topicId:(id)arg3 subscribed:(id)arg4 ;
-(NSString *)imageURLString;
-(NSString *)topicId;
-(NSString *)label;
-(NSNumber *)subscribed;
@end

