/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWildeMemModelObject.h>
#import <Facebook/FBSponsorable.h>
#import <Facebook/FBHideable.h>
#import <Facebook/FBQueriedEntityFieldsProtocol.h>
#import <Facebook/FBQueriedFeedUnitFieldsProtocol.h>
#import <Facebook/FBQueriedNodeFieldsProtocol.h>

@class NSString;

@interface FBMemResearchPollFeedUnit : FBWildeMemModelObject <FBSponsorable, FBHideable, FBQueriedEntityFieldsProtocol, FBQueriedFeedUnitFieldsProtocol, FBQueriedNodeFieldsProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * tracking; 
-(BOOL)sponsoredValue;
-(id)sponsoredImpressionURLs;
-(id)sponsorableID;
@end

