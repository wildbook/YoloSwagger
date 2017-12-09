#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatQueueGameTypeConfig_t {
    std::string name;
    int64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChatQueueGameTypeConfig_t& v) {
    j["name"] = v.name;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChatQueueGameTypeConfig_t& v) {
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<int64_t>();
  }
  inline std::string to_string(const LolChatQueueGameTypeConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
