/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBCollegeCommunityNuxQuestionComponentState : NSObject {

	BOOL _questionsAreAlreadyAnswered;
	NSString* _viewerFirstName;

}

@property (nonatomic,copy) NSString * viewerFirstName;                      //@synthesize viewerFirstName=_viewerFirstName - In the implementation block
@property (assign,nonatomic) BOOL questionsAreAlreadyAnswered;              //@synthesize questionsAreAlreadyAnswered=_questionsAreAlreadyAnswered - In the implementation block
+(id)newWithViewerFirstName:(id)arg1 questionsAreAlreadyAnswered:(BOOL)arg2 ;
-(NSString *)viewerFirstName;
-(void)setViewerFirstName:(NSString *)arg1 ;
-(BOOL)questionsAreAlreadyAnswered;
-(void)setQuestionsAreAlreadyAnswered:(BOOL)arg1 ;
@end

