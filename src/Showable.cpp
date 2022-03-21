//
// Created by calebcintary on 3/17/22.
//

#include "pyplot_cpp/Showable.hpp"
#include "pyplot_cpp/plt/pyplot.hpp"

#ifdef PYPLOT_CPP_DYNAMIC_SCRIPT_RUNNER
#include "pyplot_cpp/python/DynamicScriptRunner.hpp"
#endif

void pyplot_cpp::Showable::tight_layout(bool _v) {
    _tight_layout = _v;
}

void pyplot_cpp::Showable::show(bool async) {
#ifdef PYPLOT_CPP_DYNAMIC_SCRIPT_RUNNER
    dynamicScript_CallOrder();

    if (_tight_layout) {
        script.addLine(plt::tight_layout());
    }

    script.addLine(plt::show());
    python::DynamicScriptRunner runner(&script);
    runner.Run(async);
#endif
}

void pyplot_cpp::Showable::save(const std::string &path) {
#ifdef PYPLOT_CPP_DYNAMIC_SCRIPT_RUNNER
    dynamicScript_CallOrder();

    if (_tight_layout) {
        script.addLine(plt::tight_layout());
    }

    script.addLine(plt::savefig(path));
    python::DynamicScriptRunner runner(&script);
    runner.Run();
#endif
}

void pyplot_cpp::Showable::dynamicScript_CallOrder() {
    dynamicScript_Import();
    dynamicScript_Configuration();
    dynamicScript_PostConfiguration();
}

void pyplot_cpp::Showable::setTitle(const std::string &_title) {
    this->title = _title;
}
