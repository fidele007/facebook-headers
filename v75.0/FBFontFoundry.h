/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CSFBFontFoundryExport.h>
#import <Facebook/FBAccessibilityInvalidationEventsListener.h>

@class NSString;

@interface FBFontFoundry : NSObject <CSFBFontFoundryExport, FBAccessibilityInvalidationEventsListener> {

	NSString* _contentSizeCategory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)scaledFontForSize:(double)arg1 weight:(unsigned long long)arg2 ;
+(id)fontFoundryWithCurrentCategory;
+(id)scaledFontForStyle:(unsigned long long)arg1 weight:(unsigned long long)arg2 ;
+(id)fontForStyle:(unsigned long long)arg1 weight:(unsigned long long)arg2 multiplier:(double)arg3 ;
+(id)fontForSize:(double)arg1 weight:(unsigned long long)arg2 multiplier:(double)arg3 ;
+(id)autoupdatingMainTheadFontFoundry;
+(id)feedFontForStyle:(long long)arg1 weight:(unsigned long long)arg2 ;
+(id)fontForSize:(double)arg1 weight:(unsigned long long)arg2 contentSizeCategory:(id)arg3 ;
+(id)fontForStyle:(unsigned long long)arg1 weight:(unsigned long long)arg2 contentSizeCategory:(id)arg3 ;
+(id)feedFontForStyle:(long long)arg1 ;
+(id)fontFoundryWithCategory:(id)arg1 ;
-(void)didReceiveFontInvalidation;
-(id)fontForSize:(double)arg1 weight:(unsigned long long)arg2 ;
-(id)feedFontForStyle:(long long)arg1 weight:(unsigned long long)arg2 ;
-(id)fontForStyle:(unsigned long long)arg1 weight:(unsigned long long)arg2 ;
-(id)feedFontForStyle:(long long)arg1 ;
-(double)scaledContentSize:(double)arg1 ;
-(id)createFeedFontWithStyle:(id)arg1 weight:(id)arg2 ;
-(id)createFontWithFontSize:(id)arg1 weight:(id)arg2 ;
-(id)createScaledFontWithFontName:(id)arg1 fontSize:(id)arg2 ;
-(id)initWithContentSizeCategory:(id)arg1 ;
-(void)updateContentSizeCategory:(id)arg1 ;
-(BOOL)isUsingDynamicFontSize;
@end

