/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBReactionGraphQLManagerDelegate;
@interface FBReactionGraphQLManager : NSObject {

	id<FBReactionGraphQLManagerDelegate> _delegate;
	long long _headLoadIndex;

}

@property (assign,nonatomic,__weak) id<FBReactionGraphQLManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long headLoadIndex;                                           //@synthesize headLoadIndex=_headLoadIndex - In the implementation block
-(long long)headLoadIndex;
-(void)setHeadLoadIndex:(long long)arg1 ;
-(void)setDelegate:(id<FBReactionGraphQLManagerDelegate>)arg1 ;
-(id<FBReactionGraphQLManagerDelegate>)delegate;
@end

