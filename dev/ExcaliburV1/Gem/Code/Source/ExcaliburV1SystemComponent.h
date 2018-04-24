
#pragma once

#include <AzCore/Component/Component.h>

#include <ExcaliburV1/ExcaliburV1Bus.h>

namespace ExcaliburV1
{
    class ExcaliburV1SystemComponent
        : public AZ::Component
        , protected ExcaliburV1RequestBus::Handler
    {
    public:
        AZ_COMPONENT(ExcaliburV1SystemComponent, "{A268E0F8-B979-45FD-B713-13C0C6EF8186}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

    protected:
        ////////////////////////////////////////////////////////////////////////
        // ExcaliburV1RequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
