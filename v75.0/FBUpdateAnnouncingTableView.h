/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableView.h>

@class FBTableViewUpdateListenerAnnouncer;

@interface FBUpdateAnnouncingTableView : UITableView {

	FBTableViewUpdateListenerAnnouncer* _listenerAnnouncer;

}

@property (nonatomic,readonly) FBTableViewUpdateListenerAnnouncer * listenerAnnouncer;              //@synthesize listenerAnnouncer=_listenerAnnouncer - In the implementation block
-(FBTableViewUpdateListenerAnnouncer *)listenerAnnouncer;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)beginUpdates;
-(void)endUpdates;
@end

