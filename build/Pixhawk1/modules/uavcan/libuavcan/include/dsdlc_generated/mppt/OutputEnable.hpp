/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/revange/ja/ardupilot/modules/DroneCAN/DSDL/mppt/240.OutputEnable.uavcan
 */

#ifndef MPPT_OUTPUTENABLE_HPP_INCLUDED
#define MPPT_OUTPUTENABLE_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Service to enable or disable the mppt output.
#

void6

#Examples:
# Enable MPPT output:
# enable = true, disable = false

# Disable MPPT output:
# enable = false, disable = true

# If both enable and disable are the same value then no change is applied and is used to request without changing the output.
# No Enable/Disable change, only fetching enabled:
# enable = true, disable = true
# enable = false, disable = false

bool enable
bool disable

---

void7

# The new enable state after applying the request
bool enabled
******************************************************************************/

/********************* DSDL signature source definition ***********************
mppt.OutputEnable
void6
saturated bool enable
saturated bool disable
---
void7
saturated bool enabled
******************************************************************************/

#undef _void_0
#undef enable
#undef disable
#undef _void_0
#undef enabled

namespace mppt
{

struct UAVCAN_EXPORT OutputEnable_
{
    template <int _tmpl>
    struct Request_
    {
        typedef const Request_<_tmpl>& ParameterType;
        typedef Request_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 6, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > _void_0;
            typedef ::uavcan::IntegerSpec< 1, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > enable;
            typedef ::uavcan::IntegerSpec< 1, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > disable;
        };

        enum
        {
            MinBitLen
                = FieldTypes::_void_0::MinBitLen
                + FieldTypes::enable::MinBitLen
                + FieldTypes::disable::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::_void_0::MaxBitLen
                + FieldTypes::enable::MaxBitLen
                + FieldTypes::disable::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::enable >::Type enable;
        typename ::uavcan::StorageType< typename FieldTypes::disable >::Type disable;

        Request_()
            : enable()
            , disable()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<8 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    };

    template <int _tmpl>
    struct Response_
    {
        typedef const Response_<_tmpl>& ParameterType;
        typedef Response_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 7, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > _void_0;
            typedef ::uavcan::IntegerSpec< 1, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > enabled;
        };

        enum
        {
            MinBitLen
                = FieldTypes::_void_0::MinBitLen
                + FieldTypes::enabled::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::_void_0::MaxBitLen
                + FieldTypes::enabled::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::enabled >::Type enabled;

        Response_()
            : enabled()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<8 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    };

    typedef Request_<0> Request;
    typedef Response_<0> Response;

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindService };
    enum { DefaultDataTypeID = 240 };

    static const char* getDataTypeFullName()
    {
        return "mppt.OutputEnable";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

private:
    OutputEnable_(); // Don't create objects of this type. Use Request/Response instead.
};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool OutputEnable_::Request_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        enable == rhs.enable &&
        disable == rhs.disable;
}

template <int _tmpl>
bool OutputEnable_::Request_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(enable, rhs.enable) &&
        ::uavcan::areClose(disable, rhs.disable);
}

template <int _tmpl>
int OutputEnable_::Request_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    typename ::uavcan::StorageType< typename FieldTypes::_void_0 >::Type _void_0 = 0;
    int res = 1;
    res = FieldTypes::_void_0::encode(_void_0, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::enable::encode(self.enable, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::disable::encode(self.disable, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int OutputEnable_::Request_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    typename ::uavcan::StorageType< typename FieldTypes::_void_0 >::Type _void_0 = 0;
    int res = 1;
    res = FieldTypes::_void_0::decode(_void_0, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::enable::decode(self.enable, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::disable::decode(self.disable, codec,  tao_mode);
    return res;
}

template <int _tmpl>
bool OutputEnable_::Response_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        enabled == rhs.enabled;
}

template <int _tmpl>
bool OutputEnable_::Response_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(enabled, rhs.enabled);
}

template <int _tmpl>
int OutputEnable_::Response_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    typename ::uavcan::StorageType< typename FieldTypes::_void_0 >::Type _void_0 = 0;
    int res = 1;
    res = FieldTypes::_void_0::encode(_void_0, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::enabled::encode(self.enabled, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int OutputEnable_::Response_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    typename ::uavcan::StorageType< typename FieldTypes::_void_0 >::Type _void_0 = 0;
    int res = 1;
    res = FieldTypes::_void_0::decode(_void_0, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::enabled::decode(self.enabled, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
inline ::uavcan::DataTypeSignature OutputEnable_::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xEA251F2A6DD1D8A5ULL);

    Request::FieldTypes::_void_0::extendDataTypeSignature(signature);
    Request::FieldTypes::enable::extendDataTypeSignature(signature);
    Request::FieldTypes::disable::extendDataTypeSignature(signature);

    Response::FieldTypes::_void_0::extendDataTypeSignature(signature);
    Response::FieldTypes::enabled::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef OutputEnable_ OutputEnable;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::mppt::OutputEnable > _uavcan_gdtr_registrator_OutputEnable;

}

} // Namespace mppt

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::mppt::OutputEnable::Request >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::mppt::OutputEnable::Request::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::mppt::OutputEnable::Request >::stream(Stream& s, ::mppt::OutputEnable::Request::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "enable: ";
    YamlStreamer< ::mppt::OutputEnable::Request::FieldTypes::enable >::stream(s, obj.enable, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "disable: ";
    YamlStreamer< ::mppt::OutputEnable::Request::FieldTypes::disable >::stream(s, obj.disable, level + 1);
}

template <>
class UAVCAN_EXPORT YamlStreamer< ::mppt::OutputEnable::Response >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::mppt::OutputEnable::Response::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::mppt::OutputEnable::Response >::stream(Stream& s, ::mppt::OutputEnable::Response::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "enabled: ";
    YamlStreamer< ::mppt::OutputEnable::Response::FieldTypes::enabled >::stream(s, obj.enabled, level + 1);
}

}

namespace mppt
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::mppt::OutputEnable::Request::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::mppt::OutputEnable::Request >::stream(s, obj, 0);
    return s;
}

template <typename Stream>
inline Stream& operator<<(Stream& s, ::mppt::OutputEnable::Response::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::mppt::OutputEnable::Response >::stream(s, obj, 0);
    return s;
}

} // Namespace mppt

#endif // MPPT_OUTPUTENABLE_HPP_INCLUDED