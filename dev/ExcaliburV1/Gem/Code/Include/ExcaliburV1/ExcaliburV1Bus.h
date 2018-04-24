
#pragma once

#include <AzCore/EBus/EBus.h>

namespace ExcaliburV1
{
    class ExcaliburV1Requests
        : public AZ::EBusTraits
    {
    public:
        //////////////////////////////////////////////////////////////////////////
        // EBusTraits overrides
        static const AZ::EBusHandlerPolicy HandlerPolicy = AZ::EBusHandlerPolicy::Single;
        static const AZ::EBusAddressPolicy AddressPolicy = AZ::EBusAddressPolicy::Single;
        //////////////////////////////////////////////////////////////////////////

        // Put your public methods here
    };
    using ExcaliburV1RequestBus = AZ::EBus<ExcaliburV1Requests>;
} // namespace ExcaliburV1
