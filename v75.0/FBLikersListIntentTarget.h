/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSString, FBMemFeedback;

@interface FBLikersListIntentTarget : FBIntentTarget {

	NSString* _feedbackID;

}

@property (nonatomic,readonly) FBMemFeedback * feedback; 
@property (nonatomic,copy,readonly) NSString * feedbackID;              //@synthesize feedbackID=_feedbackID - In the implementation block
+(id)likersListTargetWithFeedback:(id)arg1 ;
+(id)likersListTargetWithFeedbackID:(id)arg1 ;
-(id)fallbackURLs;
-(NSString *)feedbackID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FBMemFeedback *)feedback;
@end
