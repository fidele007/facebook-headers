/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAnalyticsSequenceLogger, NSDictionary, NSOrderedSet;

@interface FBEntityCardsSequenceLoggerData : NSObject {

	FBAnalyticsSequenceLogger* _sequenceLogger;
	unsigned long long _sequenceLoggerResult;
	NSDictionary* _sequenceLoggerParams;
	NSOrderedSet* _markersForCompletion;

}

@property (nonatomic,retain) FBAnalyticsSequenceLogger * sequenceLogger;              //@synthesize sequenceLogger=_sequenceLogger - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceLoggerResult;                 //@synthesize sequenceLoggerResult=_sequenceLoggerResult - In the implementation block
@property (nonatomic,copy) NSDictionary * sequenceLoggerParams;                       //@synthesize sequenceLoggerParams=_sequenceLoggerParams - In the implementation block
@property (nonatomic,copy) NSOrderedSet * markersForCompletion;                       //@synthesize markersForCompletion=_markersForCompletion - In the implementation block
-(FBAnalyticsSequenceLogger *)sequenceLogger;
-(void)setSequenceLogger:(FBAnalyticsSequenceLogger *)arg1 ;
-(unsigned long long)sequenceLoggerResult;
-(void)setSequenceLoggerResult:(unsigned long long)arg1 ;
-(NSDictionary *)sequenceLoggerParams;
-(void)setSequenceLoggerParams:(NSDictionary *)arg1 ;
-(NSOrderedSet *)markersForCompletion;
-(void)setMarkersForCompletion:(NSOrderedSet *)arg1 ;
@end

