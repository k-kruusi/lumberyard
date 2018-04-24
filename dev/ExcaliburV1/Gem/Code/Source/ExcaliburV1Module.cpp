
#include "ExcaliburV1_precompiled.h"
#include <platform_impl.h>

#include <AzCore/Memory/SystemAllocator.h>

#include "ExcaliburV1SystemComponent.h"

#include <IGem.h>

namespace ExcaliburV1
{
    class ExcaliburV1Module
        : public CryHooksModule
    {
    public:
        AZ_RTTI(ExcaliburV1Module, "{C52EF6F7-ED42-47EA-9E62-DBBFEC01479F}", CryHooksModule);
        AZ_CLASS_ALLOCATOR(ExcaliburV1Module, AZ::SystemAllocator, 0);

        ExcaliburV1Module()
            : CryHooksModule()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                ExcaliburV1SystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList{
                azrtti_typeid<ExcaliburV1SystemComponent>(),
            };
        }
    };
}

// DO NOT MODIFY THIS LINE UNLESS YOU RENAME THE GEM
// The first parameter should be GemName_GemIdLower
// The second should be the fully qualified name of the class above
AZ_DECLARE_MODULE_CLASS(ExcaliburV1_4dd8d268482e4dd6a34d69a7fb7b5dc2, ExcaliburV1::ExcaliburV1Module)
