#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatGameflowGameMap_t {
    int64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChatGameflowGameMap_t& v) {
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChatGameflowGameMap_t& v) {
    v.id = j.at("id").get<int64_t>();
  }
  inline std::string to_string(const LolChatGameflowGameMap_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
