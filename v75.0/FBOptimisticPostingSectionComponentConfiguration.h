/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBOptimisticPostingSectionComponentConfiguration.h>
@class UIViewController, NSString;


@protocol FBOptimisticPostingSectionComponentConfiguration <NSObject>
@property (nonatomic,readonly) id publicationFilterHandler; 
@property (nonatomic,readonly) UIViewController * hostingViewController; 
@property (nonatomic,readonly) BOOL offlinePostingEnabled; 
@property (nonatomic,readonly) BOOL optimisticPostingEnabled; 
@property (nonatomic,readonly) CGSize outboxConstrainedSize; 
@property (nonatomic,copy,readonly) NSString * publishTargetType; 
@property (nonatomic,readonly) unsigned long long layoutIdiom; 
@property (nonatomic,__weak,readonly) id<FBOptimisticPostingSectionComponentListener> optimisticPostingListener; 
@property (nonatomic,readonly) BOOL shouldApplyOptimisticPostingRemovalSeparately; 
@required
-(unsigned long long)layoutIdiom;
-(BOOL)shouldApplyOptimisticPostingRemovalSeparately;
-(BOOL)offlinePostingEnabled;
-(id<FBOptimisticPostingSectionComponentListener>)optimisticPostingListener;
-(id)publicationFilterHandler;
-(NSString *)publishTargetType;
-(CGSize)outboxConstrainedSize;
-(BOOL)optimisticPostingEnabled;
-(UIViewController *)hostingViewController;

@end


@protocol FBOptimisticPostingSectionComponentListener;
@class UIViewController, NSString;

@interface FBOptimisticPostingSectionComponentConfiguration : NSObject <FBOptimisticPostingSectionComponentConfiguration> {

	BOOL _offlinePostingEnabled;
	BOOL _optimisticPostingEnabled;
	BOOL _shouldApplyOptimisticPostingRemovalSeparately;
	/*^block*/id _publicationFilterHandler;
	UIViewController* _hostingViewController;
	NSString* _publishTargetType;
	unsigned long long _layoutIdiom;
	id<FBOptimisticPostingSectionComponentListener> _optimisticPostingListener;
	CGSize _outboxConstrainedSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id publicationFilterHandler; 
@property (nonatomic,readonly) UIViewController * hostingViewController; 
@property (nonatomic,readonly) BOOL offlinePostingEnabled; 
@property (nonatomic,readonly) BOOL optimisticPostingEnabled; 
@property (nonatomic,readonly) CGSize outboxConstrainedSize; 
@property (nonatomic,copy,readonly) NSString * publishTargetType;                                                             //@synthesize publishTargetType=_publishTargetType - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutIdiom;                                                                //@synthesize layoutIdiom=_layoutIdiom - In the implementation block
@property (nonatomic,__weak,readonly) id<FBOptimisticPostingSectionComponentListener> optimisticPostingListener; 
@property (nonatomic,readonly) BOOL shouldApplyOptimisticPostingRemovalSeparately; 
+(id)configurationWithPublicationFilterHandler:(/*^block*/id)arg1 publishTargetType:(id)arg2 layoutIdiom:(unsigned long long)arg3 ;
+(id)configurationWithPublicationFilterHandler:(/*^block*/id)arg1 publishTargetType:(id)arg2 layoutIdiom:(unsigned long long)arg3 configurationWithBlock:(/*^block*/id)arg4 ;
-(unsigned long long)layoutIdiom;
-(void)setPublicationFilterHandler:(id)arg1 ;
-(void)setOfflinePostingEnabled:(BOOL)arg1 ;
-(void)setOptimisticPostingEnabled:(BOOL)arg1 ;
-(BOOL)shouldApplyOptimisticPostingRemovalSeparately;
-(void)setShouldApplyOptimisticPostingRemovalSeparately:(BOOL)arg1 ;
-(BOOL)offlinePostingEnabled;
-(id<FBOptimisticPostingSectionComponentListener>)optimisticPostingListener;
-(void)setOptimisticPostingListener:(id<FBOptimisticPostingSectionComponentListener>)arg1 ;
-(id)publicationFilterHandler;
-(NSString *)publishTargetType;
-(CGSize)outboxConstrainedSize;
-(id)initWithPublicationFilterHandler:(/*^block*/id)arg1 publishTargetType:(id)arg2 layoutIdiom:(unsigned long long)arg3 configurationWithBlock:(/*^block*/id)arg4 ;
-(BOOL)optimisticPostingEnabled;
-(void)setOutboxConstrainedSize:(CGSize)arg1 ;
-(UIViewController *)hostingViewController;
-(void)setHostingViewController:(UIViewController *)arg1 ;
@end

