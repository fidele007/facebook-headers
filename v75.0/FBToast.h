/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBToastDelegate;
@class UIView, NSString;

@interface FBToast : NSObject <NSCopying> {

	unsigned long long _lifetime;
	UIView* _view;
	double _visibleDuration;
	NSString* _tag;
	unsigned long long _displayStrategy;
	id<FBToastDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long lifetime;                     //@synthesize lifetime=_lifetime - In the implementation block
@property (nonatomic,readonly) UIView * view;                                   //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) double visibleDuration;                          //@synthesize visibleDuration=_visibleDuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * tag;                             //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) unsigned long long displayStrategy;              //@synthesize displayStrategy=_displayStrategy - In the implementation block
@property (assign,nonatomic,__weak) id<FBToastDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(id)initWithLifetime:(unsigned long long)arg1 view:(id)arg2 visibleDuration:(double)arg3 tag:(id)arg4 displayStrategy:(unsigned long long)arg5 ;
-(void)setNeedsResize;
-(double)visibleDuration;
-(unsigned long long)displayStrategy;
-(void)setDelegate:(id<FBToastDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id<FBToastDelegate>)delegate;
-(UIView *)view;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)tag;
-(unsigned long long)lifetime;
@end

