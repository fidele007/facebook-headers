/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBSectionedDataSourceWriting.h>

@protocol FBSectionedDataSourceWriting;
@class NSString;

@interface FBLocalStoriesSectionIndexAdapter : NSObject <FBSectionedDataSourceWriting> {

	unsigned long long _sectionOffset;
	id<FBSectionedDataSourceWriting> _writeInterface;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)enqueueChangeset:(const Changeset*)arg1 userInfo:(id)arg2 ;
-(void)enqueueReload;
-(id)initWithWriteInterface:(id)arg1 sectionOffset:(unsigned long long)arg2 ;
@end
