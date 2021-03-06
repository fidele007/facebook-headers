/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPagePoliticalIssueOpinionLoggingInfo : FBValueObject <NSCopying> {

	NSString* _pageID;
	NSString* _pageName;
	NSString* _country;
	NSString* _issueID;

}

@property (nonatomic,copy,readonly) NSString * pageID;                //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageName;              //@synthesize pageName=_pageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * country;               //@synthesize country=_country - In the implementation block
@property (nonatomic,copy,readonly) NSString * issueID;               //@synthesize issueID=_issueID - In the implementation block
-(NSString *)pageName;
-(NSString *)issueID;
-(id)initWithPageID:(id)arg1 pageName:(id)arg2 country:(id)arg3 issueID:(id)arg4 ;
-(NSString *)country;
-(NSString *)pageID;
@end

