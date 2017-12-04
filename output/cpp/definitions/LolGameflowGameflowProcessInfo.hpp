#ifndef SWAGGER_TYPES_LolGameflowGameflowProcessInfo_HPP
#define SWAGGER_TYPES_LolGameflowGameflowProcessInfo_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolGameflowGameflowProcessInfo {
    // 
    std::vector<std::string> rawArgs;
    // 
    uint32_t pid;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowProcessInfo& v) {
    j["rawArgs"] = v.rawArgs;
    j["pid"] = v.pid;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowProcessInfo& v) {
    v.rawArgs = j.at("rawArgs").get<std::vector<std::string>>;
    v.pid = j.at("pid").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowGameflowProcessInfo_HPP
