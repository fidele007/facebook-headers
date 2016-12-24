/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamLoadResult.h>

@class NSArray;

@interface FBReactionComponentsLoadResult : FBStreamLoadResult {

	NSArray* _reactionPaginatedComponents;
	double _networkTime;

}

@property (nonatomic,copy) NSArray * reactionPaginatedComponents;              //@synthesize reactionPaginatedComponents=_reactionPaginatedComponents - In the implementation block
@property (assign,nonatomic) double networkTime;                               //@synthesize networkTime=_networkTime - In the implementation block
-(NSArray *)reactionPaginatedComponents;
-(void)setReactionPaginatedComponents:(NSArray *)arg1 ;
-(double)networkTime;
-(void)setNetworkTime:(double)arg1 ;
@end
