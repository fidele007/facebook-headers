/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class FBLocalSurfaceListDataSourceListenerAnnouncer, FBLocalSurfaceListInteractionListenerAnnouncer;

@interface FBLocalSurfaceListSectionComponentConfiguration : NSObject {

	Class _componentProvider;
	id<NSObject> _componentContext;
	FBLocalSurfaceListDataSourceListenerAnnouncer* _dataSourceAnnouncer;
	FBLocalSurfaceListInteractionListenerAnnouncer* _interactionAnnouncer;

}

@property (nonatomic,readonly) Class componentProvider;                                                            //@synthesize componentProvider=_componentProvider - In the implementation block
@property (nonatomic,readonly) id<NSObject> componentContext;                                                      //@synthesize componentContext=_componentContext - In the implementation block
@property (nonatomic,readonly) FBLocalSurfaceListDataSourceListenerAnnouncer * dataSourceAnnouncer;                //@synthesize dataSourceAnnouncer=_dataSourceAnnouncer - In the implementation block
@property (nonatomic,readonly) FBLocalSurfaceListInteractionListenerAnnouncer * interactionAnnouncer;              //@synthesize interactionAnnouncer=_interactionAnnouncer - In the implementation block
-(id<NSObject>)componentContext;
-(Class)componentProvider;
-(FBLocalSurfaceListDataSourceListenerAnnouncer *)dataSourceAnnouncer;
-(FBLocalSurfaceListInteractionListenerAnnouncer *)interactionAnnouncer;
-(id)initWithComponentProvider:(Class)arg1 componentContext:(id)arg2 dataSourceAnnouncer:(id)arg3 interactionAnnouncer:(id)arg4 ;
@end
