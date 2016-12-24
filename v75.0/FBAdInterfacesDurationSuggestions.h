/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBAdInterfacesDurationSuggestions : NSObject <NSCopying> {

	NSArray* _durations;
	unsigned long long _selectedDuration;

}

@property (nonatomic,copy,readonly) NSArray * durations;                         //@synthesize durations=_durations - In the implementation block
@property (nonatomic,readonly) unsigned long long selectedDuration;              //@synthesize selectedDuration=_selectedDuration - In the implementation block
+(id)emptySuggestionsWithSelectedDuration:(unsigned long long)arg1 ;
-(unsigned long long)selectedDuration;
-(id)initWithDurations:(id)arg1 selectedDuration:(unsigned long long)arg2 ;
-(id)suggestedDurationsWithUpdatedSelectedDuration:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)durations;
@end

