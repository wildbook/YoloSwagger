#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysReplayContextData_t {
    std::string_t componentType;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplayContextData_t& v) {
    j["componentType"] = v.componentType;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplayContextData_t& v) {
    v.componentType = j.at("componentType").get<std::string_t>();
  }
  inline std::string to_string(const LolReplaysReplayContextData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
