#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameflowGameflowProcessInfo_t {
    uint32_t pid;
    std::vector<std::string> rawArgs;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowProcessInfo_t& v) {
    j["pid"] = v.pid;
    j["rawArgs"] = v.rawArgs;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowProcessInfo_t& v) {
    v.pid = j.at("pid").get<uint32_t>();
    v.rawArgs = j.at("rawArgs").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LolGameflowGameflowProcessInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
