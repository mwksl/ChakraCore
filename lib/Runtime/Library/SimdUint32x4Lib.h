//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.txt file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------
#pragma once

namespace Js {

    class SIMDUint32x4Lib
    {
    public:
        class EntryInfo
        {
        public:
            static FunctionInfo Uint32x4;
            static FunctionInfo Check;
            static FunctionInfo Splat;
            // Conversions
            static FunctionInfo FromFloat32x4;
            static FunctionInfo FromFloat32x4Bits;
            static FunctionInfo FromInt32x4Bits;
            static FunctionInfo FromInt16x8Bits;
            static FunctionInfo FromInt8x16Bits;
            static FunctionInfo FromUint16x8Bits;
            static FunctionInfo FromUint8x16Bits;

            // UnaryOps
            static FunctionInfo Not;
            // BinaryOps
            static FunctionInfo Add;
            static FunctionInfo Sub;
            static FunctionInfo Mul;
            static FunctionInfo And;
            static FunctionInfo Or;
            static FunctionInfo Xor;
            // CompareOps
            static FunctionInfo LessThan;
            static FunctionInfo LessThanOrEqual;
            static FunctionInfo Equal;
            static FunctionInfo NotEqual;
            static FunctionInfo GreaterThan;
            static FunctionInfo GreaterThanOrEqual;
            static FunctionInfo Min;
            static FunctionInfo Max;
            //Lane access
            static FunctionInfo ExtractLane;
            static FunctionInfo ReplaceLane;
            // ShiftOps
            static FunctionInfo ShiftLeftByScalar;
            static FunctionInfo ShiftRightByScalar;
            // Others
            static FunctionInfo Swizzle;
            static FunctionInfo Shuffle;
            static FunctionInfo Select;

            static FunctionInfo Load;
            static FunctionInfo Load1;
            static FunctionInfo Load2;
            static FunctionInfo Load3;

            static FunctionInfo Store;
            static FunctionInfo Store1;
            static FunctionInfo Store2;
            static FunctionInfo Store3;
        };

        // Entry points to library
        // constructor
        static Var EntryUint32x4(RecyclableObject* function, CallInfo callInfo, ...);
        // type-check
        static Var EntryCheck(RecyclableObject* function, CallInfo callInfo, ...);

        static Var EntrySplat(RecyclableObject* function, CallInfo callInfo, ...);

        static Var EntryFromFloat32x4(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryFromFloat32x4Bits(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryFromInt32x4Bits(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryFromInt16x8Bits(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryFromInt8x16Bits(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryFromUint16x8Bits(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryFromUint8x16Bits(RecyclableObject* function, CallInfo callInfo, ...);

        // UnaryOps
        static Var EntryNot(RecyclableObject* function, CallInfo callInfo, ...);
        // BinaryOps
        static Var EntryAdd(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntrySub(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryMul(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryAnd(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryOr(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryXor(RecyclableObject* function, CallInfo callInfo, ...);
        // CompareOps
        static Var EntryLessThan(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryLessThanOrEqual(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryEqual(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryNotEqual(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryGreaterThan(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryGreaterThanOrEqual(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryMin(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryMax(RecyclableObject* function, CallInfo callInfo, ...);

        // Lane Access
        static Var EntryExtractLane(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryReplaceLane(RecyclableObject* function, CallInfo callInfo, ...);
        // ShiftOps
        static Var EntryShiftLeftByScalar(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryShiftRightByScalar(RecyclableObject* function, CallInfo callInfo, ...);
        // Others
        static Var EntrySwizzle(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryShuffle(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntrySelect(RecyclableObject* function, CallInfo callInfo, ...);

        static Var EntryLoad(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryLoad1(RecyclableObject* function, CallInfo callInfo, ...); // load X
        static Var EntryLoad2(RecyclableObject* function, CallInfo callInfo, ...); // load XY
        static Var EntryLoad3(RecyclableObject* function, CallInfo callInfo, ...); // load XYZ

        static Var EntryStore(RecyclableObject* function, CallInfo callInfo, ...);
        static Var EntryStore1(RecyclableObject* function, CallInfo callInfo, ...); // store X
        static Var EntryStore2(RecyclableObject* function, CallInfo callInfo, ...); // store XY
        static Var EntryStore3(RecyclableObject* function, CallInfo callInfo, ...); // store XYZ

        static Var EntryHorizontalSum(RecyclableObject* function, CallInfo callInfo, ...);
        // End entry points

    };

} // namespace Js

