/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/ZRBaseDataFetcher.h>
#import <Facebook/FBRequestDelegate.h>
#import <Facebook/FBClassProvidable.h>

@protocol ZRHeaderRequestDataFetcherDelegate;
@class NSDictionary, NSString;

@interface ZRHeaderRequestDataFetcher : ZRBaseDataFetcher <FBRequestDelegate, FBClassProvidable> {

	id<ZRHeaderRequestDataFetcherDelegate> _delegate;
	NSDictionary* _response;
	NSDictionary* _savedNetworkIdentifier;

}

@property (nonatomic,copy) NSDictionary * response;                                        //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSDictionary * savedNetworkIdentifier;                          //@synthesize savedNetworkIdentifier=_savedNetworkIdentifier - In the implementation block
@property (assign,nonatomic) id<ZRHeaderRequestDataFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformResult:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)sendNetworkIdentifier:(id)arg1 ;
-(void)request:(id)arg1 didLoad:(id)arg2 ;
-(void)doSend;
-(void)_cancelRequest;
-(void)setSavedNetworkIdentifier:(NSDictionary *)arg1 ;
-(void)doCancel;
-(NSDictionary *)savedNetworkIdentifier;
-(void)setDelegate:(id<ZRHeaderRequestDataFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<ZRHeaderRequestDataFetcherDelegate>)delegate;
-(NSDictionary *)response;
-(void)send;
-(void)setResponse:(NSDictionary *)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)didFailWithError:(id)arg1 ;
-(void)didSucceed;
@end
