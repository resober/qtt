//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LCRouterConfigServiceProtocol-Protocol.h"

@class NSString;

@interface ConfigService : NSObject <LCRouterConfigServiceProtocol>
{
}

+ (id)sharedInstance;
- (id)coldConfigLittleVideoLikeBtn;
- (id)coldConfigLittleVideoShare;
- (_Bool)is_splash_show;
- (_Bool)is_content_expired;
- (void)recordUserActive;
- (void)setShowRedPackage:(_Bool)arg1;
- (_Bool)showRedPackage;
- (id)update_channel_ids;
- (void)setIs_channels_update:(_Bool)arg1;
- (_Bool)is_channels_update;
- (void)setLanunchStyle:(id)arg1;
- (id)launchStyle;
- (void)setCity:(id)arg1;
- (id)city;
- (void)setUse_leave:(int)arg1;
- (int)use_leave;
- (int)use_start;
- (_Bool)isFirstStartToday;
- (id)appGloabConfigIndexContentType;
- (id)guid;
- (id)innoToken;
- (id)ip;
- (id)cacheCapacity;
- (id)IDFA;
- (id)UUID;
- (id)AKU;
- (id)channel;
- (id)shortVersion;
- (id)build;
- (id)api;
- (id)adeaz_ua;
- (id)ua;
- (id)carrier;
- (id)network;
- (long long)networkStatus;
- (void)setRegex:(id)arg1;
- (id)regex;
- (id)videoChannels;
- (id)channels;
- (void)update:(id)arg1;
- (void)lightConfig;
- (void)coldStart;
- (void)start;
- (void)setColdConfig:(id)arg1;
- (id)coldConfig;
- (id)config;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
