/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBEventAboutViewModel : FBValueObject <NSCopying> {

	BOOL _isExpanded;
	NSString* _eventDescription;
	NSArray* _lineUpEntries;

}

@property (nonatomic,readonly) BOOL isExpanded;                               //@synthesize isExpanded=_isExpanded - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventDescription;              //@synthesize eventDescription=_eventDescription - In the implementation block
@property (nonatomic,copy,readonly) NSArray * lineUpEntries;                  //@synthesize lineUpEntries=_lineUpEntries - In the implementation block
-(NSString *)eventDescription;
-(id)initWithIsExpanded:(BOOL)arg1 eventDescription:(id)arg2 lineUpEntries:(id)arg3 ;
-(NSArray *)lineUpEntries;
-(BOOL)isExpanded;
@end

