/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAdaptiveBitrateAlgorithm.h>

@class NSString;

@interface FBAdaptiveBitrateTableFunction : NSObject <FBAdaptiveBitrateAlgorithm> {

	FBAdaptiveBitrateConfig* _config;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)calculateNewInputBitrate:(unordered_map<std::__1::basic_string<char>, double, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > >*)arg1 withMaxBitrate:(int)arg2 ;
-(double)calculateNewInputBitrate:(unordered_map<std::__1::basic_string<char>, double, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > >*)arg1 ;
-(id)initWithConfig:(FBAdaptiveBitrateConfig*)arg1 ;
@end
