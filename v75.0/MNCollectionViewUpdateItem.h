/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewUpdateItem.h>

@class NSIndexPath;

@interface MNCollectionViewUpdateItem : UICollectionViewUpdateItem {

	NSIndexPath* _indexPathBeforeUpdate;
	NSIndexPath* _indexPathAfterUpdate;
	long long _updateAction;

}
-(id)initWithIndexPathBeforeUpdate:(id)arg1 indexPathAfterUpdate:(id)arg2 updateAction:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)updateAction;
-(id)indexPathBeforeUpdate;
-(id)indexPathAfterUpdate;
@end
