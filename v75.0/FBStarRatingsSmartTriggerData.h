/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBStarRatingsSmartTriggerData : NSObject <NSCoding, NSCopying> {

	unsigned long long _numUses;
	unsigned long long _numSignificantEvents;

}

@property (assign,nonatomic) unsigned long long numUses;                           //@synthesize numUses=_numUses - In the implementation block
@property (assign,nonatomic) unsigned long long numSignificantEvents;              //@synthesize numSignificantEvents=_numSignificantEvents - In the implementation block
-(void)setNumSignificantEvents:(unsigned long long)arg1 ;
-(unsigned long long)numUses;
-(void)setNumUses:(unsigned long long)arg1 ;
-(unsigned long long)numSignificantEvents;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

