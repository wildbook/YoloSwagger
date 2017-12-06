#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatPlayerPreferences_t {
    std::string data;
    std::string hash;
    uint64_t modified;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolChatPlayerPreferences_t& v) {
    j["data"] = v.data;
    j["hash"] = v.hash;
    j["modified"] = v.modified;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolChatPlayerPreferences_t& v) {
    v.data = j.at("data").get<std::string>();
    v.hash = j.at("hash").get<std::string>();
    v.modified = j.at("modified").get<uint64_t>();
    v.type = j.at("type").get<std::string>();
  }
}
