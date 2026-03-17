#pragma once

namespace cacarcade {
    class IGameModule {
        public:
            virtual void handleEvent() = 0;
    };
}
