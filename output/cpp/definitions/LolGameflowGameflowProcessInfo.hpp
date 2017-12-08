#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameflowGameflowProcessInfo_t {
    std::vector<std::string> rawArgs;
    uint32_t pid;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowProcessInfo_t& v) {
    j["rawArgs"] = v.rawArgs;
    j["pid"] = v.pid;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowProcessInfo_t& v) {
    v.rawArgs = j.at("rawArgs").get<std::vector<std::string>>();
    v.pid = j.at("pid").get<uint32_t>();
  }
  inline std::string to_string(const LolGameflowGameflowProcessInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
