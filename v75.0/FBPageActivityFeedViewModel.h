/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary;

@interface FBPageActivityFeedViewModel : FBValueObject <NSCopying> {

	BOOL _showContactUsRequests;
	NSArray* _types;
	NSDictionary* _titles;

}

@property (nonatomic,copy,readonly) NSArray * types;                    //@synthesize types=_types - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * titles;              //@synthesize titles=_titles - In the implementation block
@property (nonatomic,readonly) BOOL showContactUsRequests;              //@synthesize showContactUsRequests=_showContactUsRequests - In the implementation block
-(BOOL)showContactUsRequests;
-(id)initWithTypes:(id)arg1 titles:(id)arg2 showContactUsRequests:(BOOL)arg3 ;
-(NSArray *)types;
-(NSDictionary *)titles;
@end
