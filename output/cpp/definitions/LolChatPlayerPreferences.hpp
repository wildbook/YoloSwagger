#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatPlayerPreferences_t {
    uint64_t modified;
    std::string hash;
    std::string data;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolChatPlayerPreferences_t& v) {
    j["modified"] = v.modified;
    j["hash"] = v.hash;
    j["data"] = v.data;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolChatPlayerPreferences_t& v) {
    v.modified = j.at("modified").get<uint64_t>();
    v.hash = j.at("hash").get<std::string>();
    v.data = j.at("data").get<std::string>();
    v.type = j.at("type").get<std::string>();
  }
}
