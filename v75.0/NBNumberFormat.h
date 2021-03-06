/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSString, NSMutableArray;

@interface NBNumberFormat : NSObject {

	BOOL nationalPrefixOptionalWhenFormatting;
	NSString* pattern;
	NSString* format;
	NSMutableArray* leadingDigitsPatterns;
	NSString* nationalPrefixFormattingRule;
	NSString* domesticCarrierCodeFormattingRule;

}

@property (nonatomic,retain) NSString * pattern; 
@property (nonatomic,retain) NSString * format; 
@property (nonatomic,retain) NSMutableArray * leadingDigitsPatterns; 
@property (nonatomic,retain) NSString * nationalPrefixFormattingRule; 
@property (assign,nonatomic) BOOL nationalPrefixOptionalWhenFormatting; 
@property (nonatomic,retain) NSString * domesticCarrierCodeFormattingRule; 
-(id)stringArrayFromData:(id)arg1 ;
-(void)setLeadingDigitsPatterns:(NSMutableArray *)arg1 ;
-(void)setNationalPrefixFormattingRule:(NSString *)arg1 ;
-(void)setNationalPrefixOptionalWhenFormatting:(BOOL)arg1 ;
-(void)setDomesticCarrierCodeFormattingRule:(NSString *)arg1 ;
-(NSMutableArray *)leadingDigitsPatterns;
-(NSString *)nationalPrefixFormattingRule;
-(BOOL)nationalPrefixOptionalWhenFormatting;
-(NSString *)domesticCarrierCodeFormattingRule;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(void)setPattern:(NSString *)arg1 ;
-(NSString *)pattern;
@end

