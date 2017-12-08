#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyPartyChatDto_t {
    std::string jid;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyChatDto_t& v) {
    j["jid"] = v.jid;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyChatDto_t& v) {
    v.jid = j.at("jid").get<std::string>();
  }
  inline std::string to_string(const LolLobbyPartyChatDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
