//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class InnoFMDatabaseQueue, NSString;

@interface InnoSDKDataDB : NSObject
{
    InnoFMDatabaseQueue *_queue;
    NSString *_strDBPath;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)getDbFullPath:(id)arg1;
- (id)selectFromTable:(id)arg1 withColumnNames:(id)arg2 withWhereParam:(id)arg3;
- (void)updateTable:(id)arg1 Data:(id)arg2 withWhereParam:(id)arg3;
- (void)deleteFromTable:(id)arg1 withWhereParam:(id)arg2;
- (void)insertToTable:(id)arg1 Data:(id)arg2;
- (void)truncateTable:(id)arg1;
- (_Bool)hasTable:(id)arg1;
- (id)init;

@end

