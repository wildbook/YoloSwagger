#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatQueueGameTypeConfig_t {
    int64_t_t id;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const LolChatQueueGameTypeConfig_t& v) {
    j["id"] = v.id;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolChatQueueGameTypeConfig_t& v) {
    v.id = j.at("id").get<int64_t_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const LolChatQueueGameTypeConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
