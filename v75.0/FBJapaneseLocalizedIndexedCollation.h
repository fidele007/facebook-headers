/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCustomLocalizedIndexedCollation.h>

@class NSArray, NSNotificationCenter, FBCache, NSString;

@interface FBJapaneseLocalizedIndexedCollation : NSObject <FBCustomLocalizedIndexedCollation> {

	NSNotificationCenter* _notificationCenter;
	FBCache* _collationCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * sectionIndexTitles; 
@property (nonatomic,readonly) NSArray * sectionTitles; 
-(void)_onApplicationDidEnterBackground:(id)arg1 ;
-(void)_onApplicationDidReceiveMemoryWarning:(id)arg1 ;
-(unsigned long long)collationCacheSize;
-(id)initWithNotificationCenter:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSArray *)sectionTitles;
-(NSArray *)sectionIndexTitles;
-(long long)sectionForSectionIndexTitleAtIndex:(long long)arg1 ;
-(long long)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2 ;
-(id)sortedArrayFromArray:(id)arg1 collationStringSelector:(SEL)arg2 ;
@end
