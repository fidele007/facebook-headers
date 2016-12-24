/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBExpandableButtonContents.h>

@class BFTask, UIView, NSString;

@interface FBExpandableBackButtonContents : NSObject <FBExpandableButtonContents> {

	BFTask* _initializationTask;
	UIView* _collapsedView;
	UIView* _expandedView;
	CGSize _collapsedSize;
	CGSize _expandedSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BFTask * initializationTask;              //@synthesize initializationTask=_initializationTask - In the implementation block
@property (nonatomic,readonly) UIView * collapsedView;                   //@synthesize collapsedView=_collapsedView - In the implementation block
@property (nonatomic,readonly) UIView * expandedView;                    //@synthesize expandedView=_expandedView - In the implementation block
@property (nonatomic,readonly) CGSize collapsedSize;                     //@synthesize collapsedSize=_collapsedSize - In the implementation block
@property (nonatomic,readonly) CGSize expandedSize;                      //@synthesize expandedSize=_expandedSize - In the implementation block
-(id)initWithCollapsedColor:(id)arg1 expandedColor:(id)arg2 ;
-(BFTask *)initializationTask;
-(UIView *)collapsedView;
-(UIView *)expandedView;
-(CGSize)collapsedSize;
-(CGSize)expandedSize;
@end

