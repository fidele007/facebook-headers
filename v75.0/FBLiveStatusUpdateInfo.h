/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemFeedStory, NSString;

@interface FBLiveStatusUpdateInfo : FBValueObject <NSCopying> {

	FBMemFeedStory* _story;
	NSString* _broadcastStatus;

}

@property (nonatomic,copy,readonly) FBMemFeedStory * story;                  //@synthesize story=_story - In the implementation block
@property (nonatomic,copy,readonly) NSString * broadcastStatus;              //@synthesize broadcastStatus=_broadcastStatus - In the implementation block
-(FBMemFeedStory *)story;
-(NSString *)broadcastStatus;
-(id)initWithStory:(id)arg1 broadcastStatus:(id)arg2 ;
@end

