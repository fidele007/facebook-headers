/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBProfileSectionController.h>

@protocol FBSectionedDataSourceWriting;
@class FBUserSession, NSString;

@interface FBProfileSectionSlimNavController : NSObject <FBProfileSectionController> {

	id<FBSectionedDataSourceWriting> _writeInterface;
	BOOL _hasBeenInserted;
	FBUserSession* _session;
	NSString* _uniqueIdentifier;
	unsigned long long _sectionStartIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long sectionStartIndex;               //@synthesize sectionStartIndex=_sectionStartIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSections; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                 //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
-(unsigned long long)sectionStartIndex;
-(void)setSectionStartIndex:(unsigned long long)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg1 writeInterface:(id)arg2 session:(id)arg3 ;
-(void)configureWithPerson:(id)arg1 ;
-(unsigned long long)numberOfSections;
-(NSString *)uniqueIdentifier;
@end

