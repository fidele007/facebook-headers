/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLConnectionFetchStatusListener.h>

@class NSString;

@interface FBReactionViewControllerAnalyticsLogger : NSObject <FBGraphQLConnectionFetchStatusListener> {

	BOOL _hasReceivedData;

}

@property (assign,nonatomic) BOOL hasReceivedData;                  //@synthesize hasReceivedData=_hasReceivedData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didStartLoadingData:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(void)didSuccessfullyFinishLoadingData:(unsigned long long)arg1 loadingStatus:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)didFailInLoadingDataWithError:(id)arg1 fetchType:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)didCancelLoadingData:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(BOOL)hasReceivedData;
-(void)setHasReceivedData:(BOOL)arg1 ;
@end
