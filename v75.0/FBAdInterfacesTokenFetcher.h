/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, FBAdInterfacesTokenParser, FBAdInterfacesTokenFetcherDelegate;
@class FBUserSession, NSString;

@interface FBAdInterfacesTokenFetcher : NSObject {

	FBUserSession* _session;
	id<FBServiceTransactionMutating> _currentRequestToken;
	NSString* _currentQuery;
	id<FBAdInterfacesTokenParser> _parser;
	id<FBAdInterfacesTokenFetcherDelegate> _delegate;

}

@property (nonatomic,copy) NSString * currentQuery;                                               //@synthesize currentQuery=_currentQuery - In the implementation block
@property (nonatomic,copy) id<FBAdInterfacesTokenParser> parser;                                  //@synthesize parser=_parser - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdInterfacesTokenFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_handleFailure:(id)arg1 ;
-(id)initWithSession:(id)arg1 parser:(id)arg2 ;
-(void)setDelegate:(id<FBAdInterfacesTokenFetcherDelegate>)arg1 ;
-(id<FBAdInterfacesTokenFetcherDelegate>)delegate;
-(void)setCurrentQuery:(NSString *)arg1 ;
-(NSString *)currentQuery;
-(id<FBAdInterfacesTokenParser>)parser;
-(void)setParser:(id<FBAdInterfacesTokenParser>)arg1 ;
-(void)_handleResponse:(id)arg1 ;
@end

