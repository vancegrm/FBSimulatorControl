//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec 21 2015 14:04:07).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSimulator/SimDeviceNotifier-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SimDeviceNotificationManager, SimServiceContext;
@protocol OS_dispatch_queue;

@interface SimDeviceSet : NSObject <SimDeviceNotifier>
{
    NSString *_setPath;
    NSObject<OS_dispatch_queue> *_devicesQueue;
    NSMutableDictionary *__devicesByUDID;
    NSMutableDictionary *_devicesNotificationRegIDs;
    NSMutableDictionary *__devicePairsByUUID;
    SimServiceContext *_serviceContext;
    SimDeviceNotificationManager *_notificationManager;
    NSDictionary *_defaultCreatedDevices;
}

+ (void)resubscribeAllToNotificationsInContext:(id)arg1;
+ (id)allSetsInContext:(id)arg1;
+ (id)setForSetPath:(id)arg1 serviceContext:(id)arg2;
+ (id)setForSetPath:(id)arg1;
+ (id)defaultSet;
+ (id)defaultSetPath;
@property(retain) NSDictionary *defaultCreatedDevices; // @synthesize defaultCreatedDevices=_defaultCreatedDevices;
@property(retain) SimDeviceNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(retain) SimServiceContext *serviceContext; // @synthesize serviceContext=_serviceContext;
@property(retain) NSMutableDictionary *_devicePairsByUUID; // @synthesize _devicePairsByUUID=__devicePairsByUUID;
@property(retain) NSMutableDictionary *devicesNotificationRegIDs; // @synthesize devicesNotificationRegIDs=_devicesNotificationRegIDs;
@property(retain) NSMutableDictionary *_devicesByUDID; // @synthesize _devicesByUDID=__devicesByUDID;
@property(retain) NSObject<OS_dispatch_queue> *devicesQueue; // @synthesize devicesQueue=_devicesQueue;
@property(copy) NSString *setPath; // @synthesize setPath=_setPath;
- (void)handleXPCRequestUnpair:(id)arg1 peer:(id)arg2;
- (void)handleXPCRequestPair:(id)arg1 peer:(id)arg2;
- (void)handleXPCRequestDeleteDevice:(id)arg1 peer:(id)arg2 device:(id)arg3;
- (void)handleXPCRequestCreateDevice:(id)arg1 peer:(id)arg2;
- (void)handleXPCRequest:(id)arg1 peer:(id)arg2;
- (void)handleXPCNotificationDevicePairRemoved:(id)arg1;
- (void)handleXPCNotificationDevicePairAdded:(id)arg1;
- (void)handleXPCNotificationDeviceRemoved:(id)arg1;
- (void)handleXPCNotificationDeviceAdded:(id)arg1;
- (void)handleXPCNotification:(id)arg1;
- (BOOL)unpairDevicePair:(id)arg1 error:(id *)arg2;
- (void)unpairDevicePairAsync:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createDevicePairWithGizmo:(id)arg1 companion:(id)arg2 error:(id *)arg3;
- (void)createDevicePairAsyncWithGizmo:(id)arg1 companion:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)testDevicePairingBetweenGizmo:(id)arg1 companion:(id)arg2 error:(id *)arg3;
- (BOOL)deleteDevice:(id)arg1 error:(id *)arg2;
- (void)deleteDeviceAsync:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createDeviceWithType:(id)arg1 runtime:(id)arg2 name:(id)arg3 error:(id *)arg4;
- (void)createDeviceAsyncWithType:(id)arg1 runtime:(id)arg2 name:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)unregisterNotificationHandler:(unsigned long long)arg1 error:(id *)arg2;
- (void)sendNotification:(id)arg1;
- (unsigned long long)registerNotificationHandlerOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (unsigned long long)registerNotificationHandler:(CDUnknownBlockType)arg1;
- (void)removeDevicePairAsync:(id)arg1;
- (void)addDevicePair:(id)arg1;
- (void)addDevicePairAsync:(id)arg1;
- (void)removeDeviceAsync:(id)arg1;
- (void)addDevice:(id)arg1;
- (void)addDeviceAsync:(id)arg1;
- (void)updateDefaultDevicePairingsToBundledRuntimes;
- (void)updateDefaultDevices;
- (id)devicePairsContainingDevice:(id)arg1;
@property(readonly, copy) NSArray *availableDevicePairs;
@property(readonly, copy) NSArray *devicePairs;
@property(readonly, copy) NSDictionary *devicePairsByUUID;
@property(readonly, copy) NSArray *availableDevices;
@property(readonly, copy) NSArray *devices;
@property(readonly, copy) NSDictionary *devicesByUDID;
- (id)description;
- (void)saveToDisk;
- (void)processDeviceSetPlist;
- (id)initWithSetPath:(id)arg1 serviceContext:(id)arg2;
- (id)init;
- (BOOL)subscribeToNotificationsWithError:(id *)arg1;

@end

