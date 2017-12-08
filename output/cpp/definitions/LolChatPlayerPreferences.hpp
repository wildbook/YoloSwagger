#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatPlayerPreferences_t {
    std::string_t hash;
    std::string_t data;
    uint64_t_t modified;
    std::string_t type;
  };

  inline void to_json(nlohmann::json& j, const LolChatPlayerPreferences_t& v) {
    j["hash"] = v.hash;
    j["data"] = v.data;
    j["modified"] = v.modified;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolChatPlayerPreferences_t& v) {
    v.hash = j.at("hash").get<std::string_t>();
    v.data = j.at("data").get<std::string_t>();
    v.modified = j.at("modified").get<uint64_t_t>();
    v.type = j.at("type").get<std::string_t>();
  }
  inline std::string to_string(const LolChatPlayerPreferences_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
