/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSArray, NSNumber;

@interface FBFeedTopicsClassificationQueryParams : FBGraphQLInput {

	NSString* _message;
	NSString* _placeTagId;
	NSArray* _photoIds;
	NSArray* _captions;
	NSArray* _urls;
	NSString* _sessionId;
	NSArray* _taggedProfileIds;
	NSArray* _mentionIds;
	NSString* _minutiaeActionId;
	NSString* _minutiaeObjectId;
	NSString* _minutiaeObjectString;
	NSString* _targetEntId;
	NSString* _classificationSessionId;
	NSNumber* _sequenceNumber;
	NSArray* _topics;
	NSArray* _mentions;

}

@property (nonatomic,copy) NSString * message;                              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * placeTagId;                           //@synthesize placeTagId=_placeTagId - In the implementation block
@property (nonatomic,copy) NSArray * photoIds;                              //@synthesize photoIds=_photoIds - In the implementation block
@property (nonatomic,copy) NSArray * captions;                              //@synthesize captions=_captions - In the implementation block
@property (nonatomic,copy) NSArray * urls;                                  //@synthesize urls=_urls - In the implementation block
@property (nonatomic,copy) NSString * sessionId;                            //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,copy) NSArray * taggedProfileIds;                      //@synthesize taggedProfileIds=_taggedProfileIds - In the implementation block
@property (nonatomic,copy) NSArray * mentionIds;                            //@synthesize mentionIds=_mentionIds - In the implementation block
@property (nonatomic,copy) NSString * minutiaeActionId;                     //@synthesize minutiaeActionId=_minutiaeActionId - In the implementation block
@property (nonatomic,copy) NSString * minutiaeObjectId;                     //@synthesize minutiaeObjectId=_minutiaeObjectId - In the implementation block
@property (nonatomic,copy) NSString * minutiaeObjectString;                 //@synthesize minutiaeObjectString=_minutiaeObjectString - In the implementation block
@property (nonatomic,copy) NSString * targetEntId;                          //@synthesize targetEntId=_targetEntId - In the implementation block
@property (nonatomic,copy) NSString * classificationSessionId;              //@synthesize classificationSessionId=_classificationSessionId - In the implementation block
@property (nonatomic,copy) NSNumber * sequenceNumber;                       //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,copy) NSArray * topics;                                //@synthesize topics=_topics - In the implementation block
@property (nonatomic,copy) NSArray * mentions;                              //@synthesize mentions=_mentions - In the implementation block
-(void)setPhotoIds:(NSArray *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)placeTagId;
-(void)setPlaceTagId:(NSString *)arg1 ;
-(void)setCaptions:(NSArray *)arg1 ;
-(NSArray *)taggedProfileIds;
-(void)setTaggedProfileIds:(NSArray *)arg1 ;
-(NSArray *)mentionIds;
-(void)setMentionIds:(NSArray *)arg1 ;
-(NSString *)minutiaeActionId;
-(void)setMinutiaeActionId:(NSString *)arg1 ;
-(NSString *)minutiaeObjectId;
-(void)setMinutiaeObjectId:(NSString *)arg1 ;
-(NSString *)minutiaeObjectString;
-(void)setMinutiaeObjectString:(NSString *)arg1 ;
-(NSString *)targetEntId;
-(void)setTargetEntId:(NSString *)arg1 ;
-(NSString *)classificationSessionId;
-(void)setClassificationSessionId:(NSString *)arg1 ;
-(NSArray *)photoIds;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(NSNumber *)sequenceNumber;
-(void)setSequenceNumber:(NSNumber *)arg1 ;
-(void)setUrls:(NSArray *)arg1 ;
-(NSArray *)urls;
-(NSArray *)topics;
-(void)setTopics:(NSArray *)arg1 ;
-(void)setMentions:(NSArray *)arg1 ;
-(NSArray *)mentions;
-(NSArray *)captions;
@end

