/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, FBLeadGenLocationTypeaheadFetcherDelegate;
@class FBUserSession, NSString;

@interface FBLeadGenLocationTypeaheadFetcher : NSObject {

	FBUserSession* _session;
	NSString* _locationType;
	id<FBServiceTransactionMutating> _currentRequestToken;
	NSString* _currentQuery;
	id<FBLeadGenLocationTypeaheadFetcherDelegate> _delegate;

}

@property (nonatomic,copy) NSString * currentQuery;                                                      //@synthesize currentQuery=_currentQuery - In the implementation block
@property (assign,nonatomic,__weak) id<FBLeadGenLocationTypeaheadFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_handleFailure:(id)arg1 ;
-(id)parseResponse:(id)arg1 ;
-(id)queryWithLocationType:(id)arg1 searchTerm:(id)arg2 ;
-(id)initWithSession:(id)arg1 locationType:(id)arg2 ;
-(void)setDelegate:(id<FBLeadGenLocationTypeaheadFetcherDelegate>)arg1 ;
-(id<FBLeadGenLocationTypeaheadFetcherDelegate>)delegate;
-(void)setCurrentQuery:(NSString *)arg1 ;
-(NSString *)currentQuery;
-(void)_handleResponse:(id)arg1 ;
@end
