#include "result.hpp"

#include "json.hpp"

namespace HengCore
{
namespace Result
{
    void to_json(nlohmann::json &j, const Result &res)
    {
        j = nlohmann::json { { "mem", res.mem },
                             { "time", res.time },
                             { "returnCode",
                               res.returnCode } };
    }
    void from_json(const nlohmann::json &j, Result &res)
    {
        j.at("mem").get_to(res.mem);
        j.at("time").get_to(res.time);
        j.at("returnCode").get_to(res.returnCode);
    }
}  // namespace Result
}  // namespace HengCore