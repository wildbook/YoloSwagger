#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatPlayerPreferences_t {
    std::string data;
    std::string hash;
    std::string type;
    uint64_t modified;
  };

  inline void to_json(nlohmann::json& j, const LolChatPlayerPreferences_t& v) {
    j["data"] = v.data;
    j["hash"] = v.hash;
    j["type"] = v.type;
    j["modified"] = v.modified;
  }

  inline void from_json(const nlohmann::json& j, LolChatPlayerPreferences_t& v) {
    v.data = j.at("data").get<std::string>();
    v.hash = j.at("hash").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.modified = j.at("modified").get<uint64_t>();
  }
  inline std::string to_string(const LolChatPlayerPreferences_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
