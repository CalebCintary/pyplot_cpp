//
// Created by calebcintary on 3/17/22.
//

#include "pyplot_cpp/Showable.hpp"

#ifdef PYPLOT_CPP_DYNAMIC_SCRIPT_RUNNER
#include "pyplot_cpp/python/DynamicScriptRunner.hpp"
#endif

void pyplot_cpp::Showable::tight_layout(bool _v) {
    _tight_layout = _v;
}

void pyplot_cpp::Showable::show(bool async) {
#ifdef PYPLOT_CPP_DYNAMIC_SCRIPT_RUNNER
    dynamicScript_show_stringConstruct();

    //Script show must be here. Not anywhere else.
    script.addLine("plt.show()");
    python::DynamicScriptRunner runner(&script);
    runner.Run(async);
#endif
}
