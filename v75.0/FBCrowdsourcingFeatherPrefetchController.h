/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating;
@class FBUserSession, NSString, NSArray;

@interface FBCrowdsourcingFeatherPrefetchController : NSObject {

	FBUserSession* _session;
	NSString* _pageDisplayName;
	id<FBServiceTransactionMutating> _token;
	/*^block*/id _completionBlock;
	NSArray* _questions;
	NSString* _placeIDCurrentlyFetchingFor;

}

@property (nonatomic,copy) NSString * placeIDCurrentlyFetchingFor;              //@synthesize placeIDCurrentlyFetchingFor=_placeIDCurrentlyFetchingFor - In the implementation block
-(NSString *)placeIDCurrentlyFetchingFor;
-(void)fetchQuestionsForPlaceID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelQuestionFetchAndClearStore;
-(void)_fetchQuestions;
-(void)setPlaceIDCurrentlyFetchingFor:(NSString *)arg1 ;
-(void)_handleError:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

