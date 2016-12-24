/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBTimeInputOptionType.h>

@class NSNumberFormatter, NSString;

@interface FBTimeInputOptionNumbers : NSObject <FBTimeInputOptionType> {

	unsigned long long _minNumber;
	unsigned long long _maxNumber;
	NSNumberFormatter* _formatter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMinNumber:(unsigned long long)arg1 maxNumber:(unsigned long long)arg2 minDigitLength:(unsigned long long)arg3 ;
-(long long)numberOfOptions;
-(long long)indexForValue:(id)arg1 ;
-(long long)indexOfOptionForCharacterPress:(id)arg1 currentIndex:(long long)arg2 ;
-(CGSize)sizeWithAttributes:(id)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
@end

