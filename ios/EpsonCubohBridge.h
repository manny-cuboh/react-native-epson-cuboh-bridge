
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNEpsonCubohBridgeSpec.h"

@interface EpsonCubohBridge : NSObject <NativeEpsonCubohBridgeSpec>
#else
#import <React/RCTBridgeModule.h>

@interface EpsonCubohBridge : NSObject <RCTBridgeModule>
#endif

@end
