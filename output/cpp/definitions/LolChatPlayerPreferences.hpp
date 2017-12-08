#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatPlayerPreferences_t {
    std::string type;
    std::string hash;
    uint64_t modified;
    std::string data;
  };

  inline void to_json(nlohmann::json& j, const LolChatPlayerPreferences_t& v) {
    j["type"] = v.type;
    j["hash"] = v.hash;
    j["modified"] = v.modified;
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, LolChatPlayerPreferences_t& v) {
    v.type = j.at("type").get<std::string>();
    v.hash = j.at("hash").get<std::string>();
    v.modified = j.at("modified").get<uint64_t>();
    v.data = j.at("data").get<std::string>();
  }
  inline std::string to_string(const LolChatPlayerPreferences_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
