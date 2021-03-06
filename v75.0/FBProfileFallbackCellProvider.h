/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComponentTableViewCellProviding.h>
#import <Facebook/FBComponentTableViewDataSourceSelectionEventListener.h>

@class NSArray, NSString;

@interface FBProfileFallbackCellProvider : NSObject <FBComponentTableViewCellProviding, FBComponentTableViewDataSourceSelectionEventListener> {

	NSArray* _dataSources;
	NSArray* _sectionCounts;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dataSource:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)dataSource:(id)arg1 tableView:(id)arg2 cellForRowAtIndexPath:(id)arg3 ;
-(double)dataSource:(id)arg1 tableView:(id)arg2 heightForRowAtIndexPath:(id)arg3 ;
-(id)_dataSourceForTableView:(id)arg1 indexPath:(id)arg2 translatedIndexPath:(out id*)arg3 ;
-(id)initWithDataSources:(id)arg1 sectionCounts:(id)arg2 ;
@end

