#pragma once

namespace cacarcade {
    class IDisplayModule {
        public:
            virtual void init() = 0;
            virtual void close() = 0;
    };
}
