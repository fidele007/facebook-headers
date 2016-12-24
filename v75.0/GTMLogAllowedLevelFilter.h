/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/GTMLogFilter.h>

@class NSIndexSet, NSString;

@interface GTMLogAllowedLevelFilter : NSObject <GTMLogFilter> {

	NSIndexSet* allowedLevels_;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)filterAllowsMessage:(id)arg1 level:(int)arg2 ;
-(id)initWithAllowedLevels:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

