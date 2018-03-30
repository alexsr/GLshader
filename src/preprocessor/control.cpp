#include "control.hpp"

namespace glshader::preprocessor::impl::control
{

    std::string line_directive(const files::path& file, int line)
    {
        return "\n#line " + std::to_string(line) + " \"" + file.filename().string() + "\"\n";
    }

    void increment_line(int& current_line, processed_file& processed)
    {
        processed.definitions["__LINE__"] ={ {}, std::to_string(++current_line) };
    }
}