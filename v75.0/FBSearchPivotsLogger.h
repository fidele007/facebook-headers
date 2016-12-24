/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSearchPivotsSource;
@class NSMutableSet, NSString;

@interface FBSearchPivotsLogger : NSObject {

	id<FBSearchPivotsSource> _source;
	NSMutableSet* _seenPivotIDs;
	NSString* _context;
	unsigned long long _pivotType;

}

@property (nonatomic,copy) NSString * context;                          //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned long long pivotType;              //@synthesize pivotType=_pivotType - In the implementation block
-(void)_logEvent:(id)arg1 extra:(id)arg2 ;
-(unsigned long long)pivotType;
-(void)setPivotType:(unsigned long long)arg1 ;
-(void)logClickOnPivot:(id)arg1 atIndex:(unsigned long long)arg2 withClickType:(id)arg3 ;
-(void)logImpressionOnPivot:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithContext:(id)arg1 pivotType:(unsigned long long)arg2 source:(id)arg3 ;
-(void)logLoad;
-(id)_commonDataForPivot:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)logOpenLinkOnPivot:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSString *)context;
-(void)setContext:(NSString *)arg1 ;
@end

