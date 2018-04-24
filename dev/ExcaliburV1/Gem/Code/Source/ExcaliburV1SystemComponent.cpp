
#include "ExcaliburV1_precompiled.h"

#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/EditContext.h>

#include "ExcaliburV1SystemComponent.h"

namespace ExcaliburV1
{
    void ExcaliburV1SystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (AZ::SerializeContext* serialize = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serialize->Class<ExcaliburV1SystemComponent, AZ::Component>()
                ->Version(0)
                ->SerializerForEmptyClass();

            if (AZ::EditContext* ec = serialize->GetEditContext())
            {
                ec->Class<ExcaliburV1SystemComponent>("ExcaliburV1", "[Description of functionality provided by this System Component]")
                    ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                        ->Attribute(AZ::Edit::Attributes::AppearsInAddComponentMenu, AZ_CRC("System"))
                        ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ;
            }
        }
    }

    void ExcaliburV1SystemComponent::GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC("ExcaliburV1Service"));
    }

    void ExcaliburV1SystemComponent::GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC("ExcaliburV1Service"));
    }

    void ExcaliburV1SystemComponent::GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required)
    {
        (void)required;
    }

    void ExcaliburV1SystemComponent::GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent)
    {
        (void)dependent;
    }

    void ExcaliburV1SystemComponent::Init()
    {
    }

    void ExcaliburV1SystemComponent::Activate()
    {
        ExcaliburV1RequestBus::Handler::BusConnect();
    }

    void ExcaliburV1SystemComponent::Deactivate()
    {
        ExcaliburV1RequestBus::Handler::BusDisconnect();
    }
}
