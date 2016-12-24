/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class NSString, NSArray;

@interface FBResearchPollAnswerRequest : FBNetworkerRequest {

	BOOL _fromCTA;
	NSString* _surveyID;
	NSString* _clientToken;
	NSString* _questionID;
	NSArray* _answerIDs;

}

@property (nonatomic,copy) NSString * surveyID;                 //@synthesize surveyID=_surveyID - In the implementation block
@property (nonatomic,copy) NSString * clientToken;              //@synthesize clientToken=_clientToken - In the implementation block
@property (nonatomic,copy) NSString * questionID;               //@synthesize questionID=_questionID - In the implementation block
@property (nonatomic,copy) NSArray * answerIDs;                 //@synthesize answerIDs=_answerIDs - In the implementation block
@property (assign,nonatomic) BOOL fromCTA;                      //@synthesize fromCTA=_fromCTA - In the implementation block
-(id)networkRequest;
-(NSString *)questionID;
-(NSString *)surveyID;
-(void)setSurveyID:(NSString *)arg1 ;
-(void)setQuestionID:(NSString *)arg1 ;
-(id)stringFromIDArray:(id)arg1 ;
-(BOOL)fromCTA;
-(NSArray *)answerIDs;
-(id)initWithSurveyID:(id)arg1 clientToken:(id)arg2 ;
-(id)initWithSurveyID:(id)arg1 clientToken:(id)arg2 questionID:(id)arg3 answerIDs:(id)arg4 ;
-(void)setClientToken:(NSString *)arg1 ;
-(void)setAnswerIDs:(NSArray *)arg1 ;
-(void)setFromCTA:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)clientToken;
@end
