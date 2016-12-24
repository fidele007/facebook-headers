/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString;

@interface FBFeedbackLikeSubscribeData : FBGraphQLInput {

	NSString* _clientSubscriptionId;
	NSString* _feedbackId;

}

@property (nonatomic,copy) NSString * clientSubscriptionId;              //@synthesize clientSubscriptionId=_clientSubscriptionId - In the implementation block
@property (nonatomic,copy) NSString * feedbackId;                        //@synthesize feedbackId=_feedbackId - In the implementation block
-(void)setClientSubscriptionId:(NSString *)arg1 ;
-(void)setFeedbackId:(NSString *)arg1 ;
-(NSString *)feedbackId;
-(NSString *)clientSubscriptionId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
@end

