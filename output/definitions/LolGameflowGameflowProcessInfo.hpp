#ifndef SWAGGER_TYPES_LolGameflowGameflowProcessInfo_HPP
#define SWAGGER_TYPES_LolGameflowGameflowProcessInfo_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolGameflowGameflowProcessInfo {
    // 
    uint32_t pid;
    // 
    std::vector<std::string> rawArgs;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowProcessInfo& v) {
    j["pid"] = v.pid;
    j["rawArgs"] = v.rawArgs;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowProcessInfo& v) {
    v.pid = j.at("pid").get<uint32_t>;
    v.rawArgs = j.at("rawArgs").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowGameflowProcessInfo_HPP
